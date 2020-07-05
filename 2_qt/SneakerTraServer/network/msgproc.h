#ifndef MSGPROC_H
#define MSGPROC_H

#include <QThread>
class MsgProc : public QThread
{
    Q_OBJECT
signals:
    void signalSendMsgToClient(QString id,QString msg);


public:
    explicit MsgProc(QObject *parent = 0);
    void exitTread(void); //退出进程

protected:
    void run();

private:
    bool m_isExit;
    ///////////////////////////////////////
    void parseUserAsk(QString msg);
    ///解析通用请求命令 - 登录退出在MsgSocket中实现
    void parseUserInfo(QString data);
    void parseChangePswd(QString data);
    void parseGetHomePage(QString data);
    void parseRemoveInfo(QString data);
    ///解析鞋友请求命令

    ///解析鞋商请求命令
    void parseTraderStore(QString data);
    void parseStoreDelete(QString data);
    void parseTraderMerch(QString data);

};

#endif // MSGPROC_H
