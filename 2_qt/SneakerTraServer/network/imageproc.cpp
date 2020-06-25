#include "imageproc.h"
#include "globalvars.h"

#include <QDebug>
#include <QImage>
#include <QStringBuilder>
#include <QDataStream>
ImageProc::ImageProc(QObject *parent) :
    QThread(parent)
{
    m_logoRelativePath = "../storelogos/";

    m_isExit = false;
}
void ImageProc::exitTread(void)
{
    m_isExit = true;
}

void ImageProc::run()
{
    while(!m_isExit)
    {
        if(!GlobalVars::g_imageMsgQueue.isEmpty())
        {
            QString msg = GlobalVars::g_imageMsgQueue.dequeue();
            parseUserImageAsk(msg);
        }
        msleep(2);
        //sleep是秒级别，msleep是毫秒，usleep是微妙
        //Sleep is to give others thread a chance to run
        //Forces the current thread to sleep for msecs milliseconds
    }
}

void ImageProc::parseUserImageAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(1).toLatin1();
    switch(cmd){
        ///通用请求命令

        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseStoreImageApply(list.at(1));break;
    default:
        break;
    }
}

void ImageProc::parseStoreImageApply(QString data)
{
    qDebug() << "ImageProc::parseStoreImageApply" << data;

    QByteArray imagebuffer;
    QDataStream ds_image(&imagebuffer,QIODevice::WriteOnly);


    QString filename;
    bool res = true;
    QStringList list = data.split("|");
    QString traid = list.at(0);
    for(int i = 1; i < list.length(); i++)
    {
        QString storeid = list.at(i);
        QString imagefilePath = m_logoRelativePath % storeid % QString(".jpg");
//        QString imagefilePath = QString("G:/lianhang/program/SneakerPro/Sneaker/2_qt/SneakerTraServer/storelogos/")
//                % storeid % QString(".jpg");
        QImage logoimg(imagefilePath);
        if(logoimg.isNull())
        {
            res = false;
            break;
        }
        QString msg = QString("|") % QString(storeid) ;
        filename.append(msg);
        ds_image << QString("%");
        ds_image << logoimg;
        qDebug() << storeid << "'s logoimg.size()" <<logoimg.size();
    }
    if(res)
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
                % QString("#!|") % QString(traid);
        command.append(filename);

        emit signalSendImgToClient(traid,filename,imagebuffer);
    }else
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
                % QString("#?|")
                % QString(traid) % QString("|")
                % QString("Error: Stores' Image Missing");
        qDebug() << " Error: Stores' Image Missing ";
//        emit signalSendMsgToClient(traid, command);
    }

}

void ImageProc::parseMerchImageApply(QString data)
{
    qDebug() << "ImageProc::parseMerchImageApply" << data;
}
