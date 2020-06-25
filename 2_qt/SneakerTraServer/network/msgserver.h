#ifndef MSGSERVER_H
#define MSGSERVER_H

#include "msgsocket.h"
#include "msgproc.h"
#include "imageproc.h"

#include <QObject>
#include <QTcpServer>

class MsgServer : public QObject
{
    Q_OBJECT //Q_OBJECT宏必须出现在类定义的私有部分中，该类声明其自身的信号和插槽，或者使用Qt的<元对象>系统提供的其他服务。
public:
    explicit MsgServer(QObject *parent = 0);
    ~MsgServer();


public slots:
    void slotNewConnection();
    void slotRegisterSocket(QString id, MsgSocket *socket);
    void slotLogoutSocket(QString id, MsgSocket *socket);
    void slotSendMsgToClient(QString id, QString msg);
    void slotSendImgToClient(QString id,QString command, QByteArray iamgebuffer);
private:
    QTcpServer *m_server;

    ///one thread
    MsgProc *m_msgProc;
    ImageProc *m_imageProc;
    SocketMap m_socketMap;

};

#endif // MSGSERVER_H
