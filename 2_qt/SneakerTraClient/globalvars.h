#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "userinfo.h"
#include "fansinfo.h"
#include "traderinfo.h"
#include "storeinfo.h"
#include "merchinfo.h"
#include "trolleyinfo.h"
#include "traninfo.h"

#include "msgsocket.h"

#include <QQueue>
#include <QImage>
enum Meg_Type{
    Type_Text,
    Type_Image
};
enum RESPONSE{
    RES_Down = '!',
    RES_Fail = '?'
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

    ///鞋友请求命令

    ///鞋商请求命令
    CMD_TraderStore_S = 'S'         //获取商铺id


};
typedef QMap<QString,QImage> ImageMap;

class GlobalVars
{
public:

    static QString g_StrTime;
    static QString g_StrDTime;

    static UserInfo *g_localUser;
    static FansInfo *g_localFans;
    static TraderInfo *g_localTrader;

    static UserInfoList *g_userInfoList;
    static FansInfoList *g_fansInfoList;
    static TraderInfoList *g_traderInfoList;
    static StoreInfoList *g_storeInfoList;
    static MerchInfoList *g_merchInfoList;
    static TrolleyInfoList *g_trolleyInfoList;
    static TranInfoList *g_tranInfoList;

    static QQueue<QString> g_msgQueue;

    static ImageMap g_storeLogoImageMap;
};

#endif // GLOBALVARS_H
