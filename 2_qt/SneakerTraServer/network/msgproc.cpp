#include "msgproc.h"

#include "execsql.h"
#include "filepathcontents.h"

#include <QDebug>
#include <QStringBuilder>
MsgProc::MsgProc(QObject *parent):
    QThread(parent)
{
    m_isExit = false;
}
void MsgProc::exitTread(void)
{
    m_isExit = true;
}

void MsgProc::run()
{
    while(!m_isExit)
    {
        if(!GlobalVars::g_msgQueue.isEmpty())
        {
            QString msg = GlobalVars::g_msgQueue.dequeue();
            parseUserAsk(msg);
        }
        msleep(2);
        //sleep是秒级别，msleep是毫秒，usleep是微妙
        //Sleep is to give others thread a chance to run
        //Forces the current thread to sleep for msecs milliseconds
    }
}
///////////////////////////////////////
void MsgProc::parseUserAsk(QString msg)
{
    QStringList list = msg.split("#");
    int cmd = msg.at(0).toLatin1();
    switch(cmd){
        ///通用请求命令
    case CMD_UserInfo_I: parseUserInfo(list.at(1));break;
    case CMD_ChangePswd_H: parseChangePswd(list.at(1));break;
    case CMD_GetHomePage_Z: parseGetHomePage(list.at(1));break;
    case CMD_RemoveInfo_D: parseRemoveInfo(msg.right(msg.size()-1));break;
        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseTraderStore(list.at(1));break;
    case CMD_TraderMerch_M:parseTraderMerch(list.at(1));break;
    default:
        break;
    }
}

///解析通用请求命令 - 登录退出在MsgSocket中实现
void MsgProc::parseRemoveInfo(QString data)
{

    QStringList list = data.split("#");
    int cmd = data.at(0).toLatin1();
    switch(cmd){
        ///通用请求命令

        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseStoreDelete(list.at(1));break;
    case CMD_TraderMerch_M:parseMerchDelete(list.at(1));break;
    default:
        break;
    }
}
void MsgProc::parseUserInfo(QString data)
{
    qDebug() << "MsgProc::parseUserInfo" << data;
    QStringList list = data.split("|");
    QString id = list.at(0);
    QString role = list.at(1);
    if(role == "鞋友")
    {
        if(GlobalVars::g_fansInfoMap.contains(id))
        {
            FansInfoList::iterator it = GlobalVars::g_fansInfoMap[id];
            QString msg = QString(CMD_UserInfo_I)
                    % QString("#!|") % it->getID()
                    % "|" % it->getNickName()
                    % "|" % it->getTele();
            emit signalSendMsgToClient(id,msg);
        }
    }else if(role == "鞋商")
    {
        if(GlobalVars::g_traderInfoMap.contains(id))
        {
            TraderInfoList::iterator it = GlobalVars::g_traderInfoMap[id];
            QString msg = QString(CMD_UserInfo_I)
                    % QString("#!|") % it->getID()
                    % "|" % it->getName()
                    % "|" % it->getID_Num()
                    % "|" % it->getTele();
            emit signalSendMsgToClient(id,msg);
        }
    }else
    {
        QString msg = QString(CMD_UserInfo_I)
                % QString("#?|") % QString(id)
                % "|" % QString("Error: DataError");
        emit signalSendMsgToClient(id,msg);
    }
}
void MsgProc::parseChangePswd(QString data)
{
    qDebug() << "MsgProc::parseChangePswd" << data;
}
void MsgProc::parseGetHomePage(QString data)
{
    QString("/") ;
    qDebug() << "MsgProc::parseGetHomePage" << data;
    QString fansid = data;

    QString msg = QString(CMD_GetHomePage_Z) % QString("#!|") % fansid % QString("/");

    ExecSQL::searchAllStoreInfos();
    if(!GlobalVars::g_storeInfoList->isEmpty())
    {

        for(StoreInfoList::iterator it = GlobalVars::g_storeInfoList->begin();
            it != GlobalVars::g_storeInfoList->end(); it++)
        {
            QString submsg =  it->getID() % QString("|");
            msg.append(submsg);
        }
    }

    msg.append("/");//店铺与商品分隔符

    ExecSQL::searchAllMerchInfos();
    if(!GlobalVars::g_merchInfoList->isEmpty())
    {
        for(MerchInfoList::iterator it = GlobalVars::g_merchInfoList->begin();
            it != GlobalVars::g_merchInfoList->end(); it++)
        {
            QString submsg =  it->getID() % QString("|");
            msg.append(submsg);
        }
    }

    emit signalSendMsgToClient(fansid,msg);
}

///解析鞋友请求命令

