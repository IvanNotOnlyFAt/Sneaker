#include "msgproc.h"

#include "execsql.h"

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
        ///解析鞋友请求命令

        ///解析鞋商请求命令
    case CMD_TraderStore_S:parseTraderStore(list.at(1));break;
    default:
        break;
    }
}

///解析通用请求命令 - 登录退出在MsgSocket中实现
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
    qDebug() << "MsgProc::parseGetHomePage" << data;
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
