#include "imageproc.h"
#include "globalvars.h"
#include "filepathcontents.h"
#include "execsql.h"

#include <QDebug>
#include <QImage>
#include <QStringBuilder>
#include <QDataStream>
#include <QFile>
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
            parseFisUserImageAsk(msg);
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
    //截取从右开始sizeof(msg)-1个字符==去掉第一个字符
    case CMD_ApplyImage_P:parseApplyImageAsk(msg.right(msg.size()-1));break;
    case CMD_AddInfoImage_A:parseAddImageAsk(msg.right(msg.size()-1));break;
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
    case CMD_TraderMerch_M:parseMerchImageApply(list.at(1));break;
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
    QByteArray imagebuffer;
    QDataStream ds_image(&imagebuffer,QIODevice::WriteOnly);

    QString filename; //反馈消息的文件名
    QString merchid;  //商品id=S-1000000000001
    QString merchPath;//商品路径S-100000000000100
    bool res = true;
    QStringList list = data.split("|");
    QString traid = list.at(0);

    for(int i = 1; i < list.length(); i++)
    {
        merchid = list.at(i); //商品id=S-1000000000001
        merchPath = merchid % QString("00");//商品路径S-100000000000100
        QImage merchimg;
        merchimg.load(FilePathContents::getMerchPhotoPath(merchPath));//获取路径下的logo


        if(merchimg.isNull())
        {
            res = false;
        }

        QString msg = QString("|") % QString(merchid);
        filename.append(msg);

        ds_image << merchimg;     //图片信息
        ds_image << QString('%');//图片用%隔开

        qDebug() << merchid << "'s hostimg.size(): " <<merchimg.size();
    }

    qDebug()<< "imagebuffer.size(): " <<imagebuffer.size();

    if(res)
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderMerch_M)
                % QString("#!|") % QString(traid);
        command.append(filename);

        emit signalSendImgToClient(traid,command,imagebuffer);
    }else
    {
        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderMerch_M)
                % QString("#?|")
                % QString(traid) % QString("|")
                % QString("Error: Merch' Image Missing");
        emit signalSendMsgToClient(traid, command);
    }

}

void ImageProc::parseStoreAddApply(QString data)
{
    qDebug() << "ImageProc::parseStoreAddApply" << data;

    ///申请增加商店
    QStringList list = data.split("|");                         //获得开店的其他信息
    qDebug() <<"申请店铺list" << list;
    QString newStoreID = ExecSQL::getNewRegisterStoreID();  //获得新的店ID
    StoreInfo info = StoreInfo(newStoreID,list.at(0), list.at(1), list.at(2),
                               list.at(3), list.at(4), list.at(5));
    QString traid = info.getTra_ID();

    /////////////////判断有么有申请成功////////////////////
    if(ExecSQL::addNewStoreInfo(info))               //增加新店
    {
        ExecSQL::searchAllStoreInfos();             //更新服务器这边的列表
        qDebug() << traid << "的店铺：" << newStoreID <<" ==店铺申请开通成功==";

        ///将图片保存到本地
        QByteArray imgbuffer = GlobalVars::g_imgQueueMap[data]; //找到配套图片
        GlobalVars::g_imgQueueMap.remove(data);                 //释放map空间

        QDataStream in(&imgbuffer, QIODevice::ReadOnly);        //目前只能按这种方式读取-->img.loadFromData(imgbuffer);是失败的
        in.setVersion(QDataStream::Qt_4_6);
        QImage img;
        in >> img;

        if(!img.isNull())
        {
            QString fileName = FilePathContents::getStoreLogoPath(newStoreID);//图片保存路径
            qDebug() <<"==图片缓存，准备保存到本地==";

            QFile logo(fileName);
            if(logo.exists())
            {
                qDebug() <<"==图片存在，准备删除==";
                if(logo.remove())
                {
                    qDebug() <<"==图片删除成功，准备重新保存==";
                }else
                {
                    qDebug() <<"==图片删除失败！！！！！！！==";
                }
            }

            //////检测文件夹中是否已经有图片-有了先删除再添加-没有则直接添加//////////
            if(img.save(fileName))
            {
                qDebug() << "图片保存到本地：" << fileName;             //将图片保存到本地

                QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderStore_S)
                        % QString("#!|")
                        % QString(traid) % QString("|")
                        % QString(newStoreID);
                emit signalSendMsgToClient(traid, command);
            }else
            {
                //发送图片保存失败消息
                QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderStore_S)
                        % QString("#?|")
                        % QString(traid) % QString("|")
                        % QString("Error: newStores' Image Save Fail");
                ExecSQL::removeStoreInfo(newStoreID);       //图片保存失败，连数据库的资料一起删除
                emit signalSendMsgToClient(traid, command);
            }
        }else
        {
            qDebug() <<"==图片缓存失败！！！！==";
        }
        //////////////////////////////////////////////////////////////
    }else
    {
        //发送失败消息
        QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderStore_S)
                % QString("#?|")
                % QString(traid) % QString("|")
                % QString("Error: newStores' Apply Fail");
        emit signalSendMsgToClient(traid, command);
    }

}
