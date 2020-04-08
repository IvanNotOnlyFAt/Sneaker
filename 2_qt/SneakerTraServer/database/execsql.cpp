#include "execsql.h"
#include "globalvars.h"

#include <QSqlQuery>
#include <QSqlRecord>
/// QSqlQuery executing and manipulating SQL statements.
/// QSqlRecord encapsulates(封装) a database record.
/// eg：query.record().indexOf("id")由于未定义列的顺序，因此QSqlRecord :: indexOf（）用于获取列的索引
//#include <QSqlTableModel>
/// QSqlTableModel  editable data model for a single database table.相当于不用SQL语句二用封装好的类

#include <QDebug>

///////////////////////UserInfo/////////////////////////////
void ExecSQL::updateUserInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_userInfoList->clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");
        int role_idx = query.record().indexOf("role");
        int date_idx = query.record().indexOf("date");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString pswd = query.value(pswd_idx).toString();
            QString role = query.value(role_idx).toString();
            QString date = query.value(date_idx).toString();

            UserInfo info(id, pswd, role, date);

            GlobalVars::g_userInfoList->append(info);
//            info.display();
        }
    }


}

void ExecSQL::searchAllUserInfos()
{
    QString querryString = QString("select * from user_info");
    qDebug() << querryString;
    updateUserInfoList(querryString);
}
void ExecSQL::searchUserInfoForID(const QString &value)
{
    QString queryString = QString("select * from user_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}
void ExecSQL::searchUserInfoForRole(const QString &value)
{
    QString queryString = QString("select * from user_info where role = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}
void ExecSQL::searchUserInfoForDate(const QString &value)
{
    QString queryString = QString("select * from user_info where date = '%1'").arg(value);
    qDebug() << queryString;

    updateUserInfoList(queryString);
}



bool ExecSQL::addNewUserInfo(const UserInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into user_info values('%1', '%2', '%3', %4)")
            .arg(info.getID()).arg(info.getPswd()).arg(info.getRole()).arg(info.getRole());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeUserInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from user_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyUserInfoForPswd(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update user_info set pswd = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    if(query.exec(queryString))
    {
//        GlobalVars::g_userInfoMap[id]->setPswd(value);
        return true;
    }
}
bool ExecSQL::modifyUserInfoForRole(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update user_info set role = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyUserInfoForDate(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update user_info set date = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
