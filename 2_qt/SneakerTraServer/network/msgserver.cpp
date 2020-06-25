#include "msgserver.h"

MsgServer::MsgServer(QObject *parent) :
    QObject(parent)
{

    m_socketMap.clear();
    m_msgProc = new MsgProc;
    m_imageProc = new ImageProc;
    m_server = new QTcpServer(this);


    connect(m_server, SIGNAL(newConnection()),
            this, SLOT(slotNewConnection()));
    connect(m_msgProc, SIGNAL(signalSendMsgToClient(QString,QString)),
            this, SLOT(slotSendMsgToClient(QString,QString)));
    connect(m_imageProc, SIGNAL(signalSendImgToClient(QString,QString,QByteArray)),
            this, SLOT(slotSendImgToClient(QString,QString,QByteArray)));
    connect(m_imageProc, SIGNAL(signalSendMsgToClient(QString,QString)),
            this, SLOT(slotSendMsgToClient(QString,QString)));

    m_server->listen(QHostAddress::Any, 66666);
    m_msgProc->start();
    m_imageProc->start();

}
MsgServer::~MsgServer()
{
    //退出进程 m_msgProc::m_isExit = ture ,m_msgProc::run()  stop;
    m_msgProc->exitTread();
    m_imageProc->exitTread();

    ///Blocks(阻塞) the thread until 1：when it returns from run().[run() is finish]
    /// 1.线程调用wait（）函数时，阻塞一直等到该线程执行完成之后再执行wait（）下面的代码
    /// 也就是说，线程池中最后取出来的指令执行完之后，再delete 线程，但是线程池中剩下的指令是不再取出的
    /// 2:QThread::wait(unsigned long time = ULONG_MAX) The ULONG_MAX has elapsed

    if(m_msgProc->wait())
    {
        delete m_msgProc;
    }
    if(m_imageProc->wait())
    {
        delete m_imageProc;
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

void MsgServer::slotSendImgToClient(QString id, QString command, QByteArray imagebuffer)
{
    if(m_socketMap.contains(id))
    {
        m_socketMap[id]->slotSendImg(command,imagebuffer);
    }
}
