#include "imageproc.h"
#include "globalvars.h"
#include "filepathcontents.h"
#include "execsql.h"

#include <QDebug>
#include <QImage>
#include <QStringBuilder>
#include <QDataStream>
ImageProc::ImageProc(QObject *parent) :
    QThread(parent)
{


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

void ImageProc::parseFisUserImageAsk(QString msg)
{

    int cmd = msg.at(0).toLatin1();
    switch(cmd){
        ///通用请求命令
    case CMD_ApplyImage_P:parseApplyImageAsk(msg.remove(CMD_ApplyImage_P));break;
    case CMD_AddInfoImage_A:parseAddImageAsk(msg.remove(CMD_AddInfoImage_A));break;
    default:
        break;
    }
}

void ImageProc::parseApplyImageAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch(cmd){
        ///通用请求命令

        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseStoreImageApply(list.at(1));break;
    default:
        break;
    }
}

void ImageProc::parseAddImageAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch(cmd){
        ///通用请求命令

        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseStoreAddApply(list.at(1));break;
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

        QImage logoimg;
        logoimg.load(FilePathContents::getStoreLogoPath(storeid));//获取路径下的logo


        if(logoimg.isNull())
        {
            res = false;
        }

        QString msg = QString("|") % QString(storeid);
        filename.append(msg);

        ds_image << logoimg;
        ds_image << QString('%');//图片用%隔开
//        qDebug() << FilePathContents::getStoreLogoPath(storeid);
        qDebug() << storeid << "'s logoimg.size(): " <<logoimg.size();
    }

    qDebug()<< "imagebuffer.size(): " <<imagebuffer.size();
    if(res)
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
                % QString("#!|") % QString(traid);
        command.append(filename);

        emit signalSendImgToClient(traid,command,imagebuffer);
    }else
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
                % QString("#?|")
                % QString(traid) % QString("|")
                % QString("Error: Stores' Image Missing");
        emit signalSendMsgToClient(traid, command);
    }

}

void ImageProc::parseMerchImageApply(QString data)
{
    qDebug() << "ImageProc::parseMerchImageApply" << data;
}

void ImageProc::parseStoreAddApply(QString data)
{
    qDebug() << "ImageProc::parseMerchImageApply" << data;

    ///申请增加商店

    QString list = data.split("|");                         //获得开店的其他信息
    qDebug() <<"申请店铺list" << list;
    QString newStoreID = ExecSQL::getNewRegisterStoreID();  //获得新的店ID
    StoreInfo info = StoreInfo(newStoreID,list.at(0), list.at(1), list.at(2),
                               list.at(3), list.at(4), list.at(5));
    QString traid = info.getTra_ID();
    ExecSQL::addNewStoreInfo(info);                         //增加新店

    ///将图片保存到本地
    QByteArray imgbuffer = GlobalVars::g_imgQueueMap[data]; //找到配套图片
    GlobalVars::g_imgQueueMap.remove(data);                 //释放map空间
    QImage img;
    img.loadFromData(imgbuffer, "jpg");
    if(!img.isNull())
    {
        qDebug() <<"==图片缓存，准备保存到本地==";

        ///检测文件夹中是否已经有图片-有了先删除再添加-没有添加======================================

        QString fileName = FilePathContents::getStoreLogoPath(newStoreID);
        if(img.save(fileName))
        {
            //将图片保存到本地
            qDebug() << "图片保存到本地：" << fileName;
        }


    }else
    {
        qDebug() <<"==图片缓存失败！！！！==";
    }
    /////////////////判断有么有申请成功////////////////////

    if(GlobalVars::g_storeInfoMap.contains(newStoreID) || GlobalVars::g_storeInfoMap[newStoreID]->getTra_ID() == traid)
    {
        //有新storeid，并且traid一致，则表示申请成功
        qDebug() << traid << "的店铺：" << newStoreID <<" ==店铺申请开通成功==";
        QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderStore_S)
                % QString("#!|")
                % QString(traid) % QString("|")
                % QString(newStoreID);
        emit signalSendMsgToClient(traid, command);
    }else
    {
        //发送失败消息
        QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderStore_S)
                % QString("#?|")
                % QString(traid) % QString("|")
                % QString("Error: Stores' newID Apply Fail");
        emit signalSendMsgToClient(traid, command);
    }

}
