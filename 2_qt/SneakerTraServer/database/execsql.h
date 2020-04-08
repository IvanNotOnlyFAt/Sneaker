#ifndef EXECSQL_H
#define EXECSQL_H
#include "globalvars.h"


class ExecSQL
{
public:
    ///////////////////////UserInfo/////////////////////////////
    static void updateUserInfoList(const QString &sql);

    static void searchAllUserInfos();
    static void searchUserInfoForID(const QString &value);
    static void searchUserInfoForRole(const QString &value);
    static void searchUserInfoForDate(const QString &value);

    static bool addNewUserInfo(const UserInfo &info);
    static bool removeUserInfo(QString value);
    static bool modifyUserInfoForPswd(const QString &id, const QString &value);
    static bool modifyUserInfoForRole(const QString &id, const QString &value);
    static bool modifyUserInfoForDate(const QString &id, const QString &value);
};

#endif // EXECSQL_H
