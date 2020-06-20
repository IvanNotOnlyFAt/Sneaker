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

    m_tcpSocket->connectToHost("localhost", 66666);
}
MsgSocket::~MsgSocket()
{

}

void MsgSocket::exitThread(void)
{
    m_isExit = true;
}

//bool MsgSocket::connectStatus()
//{
//    qDebug() << "m_tcpSocket->isValid()" <<m_tcpSocket->isValid();
//    return m_tcpSocket->isValid();
//}
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
//    qDebug() << "MsgSocket::parseUserAsk" << msg;
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch (cmd) {
    ///通用请求命令
    case CMD_UserLogin_L:parseUserLogin(list.at(1)); break;
    case CMD_UserInfo_I: parseUserInfo(list.at(1)); break;
    case CMD_ChangePswd_H: parseChangePswd(list.at(1)); break;
    case CMD_UserExit_X: parseUserExit(list.at(1)); break;
    case CMD_GetHomePage_M: parseGetHomePage(list.at(1));break;
    ///鞋友请求命令

    ///鞋商命令请求
    case CMD_TraderStore_S:parseTraderStore(list.at(1));break;
    default:
        break;
    }
}
///解析通用请求命令
void MsgSocket::parseUserLogin(QString data)
{
    qDebug() << "MsgSocket::parseUserLogin" << data;
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        GlobalVars::g_localUser->setID(list.at(1));
        GlobalVars::g_localUser->setPswd(list.at(2));
        GlobalVars::g_localUser->setRole(list.at(3));
        GlobalVars::g_localUser->setDate(list.at(4));
        emit signalUserLoginResult(true);
    }else
    {
        emit signalUserLoginResult(false);
    }
}
void MsgSocket::parseUserInfo(QString data)
{
    qDebug() << "MsgSocket::parseUserInfo" << data;
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        if(GlobalVars::g_localUser->getRole() == "鞋友")
        {
            GlobalVars::g_localFans->setID(list.at(1));
            GlobalVars::g_localFans->setNickName(list.at(2));
            GlobalVars::g_localFans->setTele(list.at(3));
            emit signalGainFansInfo(true);
        }else if(GlobalVars::g_localUser->getRole() == "鞋商")
        {
            GlobalVars::g_localTrader->setID(list.at(1));
            GlobalVars::g_localTrader->setName(list.at(2));
            GlobalVars::g_localTrader->setID_Num(list.at(3));
            GlobalVars::g_localTrader->setTele(list.at(4));
            emit signalGainTraderInfo(true);
        }
    }else
    {
        if(GlobalVars::g_localUser->getRole() == "鞋友")
        {
            emit signalGainFansInfo(false);
        }else if(GlobalVars::g_localUser->getRole() == "鞋商")
        {
            emit signalGainTraderInfo(false);
        }
    }
}
void MsgSocket::parseUserExit(QString data)
{
    qDebug() << "MsgSocket::parseUserExit" << data;
    QStringList list = data.split("|");
    int res = data.at(0).toLatin1();
    QString uid = list.at(1);
    if((res == RES_Down) && (uid == GlobalVars::g_localUser->getID()))
    {
        emit signalUserLogoutResult(true);
    }else
    {
        emit signalUserLogoutResult(false);
    }
}
void MsgSocket::parseChangePswd(QString data)
{
    qDebug() << "MsgProc::parseChangePswd" << data;
}
void MsgSocket::parseGetHomePage(QString data)
{
    qDebug() << "MsgProc::parseGetHomePage" << data;
}
/////////////////////////解析鞋友请求命令/////////////////////


/////////////////////////解析鞋商请求命令////////////////////
void MsgSocket::parseTraderStore(QString data)
{

    qDebug() << "MsgProc::parseTraderStore" << data;

    int res = data.at(0).toLatin1();
    if(res = RES_Down)
    {
        QStringList storemsg = data.split("/");
        GlobalVars::g_storeInfoList->clear();
        for(int i = 1; i < storemsg.length(); i++)
        {

            QString msg = storemsg[i];
            QStringList list = msg.split("|");


            QString storeid = list.at(0);
            QString traid = list.at(1);
            QString storename = list.at(2);
            QString storetype = list.at(3);
            QString storelocation = list.at(4);
            QString storelogo = list.at(5);
            QString storedate = list.at(6);
            StoreInfo info(storeid,traid,storename,storetype,storelocation,storelogo,storedate);
            GlobalVars::g_storeInfoList->append(info);
        }
        emit signalGainStoreInfo(true);

    }else
    {
        emit signalGainStoreInfo(false);
    }

}
///////////////////slot////////////////////
void MsgSocket::slotReadyRead()
{
    qDebug() << "MsgSocket::slotReadyRead() Recv: " << m_tcpSocket->bytesAvailable();
    /////////////////////////Split Big Image///////////////////////////

    if(m_tcpSocket->bytesAvailable() == 65536)
    {
        m_recvArray.append(m_tcpSocket->readAll());
    }else
    {
        m_recvArray.append(m_tcpSocket->readAll());
    /////////////////////////////////////////////////////////////////
        QDataStream in(m_recvArray);
        in.setVersion(QDataStream::Qt_4_6);

        if(m_tcpBlockSize == 0)
        {
            if(m_recvArray.size() < sizeof(quint16))
                return;
            in >> m_tcpBlockSize;
        }

        if(m_recvArray.size() < m_tcpBlockSize)
            return;
        ///判断数据类型
        in >> m_msgtype;
        qDebug() << "m_msgtype: " << m_msgtype;
        switch(m_msgtype)
        {
        case Type_Text: processTextDate(in); break;
        case Type_Image: processImageDate(in); break;
        default: break;
        }

    }
    m_tcpBlockSize = 0;
    m_recvArray.clear();
}
void MsgSocket::processTextDate(QDataStream &in)
{

    QString msg;
    in >> msg;
    qDebug() << "Client Recv: " << msg;

    /********************************************/
    GlobalVars::g_msgQueue.enqueue(msg);
    /********************************************/

}

void MsgSocket::processImageDate(QDataStream &in)
{

}

void MsgSocket::slotSendMsg(QString msg)
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);
    m_msgtype = Type_Text;
    out << (quint16)0;
    out << m_msgtype;
    out << msg;

    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16) - sizeof(quint8));

    m_tcpSocket->write(buffer);
    qDebug() << "Client Send: " << msg;
}

void MsgSocket::slotSendImg(QString commond, QByteArray image)
{

}
