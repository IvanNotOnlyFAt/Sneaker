#ifndef MSGSOCKET_H
#define MSGSOCKET_H

#include "globalvars.h"

#include <QObject>
#include <QTcpSocket>
#include <QMap>
class MsgSocket : public QObject
{
    Q_OBJECT

public:
    explicit MsgSocket(QTcpSocket *socket,QObject *parent = 0);
    ~MsgSocket();

signals:
    //收发之后的，登入登出的具体操作也交给socket执行（因为登入登出比较特殊）
    void signalRegisterSocket(QString id,MsgSocket *socket);
    void signalLogoutSocket(QString id,MsgSocket *socket);

public slots:
    //收发预处理api由socket完成，具体分解交给线程
    void slotReadyRead();           //socket->SIGNAL(readyRead()的槽
    bool slotSendMsg(QString msg);  //进程thread-发送msg的槽
    bool slotSendImg(QString commend,QByteArray imagebuffer);
private:
    void processTextDate(QDataStream &in);
    void processImageDate(QDataStream &in);
    //对应登入登出的实际解析操作
    void parseUserLogin(QString msg);
    void parseUserExit(QString msg);
    QByteArray m_recvArray;
    quint16 m_tcpBlockSize;
    quint8 m_msgtype;
    QTcpSocket *m_socket;

};
typedef QMap<QString,MsgSocket*> SocketMap;
#endif // MSGSOCKET_H
