#ifndef IMAGEPROC_H
#define IMAGEPROC_H


#include <QThread>
class ImageProc : public QThread
{
    Q_OBJECT
public:
    explicit ImageProc(QObject *parent = 0);
    void exitTread(void); //退出进程
signals:
    void signalSendImgToClient(QString id, QString command, QByteArray imagebuffer);
    void signalSendMsgToClient(QString id,QString msg);
protected:
    void run();
public slots:
private:
    bool m_isExit;

    ///////////////////////////////////////
    void parseUserImageAsk(QString msg);
    ///解析通用图片请求命令 - 登录退出在MsgSocket中实现

    ///解析鞋友图片请求命令

    ///解析鞋商图片请求命令
    void parseStoreImageApply(QString data);
    void parseMerchImageApply(QString data);


};

#endif // IMAGEPROC_H
