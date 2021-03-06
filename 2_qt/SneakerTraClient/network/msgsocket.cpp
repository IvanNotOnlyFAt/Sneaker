#include "msgsocket.h"
#include "globalvars.h"

#include <QDebug>
#include <QImage>
#include <QBuffer>
#include <QImageReader>
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
    case CMD_GetHomePage_Z: parseGetHomePage(list.at(1));break;
    case CMD_AddInfoImage_A: parseAddInfoImage(msg.right(msg.size()-1));break;
    case CMD_RemoveInfo_D: parseRemoveInfo(msg.right(msg.size()-1));break;
    ///鞋友请求命令

    ///鞋商命令请求
    case CMD_TraderStore_S:parseTraderStore(list.at(1));break;
    case CMD_TraderMerch_M:parseTraderMerch(list.at(1));break;
    default:
        break;
    }
}
/////////////////////////////双字符的第二次解析//////////////////////////////////
void MsgSocket::parseApplyImage(QString command, QByteArray imagpacket)
{
    int cmd = command.at(0).toLatin1();

    QStringList list = command.split("#");
    switch (cmd) {
    case CMD_TraderStore_S: recvStoreImage(list.at(1), imagpacket); break;
    case CMD_TraderMerch_M: recvMerchImage(list.at(1), imagpacket); break;
    case CMD_GetHomePage_Z: recvHomeImage(command.right(command.size()-1), imagpacket); break;
    default:
        break;
    }

}

void MsgSocket::parseAddInfoImage(QString data)
{
    int cmd = data.at(0).toLatin1();

    QStringList list = data.split("#");
    switch (cmd) {
    case CMD_TraderStore_S: recvStoreApplyResult(list.at(1)); break;
    case CMD_TraderMerch_M: recvMerchApplyResult(list.at(1)); break;
    default:
        break;
    }
}

void MsgSocket::parseRemoveInfo(QString data)
{
    int cmd = data.at(0).toLatin1();

    QStringList list = data.split("#");
    switch (cmd) {
    case CMD_TraderStore_S: recvStoreDeleteResult(list.at(1)); break;
    case CMD_TraderMerch_M: recvMerchDeleteResult(list.at(1)); break;
    default:
        break;
    }
}
///////////////////////////////////////////////////////////
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
    QStringList list = data.split("/");
    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        QString storemsg = list.at(1);
        QString merchmsg = list.at(2);

        QStringList storemsglist = storemsg.split("|");
        QStringList merchmsglist = merchmsg.split("|");
        for(int i = 0; i < storemsglist.length(); i++)
        {
            GlobalVars::g_HomeStoreInfoList->append(storemsglist.at(i));
        }
        for(int i = 0; i < merchmsglist.length(); i++)
        {
            GlobalVars::g_HomeMerchInfoList->append(merchmsglist.at(i));
        }
        emit signalGainHomeInfo(true);
    }else
    {
        emit signalGainHomeInfo(false);
    }
}
/////////////////////////解析鞋友请求命令/////////////////////


/////////////////////////解析鞋商请求命令////////////////////
void MsgSocket::parseTraderStore(QString data)
{

    qDebug() << "MsgProc::parseTraderStore" << data;

    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        QStringList storemsg = data.split("/");
        GlobalVars::g_storeInfoList->clear();
        GlobalVars::g_storeInfoMap.clear();
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

            GlobalVars::g_storeInfoMap.insert(info.getID(), info);
        }
        emit signalGainStoreInfo(true);

    }else
    {
        emit signalGainStoreInfo(false);
    }

}

void MsgSocket::parseTraderMerch(QString data)
{
    qDebug() << "MsgProc::parseTraderMerch" ;

    int res = data.at(0).toLatin1();
    if(res == RES_Down)
    {
        QStringList merchmsg = data.split("/");
        GlobalVars::g_merchInfoList->clear();
        GlobalVars::g_merchInfoMap.clear();
        for(int i = 1; i < merchmsg.length(); i++)
        {

            QString msg = merchmsg[i];
            QStringList list = msg.split("|");


            QString merchid = list.at(0);
            QString storeid = list.at(1);
            QString merchname = list.at(2);
            QString merchprice = list.at(3);
            QString merchstock = list.at(4);
            QString merchsize = list.at(5);
            QString adphoto = list.at(6);
            QString descri = list.at(7);
            MerchInfo info(merchid,storeid,merchname,merchprice,merchstock,merchsize,adphoto,descri);
            GlobalVars::g_merchInfoList->append(info);
            GlobalVars::g_merchInfoMap.insert(info.getID(), info);
        }
        emit signalGainMerchInfo(true);

    }else
    {
        emit signalGainMerchInfo(false);
    }
}

