#ifndef MSGSOCKET_H
#define MSGSOCKET_H

#include <QThread>
#include <QTcpSocket>

class MsgSocket : public QThread
{
    Q_OBJECT
public:
    explicit MsgSocket(QThread *parent = 0);
    ~MsgSocket();
    void exitThread(void);
signals:
//    void signalChangPswdSuccess();

    void signalUserLoginResult(bool res);
    void signalUserLogoutResult(bool res);
    void signalGainFansInfo(bool res);
    void signalGainTraderInfo(bool res);
public slots:
    void slotReadyRead();
    void slotSendMsg(QString msg);//用于有线程的时候与发送信号连接
protected:
    void run();
private:
    bool m_isExit;
    quint16 m_tcpBlockSize;
    QTcpSocket *m_tcpSocket;

    void parseUserAsk(QString msg);
    ///解析通用请求命令
    void parseUserLogin(QString data);
    void parseUserInfo(QString data);
    void parseChangePswd(QString data);
    void parseUserExit(QString data);
    void parseGetHomePage(QString data);
};

#endif // MSGSOCKET_H
