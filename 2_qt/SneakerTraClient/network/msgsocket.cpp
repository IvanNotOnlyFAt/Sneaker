#include "msgsocket.h"
#include "globalvars.h"

#include <QDebug>

MsgSocket::MsgSocket(QThread *parent) :
    QThread(parent)
{
    m_isExit = false;
    m_tcpBlockSize = 0;
    m_tcpSocket = new QTcpSocket(this);

    connect(m_tcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotReadyRead()));

    m_tcpSocket->connectToHost("localhost", 55555);
}
MsgSocket::~MsgSocket()
{

}

void MsgSocket::exitThread(void)
{
    m_isExit = true;
}
void MsgSocket::run()
{
    while(!m_isExit)
    {
        if(!GlobalVars::g_msgQueue.isEmpty())
        {
            QString msg = GlobalVars::g_msgQueue.dequeue();
            parseUserAsk(msg);
        }
        msleep(20);
    }
}

/////////////////////parse/////////////////////
void MsgSocket::parseUserAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch (cmd) {
    ///通用请求命令
    case CMD_UserLogin_L:parseUserLogin(list.at(1));
    case CMD_UserInfo_I: parseUserInfo(list.at(1)); break;
    case CMD_ChangePswd_H: parseChangePswd(list.at(1)); break;
    case CMD_UserExit_X: parseUserExit(list.at(1)); break;
    case CMD_GetHomePage_M: parseGetHomePage(list.at(1));break;
    ///鞋友请求命令
    ///鞋商命令请求
    default:
        break;
    }
}
///解析通用请求命令
void MsgSocket::parseUserLogin(QString data)
{

}
void MsgSocket::parseUserInfo(QString data)
{

}
void MsgSocket::parseChangePswd(QString data)
{

}
void MsgSocket::parseUserExit(QString data)
{

}
void MsgSocket::parseGetHomePage(QString data)
{

}


///////////////////slot////////////////////
void MsgSocket::slotReadyRead()
{
    QDataStream in(m_tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);

    if(m_tcpBlockSize == 0)
    {
        if(m_tcpSocket->bytesAvailable() < sizeof(quint16))
            return;
        in >> m_tcpBlockSize;
    }
    if(m_tcpSocket->bytesAvailable() < m_tcpBlockSize)
        return;

    QString msg;
    in >> msg;
    qDebug() << "Client Recv: " << msg;

    /********************************************/
    GlobalVars::g_msgQueue.enqueue(msg);
    /********************************************/
    m_tcpBlockSize = 0;
}
void MsgSocket::slotSendMsg(QString msg)
{
    QByteArray buffer;
    QDataStream out(m_tcpSocket);
    out.setVersion(QDataStream::Qt_4_6);

    out << (quint16)0;
    out << msg;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << "Client Send: " << msg;

    m_tcpSocket->write(buffer);
}
