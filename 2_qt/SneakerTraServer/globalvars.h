#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "userinfo.h"

#define USE_DATABASE_MySQL 1

//extern QDateTime m_dateTime;

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

    static UserInfoList *g_userInfoList;
};

#endif // GLOBALVARS_H
