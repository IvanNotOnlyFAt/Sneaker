#include "msgsocket.h"

#include <QStringBuilder> //为了用%
#include <QDataStream>

MsgSocket::MsgSocket(QTcpSocket *socket ,QObject *parent) :
    QObject(parent)
{
    qDebug() << "MsgSocket::MsgSocket";

    m_tcpBlockSize = 0;
    m_socket = socket;

    connect(m_socket,SIGNAL(disconnected()),
            m_socket,SLOT(deleteLater()));//deleteLater为了使用线程后，顺利销毁m_socket=soket的连接
    /*Disconnect when socket has an error and Schedules this object for deletion.*/
    /*如果调用此函数时事件循环未运行（例如，在QCoreApplication :: exec（）之前在对象上调用deleteLater（）），*/
    /*则一旦事件循环启动，该对象将被删除。 如果在主事件循环停止后调用deleteLater（），则不会删除该对象。*/
    /*从Qt 4.8开始，如果在没有运行事件循环的线程中的对象上调用deleteLater（），则该对象在线程完成时将被销毁。*/
    connect(m_socket,SIGNAL(readyRead()),
            this,SLOT(slotReadyRead()));
}

MsgSocket::~MsgSocket()
{

}



void MsgSocket::parseUserLogin(QString msg)
{
    qDebug() << "MsgSocket::parseUserLogin" << msg;

    QStringList list = msg.remove("L#").split("|");
    QString id = list.at(0);
    QString pswd = list.at(1);
    qDebug() << "id::pswd" << id << " " << pswd;
    if(GlobalVars::g_userInfoMap.contains(id))
    {
        UserInfoList::iterator it = GlobalVars::g_userInfoMap[id];

        it->display();
        if(it->getPswd() == pswd)
        {
            QString msg = QString(CMD_UserLogin_L)
                    % QString("#!|") % it->getID()
                    % "|" % it->getPswd()
                    % "|" % it->getRole()
                    % "|" % it->getDate();
            ////////////////////////////////
            this->slotSendMsg(msg);//this很重要，每个id对应一个socket
            emit signalRegisterSocket(id,this);//把对应的socket加入socketmap
            ////////////////////////////////
        }else
        {
            QString msg = QString(CMD_UserLogin_L)
                    % QString("#?|") % it->getID()
                    % "|" % QString("Error: UID or Pswd!");
            this->slotSendMsg(msg);//此socket不进入socketmap
        }
    }else
    {
        QString msg = QString(CMD_UserLogin_L)
                % QString("#?|") % id
                % "|" % QString("Error: ID is not exist!");
        this->slotSendMsg(msg);//此socket不进入socketmap
    }
}
void MsgSocket::parseUserExit(QString msg)
{
     qDebug() << "MsgSocket::parseUserExit" << msg;

     QString id = msg.remove("X#");
     qDebug() << "parseUserExit id =" << id;

     emit signalLogoutSocket(id,this);

     QString endmsg =QString(CMD_UserExit_X)
             % QString("#!|") % id;

    this->slotSendMsg(endmsg);
}

void MsgSocket::slotReadyRead()
{
    qDebug() << "MsgSocket::slotReadyRead() Recv: " << m_socket->bytesAvailable();
    /////////////////////////Split Big Image///////////////////////////

    if(m_socket->bytesAvailable() == 65536)
    {
        m_recvArray.append(m_socket->readAll());
    }else
    {
        m_recvArray.append(m_socket->readAll());
    /////////////////////////////////////////////////////////////////
        QDataStream in(m_recvArray);
        in.setVersion(QDataStream::Qt_4_6);
        int totalLen = m_recvArray.size();

        while( totalLen )
        {
            if(m_tcpBlockSize == 0)
            {
                if(m_recvArray.size() < sizeof(quint16))
                    return;
                in >> m_tcpBlockSize;
            }

            if(m_recvArray.size() < m_tcpBlockSize)
                return;
            ///判断数据类型
            quint8 msgtype;
            in >> msgtype;
            qDebug() << "msgtype: " << msgtype;

            switch(msgtype)
            {
            case Type_Text: processTextDate(in); break;
            case Type_Image: processImageDate(in); break;
            default: break;
            }
            ///////////////////////////////////////
            ///解决粘包问题
            QByteArray tempbuffer;
            tempbuffer = m_recvArray.right(totalLen - m_tcpBlockSize - sizeof(quint16));
            //返回此轮消息的
            m_recvArray = tempbuffer;
            totalLen = m_recvArray.size();
            m_tcpBlockSize = 0;
            //////////////////////////////////////
        }
    }
    m_recvArray.clear();
}

void MsgSocket::processTextDate(QDataStream &in)
{
    QString msg;
    in >> msg;
    qDebug() << "Server Recv: " << msg;
    ////////////////////////////////////////////////////////

    int headmsg = msg.at(0).toLatin1();

    if(headmsg == CMD_UserLogin_L)
    {
        parseUserLogin(msg);
    }else if(headmsg == CMD_UserExit_X)
    {
        parseUserExit(msg);
    }else if(headmsg == CMD_ApplyImage_P)
    {
        GlobalVars::g_imageMsgQueue.enqueue(msg);
    }else
    {
        GlobalVars::g_msgQueue.enqueue(msg);
    }
    ///////////////////////////////////////////////
}

void MsgSocket::processImageDate(QDataStream &in)
{

}


bool MsgSocket::slotSendMsg(QString msg)
{
    //QByteArray buffer是通道载体；QDataStream 是管理模式设置
    QByteArray buffer;
    QDataStream out(&buffer,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    quint8 msgtype;
    msgtype = Type_Text;
    out << (quint16)0;
    out << msgtype;
    out << msg;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << "Server Send: " << msg;
    m_socket->write(buffer);
    if(wiatToWriteSuccess())
    {
        qDebug() << "wiatToWriteSuccess Send: " << true;
        return true;

    }else
    {
        qDebug() << "wiatToWriteSuccess Send: " << false;
        return false;
    }

}
bool MsgSocket::slotSendImg(QString command, QByteArray imagebuffer)
{
    QByteArray buffer;
    QDataStream out(&buffer,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    quint8 msgtype;
    msgtype = Type_Image;

    out << (quint16)0;
    out << msgtype;
    out << command;
    out << imagebuffer;
    out.device()->seek(0);
    out << (quint16)(buffer.size() - sizeof(quint16));

    qDebug() << "Server Send image: " << command << imagebuffer.size();

    return m_socket->write(buffer);

}

bool MsgSocket::wiatToWriteSuccess()
{
    return m_socket->waitForBytesWritten();
}