void MsgSocket::recvStoreImage(QString command, QByteArray imagpacket)
{
    qDebug() << "MsgSocket::recvStoreImage" << command;
    int res = command.at(0).toLatin1();
    QStringList list = command.split("|");
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            QDataStream in(&imagpacket, QIODevice::ReadOnly);
            in.setVersion(QDataStream::Qt_4_6);

            for(int i = 2; i < list.length(); i++)
            {
                QImage img;
                QString strSplit;

                in >> img;
                in >> strSplit;

                GlobalVars::g_storeLogoImageMap.insert(list.at(i), img);
                qDebug() << list.at(i) << img.size();
            }
            emit signalGainStoreLogo(true);
        }else
        {
            emit signalGainStoreLogo(false);
        }
    }else
    {
        emit signalGainStoreLogo(false);
    }

}

void MsgSocket::recvMerchImage(QString command, QByteArray imagpacket)
{
    qDebug() << "MsgSocket::recvMerchImage" << command;
    int res = command.at(0).toLatin1();
    QStringList list = command.split("|");

    if(res == RES_Wait)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            //图片解析
            QBuffer buffer(&imagpacket);
            buffer.open(QIODevice::ReadOnly);
            QImageReader reader(&buffer,"JPG");
            QImage img = reader.read();

            if(img.isNull())
            {
                qDebug() << "---img.isNull()----" ;
            }


            GlobalVars::g_merchHostPhotoMap.insert(list.at(2), img);
            imagpacket.clear();
            qDebug() << list.at(2) << img.size() ;
            qDebug() << "--------------------------";

        }else
        {
            emit signalGainMerchHostPhoto(false);
        }
    }else if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            emit signalGainMerchHostPhoto(true);
        }else
        {
            emit signalGainMerchHostPhoto(false);
        }

    }else
    {
        qDebug() << "!!!!!!!!!!" << command;
    }

}

void MsgSocket::recvHomeImage(QString command, QByteArray imagpacket)
{
    int cmd = command.at(0).toLatin1();

    QStringList list = command.split("#");
    switch (cmd) {
    case CMD_TraderStore_S: recvHomeStoreImage(list.at(1), imagpacket); break;
    case CMD_TraderMerch_M: recvHomeMerchImage(list.at(1), imagpacket); break;
    default:
        break;
    }

}

void MsgSocket::recvHomeStoreImage(QString command, QByteArray imagpacket)
{
    qDebug() << "MsgSocket::recvHomeStoreImage" << command;
    int res = command.at(0).toLatin1();
    QStringList list = command.split("|");

    if(res == RES_Wait)
    {
        //信息解析
        QString storeid = list.at(1);
        StoreInfo info(storeid,list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7));
        GlobalVars::g_homeStoreInfoMap.insert(storeid,info);
        //图片解析
        QBuffer buffer(&imagpacket);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"JPG");
        QImage img = reader.read();

        if(img.isNull())
        {
            qDebug() << "---img.isNull()----" ;
        }


        GlobalVars::g_homeStoreLogoMap.insert(storeid, img);
        imagpacket.clear();
        qDebug() << storeid << img.size() ;
        qDebug() << "--------------------------";


    }else if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localFans->getID())
        {
            emit signalGainHomeStorePhoto(true);
            qDebug() << "--------------------------";
        }else
        {
            emit signalGainHomeStorePhoto(false);
            qDebug() << "--------------------------";
        }

    }else
    {
        qDebug() << "!!!!!!!!!!" << command;
    }
}

void MsgSocket::recvHomeMerchImage(QString command, QByteArray imagpacket)
{
    qDebug() << "MsgSocket::recvHomeMerchImage" << command;
    int res = command.at(0).toLatin1();
    QStringList list = command.split("|");

    if(res == RES_Wait)
    {
        //信息解析
        QString merchid = list.at(1);
        MerchInfo info(merchid,list.at(2),list.at(3),list.at(4),list.at(5),list.at(6),list.at(7),list.at(8));
        GlobalVars::g_homeMerchInfoMap.insert(merchid,info);
        //图片解析
        QBuffer buffer(&imagpacket);
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer,"JPG");
        QImage img = reader.read();

        if(img.isNull())
        {
            qDebug() << "---img.isNull()----" ;
        }


        GlobalVars::g_homeMerchHostMap.insert(merchid, img);
        imagpacket.clear();
        qDebug() << merchid << img.size() ;
        qDebug() << "--------------------------";


    }else if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localFans->getID())
        {
            emit signalGainHomeMerchPhoto(true);
            qDebug() << "--------------------------";
        }else
        {
            emit signalGainHomeMerchPhoto(false);
            qDebug() << "--------------------------";
        }

    }else
    {
        qDebug() << "!!!!!!!!!!" << command;
    }
}

