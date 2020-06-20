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
    void signalSendImgToClient(QString id, QString commond, QByteArray imgbuffer);
protected:
    void run();
public slots:
private:
    bool m_isExit;
    ///////////////////////////////////////

};

#endif // IMAGEPROC_H
