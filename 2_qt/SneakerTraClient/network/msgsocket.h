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
//    bool connectStatus();
    bool wiatToWriteSuccess();//等待上一条发完之后再发
signals:
//    void signalChangPswdSuccess();

    void signalUserLoginResult(bool res);
    void signalUserLogoutResult(bool res);
    void signalGainFansInfo(bool res);
    void signalGainTraderInfo(bool res);
    void signalGainMerchInfo(bool res);
    void signalGainStoreInfo(bool res);
    void signalGainStoreLogo(bool res);
    void signalGainMerchHostPhoto(bool res);
    void signalApplyStoreResult(bool res, QString newID);
    void signalDeleteStoreResult(bool res);
public slots:
    void slotReadyRead();
    void slotSendMsg(QString msg);//用于有线程的时候与发送信号连接
    void slotSendImg(QString command,QByteArray image);
protected:
    void run();
private:
    void processTextDate(QDataStream &in);
    void processImageDate(QDataStream &in);
    bool m_isExit;
    quint16 m_tcpBlockSize;

    QTcpSocket *m_tcpSocket;
    QByteArray m_recvArray;

    void parseUserAsk(QString msg);


    ///解析通用请求命令
    void parseUserLogin(QString data);
    void parseUserInfo(QString data);
    void parseChangePswd(QString data);
    void parseUserExit(QString data);
    void parseGetHomePage(QString data);
    void parseApplyImage(QString command, QByteArray imagpacket);
    void parseAddInfoImage(QString data);
    void parseRemoveInfo(QString data);
    ///鞋友请求命令

    ///鞋商命令请求
    void parseTraderStore(QString data);
    void parseTraderMerch(QString data);
    void recvStoreImage(QString command,  QByteArray imagpacket);
    void recvMerchImage(QString command,  QByteArray imagpacket);
    void recvStoreApplyResult(QString data);
    void recvStoreDeleteResult(QString data);


};

#endif // MSGSOCKET_H
