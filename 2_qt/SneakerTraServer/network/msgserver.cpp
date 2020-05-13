#include "msgserver.h"

MsgServer::MsgServer(QObject *parent) :
    QObject(parent)
{
    m_server = new QTcpServer(this);
    m_socketMap.clear();
    m_msgProc = new MsgProc;


    connect(m_server, SIGNAL(newConnection()),
            this, SLOT(slotNewConnection()));
    connect(m_msgProc, SIGNAL(signalSendMsgToClient(QString,QString)),
            this, SLOT(slotSendMsgToClient(QString,QString)));

    m_server->listen(QHostAddress::Any, 55555);
    m_msgProc->start();

}
MsgServer::~MsgServer()
{
    //退出进程 m_msgProc::m_isExit = ture ,m_msgProc::run()  stop;
    m_msgProc->exitTread();

    if(m_msgProc->wait())
    {
        delete m_msgProc;
    }
}

void MsgServer::slotNewConnection()
{
    //////////////m_server有新连接就创建一个新socket/////////////////
    qDebug() << " MsgServer::slotNewConnection()";
    QTcpSocket *socket = m_server->nextPendingConnection();//返回刚进入并挂起等待成为socket的连接
     ////////////////////////msgsocket.h///////////////////////////////
    MsgSocket *msgSocket = new MsgSocket(socket);
    connect(msgSocket, SIGNAL(signalRegisterSocket(QString,MsgSocket*)),
            this, SLOT(slotRegisterSocket(QString,MsgSocket*)));
    connect(msgSocket, SIGNAL(signalLogoutSocket(QString,MsgSocket*)),
            this, SLOT(slotLogoutSocket(QString,MsgSocket*)));

}
void MsgServer::slotRegisterSocket(QString id, MsgSocket *socket)
{
    m_socketMap.insert(id,socket);
}
void MsgServer::slotLogoutSocket(QString id, MsgSocket *socket)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap.remove(id);
    }
}
void MsgServer::slotSendMsgToClient(QString id, QString msg)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap[id]->slotSendMsg(msg);
    }
}