void MsgSocket::recvStoreApplyResult(QString data)
{
    qDebug() << "MsgSocket::recvStoreApplyResult" << data;
    int res = data.at(0).toLatin1();
    QStringList list = data.split("|");
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            emit signalApplyStoreResult(true,list.at(2));
        }else
        {
            emit signalApplyStoreResult(false,list.at(2));
        }
    }else
    {
        emit signalApplyStoreResult(false,list.at(2));
    }

}

void MsgSocket::recvMerchApplyResult(QString data)
{
    qDebug() << "MsgSocket::recvMerchApplyResult" << data;
    int res = data.at(0).toLatin1();
    QStringList list = data.split("|");
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            emit signalApplyMerchResult(true,list.at(2));
        }else
        {
            emit signalApplyMerchResult(false,list.at(2));
        }
    }else
    {
        emit signalApplyMerchResult(false,list.at(2));
    }
}

void MsgSocket::recvStoreDeleteResult(QString data)
{
    qDebug() << "MsgSocket::recvStoreDeleteResult" << data;
    int res = data.at(0).toLatin1();
    QStringList list = data.split("|");
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            emit signalDeleteStoreResult(true);
        }
    }else
    {
        emit signalDeleteStoreResult(false);
    }

}

void MsgSocket::recvMerchDeleteResult(QString data)
{
    qDebug() << "MsgSocket::recvMerchDeleteResult" << data;
    int res = data.at(0).toLatin1();
    QStringList list = data.split("|");
    if(res == RES_Down)
    {
        if(list.at(1) == GlobalVars::g_localTrader->getID())
        {
            emit signalDeleteMerchResult(true);
        }
    }else
    {
        emit signalDeleteMerchResult(false);
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

        int totalLen = m_recvArray.size();
        while( totalLen )
        {
            if(m_tcpBlockSize == 0)
            {
                if(m_recvArray.size() < sizeof(quint32))
                    return;
                in >> m_tcpBlockSize;
            }
//            qDebug() << "============totalLen=============" <<totalLen ;
//            qDebug() << "===============m_tcpBlockSize==========" <<m_tcpBlockSize ;
            if(m_recvArray.size() < m_tcpBlockSize)
                return;
            ///判断数据类型
            quint8 msgtype;
            in >> msgtype;
            qDebug() << "msgtype: " << msgtype;

            switch(msgtype)
            {
            case Type_Text: processTextDate(in); break;   //处理文本消息
            case Type_Image: processImageDate(in); break; //处理图片消息
            default: break;
            }
            ///////////////////////////////////////
            ///解决粘包问题
            ///返回此轮消息之后的消息，并将其重新赋给m_recvArray，循环条件为totalLen
            QByteArray tempbuffer;
            tempbuffer = m_recvArray.right(totalLen - m_tcpBlockSize - sizeof(quint32));
            m_recvArray = tempbuffer;
            totalLen = m_recvArray.size();
            m_tcpBlockSize = 0;
            //////////////////////////////////////
        }
        m_recvArray.clear();
    }

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
    QString command;
    QByteArray imagpacket;

    in >> command;
    in >> imagpacket;

    qDebug() << "Client Recv Command:" << command;

    int cmd = command.at(0).toLatin1();
    switch (cmd) {
    case CMD_ApplyImage_P: parseApplyImage(command.right(command.size()-1), imagpacket); break;
    default:
        break;
    }
}

void MsgSocket::slotSendMsg(QString msg)
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    quint8 msgtype;
    msgtype = Type_Text;
    out << (quint32)0;
    out << msgtype;
    out << msg;

    out.device()->seek(0);
    out << (quint32)(buffer.size() - sizeof(quint32));

    m_tcpSocket->write(buffer);
    qDebug() << "Client Send: " << msg;
}

void MsgSocket::slotSendImg(QString command, QByteArray image)
{
    QByteArray buffer;
    QDataStream out(&buffer,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    quint8 msgtype;
    msgtype = Type_Image;

    out << (quint32)0;
    out << msgtype;
    out << command;
    out << image;
    out.device()->seek(0);
    out << (quint32)(buffer.size() - sizeof(quint32));

    qDebug() << "Client Send image: " << command << buffer.size() << "其中图片：" << image.size();

    m_tcpSocket->write(buffer);
}
bool MsgSocket::wiatToWriteSuccess()
{
    return m_tcpSocket->waitForBytesWritten();
}
