#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "userinfo.h"

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
    static UserInfoList *g_userInfoList;
};

#endif // GLOBALVARS_H
