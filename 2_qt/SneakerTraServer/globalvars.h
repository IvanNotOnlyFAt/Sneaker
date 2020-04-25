#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "userinfo.h"
#include "fansinfo.h"
#include "traderinfo.h"
#include "storeinfo.h"
#include "merchinfo.h"
#include "trolleyinfo.h"
#include "traninfo.h"


#define USE_DATABASE_MySQL 1

enum Oper_Data{
    Oper_None,
    Oper_Add,
    Oper_Del,
    Oper_Mdy
};

class GlobalVars
{
public:

    static QString g_StrTime;
    static QString g_StrDTime;

    static UserInfoList *g_userInfoList;
    static FansInfoList *g_fansInfoList;
    static TraderInfoList *g_traderInfoList;
    static StoreInfoList *g_storeInfoList;
    static MerchInfoList *g_merchInfoList;
    static TrolleyInfoList *g_trolleyInfoList;
    static TranInfoList *g_tranInfoList;
};

#endif // GLOBALVARS_H