///解析鞋商请求命令
void MsgProc::parseTraderStore(QString data)
{
    qDebug() << "MsgProc::parseTraderStore:" << data;
    QStringList list = data.split("|");
    QString traid = list.at(0);

    ExecSQL::searchStoreInfoForTraID(traid);

    if(!GlobalVars::g_storeInfoList->isEmpty())
    {
        QString msg = QString(CMD_TraderStore_S) % QString("#!|") % traid ;
        for(StoreInfoList::iterator it = GlobalVars::g_storeInfoList->begin();
            it != GlobalVars::g_storeInfoList->end(); it++)
        {
            if(traid == it->getTra_ID())
            {
                QString submsg = QString("/") % it->getID()
                        % QString("|") % it->getTra_ID()
                        % QString("|") % it->getName()
                        % QString("|") % it->getMerType()
                        % QString("|") % it->getLocation()
                        % QString("|") % it->getLogo()
                        % QString("|") % it->getDate();
                msg.append(submsg);
            }
        }
        emit signalSendMsgToClient(traid,msg);

    }else
    {
        QString msg = QString(CMD_TraderStore_S)
                % QString("#?|") % QString(traid)
                % "|" % QString("Error: DataError-None Stores");
        emit signalSendMsgToClient(traid,msg);
    }

}

void MsgProc::parseStoreDelete(QString data)
{

    QStringList list = data.split("|");
    qDebug() << "MsgProc::parseStoreDelete" << list;
    QString traid = list.at(0);
    QString storeid = list.at(1);
    if(ExecSQL::removeStoreInfo(storeid))
    {
        ExecSQL::searchAllStoreInfos();

        QString fileName = FilePathContents::getStoreLogoPath(storeid);//图片保存路径

        QFile logo(fileName);
        if(logo.exists())
        {
            qDebug() <<"==图片存在，准备删除==";
            if(logo.remove())
            {
                qDebug() <<"==图片删除成功==";
                QString msg = QString(CMD_RemoveInfo_D) % QString(CMD_TraderStore_S)
                        % QString("#!|") % QString(traid)
                        % "|" % QString("Success Delete ") % QString(storeid);
                emit signalSendMsgToClient(traid,msg);
            }else
            {
                qDebug() <<"==图片删除失败！！！！！！！==";
            }
        }

    }else
    {
        QString msg = QString(CMD_RemoveInfo_D) % QString(CMD_TraderStore_S)
                % QString("#?|") % QString(traid)
                % "|" % QString("Error: Delete Stores Fail");
        emit signalSendMsgToClient(traid,msg);
    }

}

void MsgProc::parseMerchDelete(QString data)
{
    QStringList list = data.split("|");
    qDebug() << "MsgProc::parseMerchDelete" << list;
    QString traid = list.at(0);
    QString merchid = list.at(1);
    if(ExecSQL::removeMerchInfo(merchid))
    {
        ExecSQL::searchAllMerchInfos();
        QString imgname = merchid % QString("00");
        QString fileName = FilePathContents::getMerchPhotoPath(imgname);//图片保存路径

        QFile hostphoto(fileName);
        if(hostphoto.exists())
        {
            qDebug() <<"==图片存在，准备删除==";
            if(hostphoto.remove())
            {
                qDebug() <<"==图片删除成功==";
                QString msg = QString(CMD_RemoveInfo_D) % QString(CMD_TraderMerch_M)
                        % QString("#!|") % QString(traid)
                        % "|" % QString("Success Delete ") % QString(merchid);
                emit signalSendMsgToClient(traid,msg);
            }else
            {
                qDebug() <<"==图片删除失败！！！！！！！==";
            }
        }

    }else
    {
        QString msg = QString(CMD_RemoveInfo_D) % QString(CMD_TraderMerch_M)
                % QString("#?|") % QString(traid)
                % "|" % QString("Error: Delete Merch Fail");
        emit signalSendMsgToClient(traid,msg);
    }
}

void MsgProc::parseTraderMerch(QString data)
{
    qDebug() << "MsgProc::parseTraderMerch:" << data;
    QStringList list = data.split("|");
    QString traid = list.at(0);

    QString msg = QString(CMD_TraderMerch_M) % QString("#!|") % traid ;//成功时的信息头部
    for(int i = 1; i < list.length(); i++)
    {
        QString storeid = list.at(i);
        ExecSQL::searchMerchInfoForStoreID(storeid);

        if(!GlobalVars::g_merchInfoList->isEmpty())
        {
            for(MerchInfoList::iterator it = GlobalVars::g_merchInfoList->begin();
                it != GlobalVars::g_merchInfoList->end(); it++)
            {
                if(storeid == it->getStore_ID())
                {
                    QString submsg = QString("/") % it->getID()
                            % QString("|") % it->getStore_ID()
                            % QString("|") % it->getName()
                            % QString("|") % it->getPrice()
                            % QString("|") % it->getStock()
                            % QString("|") % it->getMerchSize()
                            % QString("|") % it->getADPhoto()
                            % QString("|") % it->getDescri();
                    msg.append(submsg);
                }
            }


        }else
        {
            QString error = QString(CMD_TraderMerch_M)
                    % QString("#?|") % QString(traid)
                    % "|" % QString("Error: DataError-None Merch");
            emit signalSendMsgToClient(traid,error);
        }

    }
    emit signalSendMsgToClient(traid,msg);
}
