#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "userinfo.h"
#include "fansinfo.h"
#include "traderinfo.h"
#include "storeinfo.h"
#include "merchinfo.h"
#include "trolleyinfo.h"
#include "traninfo.h"

#include <QQueue>

#define USE_DATABASE_MySQL 1
enum Meg_Type{
    Type_Text,
    Type_Image
};
enum Oper_Data{
    Oper_None,
    Oper_Add,
    Oper_Del,
    Oper_Mdy
};
enum COMMAND{
    ///通用请求命令
    CMD_UserLogin_L = 'L',          //用户登录
    CMD_UserInfo_I = 'I',           //获取个人信息
    CMD_ChangePswd_H = 'H',         //修改密码
    CMD_UserExit_X = 'X',           //用户退出
    CMD_GetHomePage_Z = 'Z',         //获取主页
    CMD_AddInfoImage_A = 'A',         //提交注册信息
    CMD_ApplyImage_P = 'P',          //请求图片
    CMD_RemoveInfo_D = 'D',         //注销信息
    ///鞋友请求命令

    ///鞋商请求命令
    CMD_TraderStore_S = 'S',         //获取商铺id
    CMD_TraderMerch_M = 'M'         //获取商品id
};
typedef QMap<QString, QByteArray> ImageMap;


class GlobalVars
{
public:
    static QQueue<QString> g_msgQueue;//消息队列
    static QQueue<QString> g_imageMsgQueue;//图片消息队列

    static QString g_StrTime;
    static QString g_StrDTime;

    static UserInfoList *g_userInfoList;
    static FansInfoList *g_fansInfoList;
    static TraderInfoList *g_traderInfoList;
    static StoreInfoList *g_storeInfoList;
    static MerchInfoList *g_merchInfoList;
    static TrolleyInfoList *g_trolleyInfoList;
    static TranInfoList *g_tranInfoList;

    static UserInfoMap g_userInfoMap;
    static FansInfoMap g_fansInfoMap;
    static TraderInfoMap g_traderInfoMap;
    static StoreInfoMap g_storeInfoMap;
    static MerchInfoMap g_merchInfoMap;
    static TrolleyInfoMap g_trolleyInfoMap;
    static TranInfoMap g_tranInfoMap;
    static ImageMap g_imgQueueMap;

};

#endif // GLOBALVARS_H








