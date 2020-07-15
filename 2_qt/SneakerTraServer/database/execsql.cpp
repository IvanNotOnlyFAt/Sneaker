#include "execsql.h"
#include "globalvars.h"
//#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
/// QSqlQuery executing and manipulating SQL statements.
/// QSqlRecord encapsulates(封装) a database record.
/// eg：query.record().indexOf("id")由于未定义列的顺序，因此QSqlRecord :: indexOf（）用于获取列的索引
//#include <QSqlTableModel>
/// QSqlTableModel  editable data model for a single database table.相当于不用SQL语句二用封装好的类

#include <QDebug>
#include <QList>
///////////////////////registeredNewInfo/////////////////////////////
///tool---max()
int ExecSQL::getMax(QList<int> list)
{
    int max = 0;
    for(int i = list.length()-1; i >= 0; i--)
    {
        if(max < list.at(i))
        {
            max = list.at(i);
        }
    }
    return max;
}
qlonglong ExecSQL::getQuint64Max(QList<qlonglong> list)
{
    qlonglong max = 0;
    for(int i = list.length()-1; i >= 0; i--)
    {
        if(max < list.at(i))
        {
            max = list.at(i);
        }
    }
    return max;
}
QString ExecSQL::getNewRegisterStoreID()
{
    QString sql = QString("select id from store_info");
    QSqlQuery query;
    QList<int> storeList;
    int newIDNum = 0;

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        while (query.next())
        {
            QString id = query.value(id_idx).toString();

            QStringList list = id.split("-");
            QString tmp = list.at(1);
            storeList.append(tmp.toInt());
        }
    }
    newIDNum = getMax(storeList) + 1;
    QString newID = QString("ST-") + QString::number(newIDNum);
    qDebug() <<  "Get New Register StoreID =" << newID;
    return newID;
}

QString ExecSQL::getNewRegisterMerchID(QString storeid)
{
    QString sql = QString("select id from merchandise_info where store_id = '%1'").arg(storeid);
    QSqlQuery query;
    QList<qlonglong> merchList;
    qlonglong newIDNum = 0;

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QStringList list = id.split("-");
            QString tmp = list.at(1);
            qlonglong num = tmp.toLongLong();
            merchList.append(num);
        }
    }
    if(merchList.isEmpty()) //配置初始商品ID
    {
        QStringList list = storeid.split("-");
        QString tmp = list.at(1);
        newIDNum = ((tmp.toLongLong() - 100000) * 1000000000000) + 1;//配置出第一个id

    }else
    {
        newIDNum = getQuint64Max(merchList) + 1;
    }
    qDebug() <<  "newIDNum =" << newIDNum;
    QString newID = QString("S-") + QString::number(newIDNum);
    qDebug() <<  "Get New Register MerchID =" << newID;
    return newID;
}
///////////////////////selectLoginForInfo/////////////////////////////
void ExecSQL::selectLoginForInfo(UserInfo &info,const QString &id)
{
    QSqlQuery query;
    QString sql = QString("select * from user_info where id = '%1'").arg(id);
    qDebug() << sql;
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int pswd_idx = query.record().indexOf("pswd");
        int role_idx = query.record().indexOf("role");
        int date_idx = query.record().indexOf("date");

        while(query.next())
        {
            QString id = query.value(id_idx).toString();
            QString pswd = query.value(pswd_idx).toString();
            QString role = query.value(role_idx).toString();
            QString date = query.value(date_idx).toString();

            qDebug() << "selectLoginForInfo :" << id << pswd << role << date;

            info.setID(id);
            info.setPswd(pswd);
            info.setRole(role);
            info.setDate(date);
            qDebug() <<"===============================";
//            info.display();
        }
    }


}
///////////////////////UserInfo/////////////////////////////
void ExecSQL::updateUserInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_userInfoList->clear();
    GlobalVars::g_userInfoMap.clear();
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

        for(UserInfoList::iterator it = GlobalVars::g_userInfoList->begin();
            it != GlobalVars::g_userInfoList->end(); it++)
        {
           GlobalVars::g_userInfoMap.insert(it->getID(), it);
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
    QString queryString = QString("insert into user_info values('%1', '%2', '%3', '%4')")
            .arg(info.getID()).arg(info.getPswd()).arg(info.getRole()).arg(info.getDate());
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


///////////////////////FansInfo/////////////////////////////
void ExecSQL::updateFansInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_fansInfoList->clear();
    GlobalVars::g_fansInfoMap.clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int nickname_idx = query.record().indexOf("nickname");
        int tele_idx = query.record().indexOf("tele");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString nickname = query.value(nickname_idx).toString();
            QString tele = query.value(tele_idx).toString();

            FansInfo info(id, nickname, tele);

            GlobalVars::g_fansInfoList->append(info);
//            info.display();
        }
        for(FansInfoList::iterator it = GlobalVars::g_fansInfoList->begin();
            it != GlobalVars::g_fansInfoList->end(); it++)
        {
           GlobalVars::g_fansInfoMap.insert(it->getID(), it);
        }
    }


}

void ExecSQL::searchAllFansInfos()
{
    QString querryString = QString("select * from fans_info");
    qDebug() << querryString;
    updateFansInfoList(querryString);
}
void ExecSQL::searchFansInfoForID(const QString &value)
{
    QString queryString = QString("select * from fans_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateFansInfoList(queryString);
}
void ExecSQL::searchFansInfoForNickName(const QString &value)
{
    QString queryString = QString("select * from fans_info where nickname = '%1'").arg(value);
    qDebug() << queryString;

    updateFansInfoList(queryString);
}
void ExecSQL::searchFansInfoForTele(const QString &value)
{
    QString queryString = QString("select * from fans_info where tele = '%1'").arg(value);
    qDebug() << queryString;

    updateFansInfoList(queryString);
}



bool ExecSQL::addNewFansInfo(const FansInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into fans_info values('%1', '%2', '%3')")
            .arg(info.getID()).arg(info.getNickName()).arg(info.getTele());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeFansInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from fans_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyFansInfoForNickName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update fans_info set nickname = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

bool ExecSQL::modifyFansInfoForTele(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update fans_info set tele = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

///////////////////////TraderInfo/////////////////////////////
void ExecSQL::updateTraderInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_traderInfoList->clear();
    GlobalVars::g_traderInfoMap.clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int name_idx = query.record().indexOf("name");
        int tele_idx = query.record().indexOf("tele");
        int idnum_idx = query.record().indexOf("id_num");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString tele = query.value(tele_idx).toString();
            QString idnum = query.value(idnum_idx).toString();

            TraderInfo info(id, name, tele, idnum);

            GlobalVars::g_traderInfoList->append(info);
//            info.display();
        }
        for(TraderInfoList::iterator it = GlobalVars::g_traderInfoList->begin();
            it != GlobalVars::g_traderInfoList->end(); it++)
        {
            GlobalVars::g_traderInfoMap.insert(it->getID(),it);
        }
    }


}

void ExecSQL::searchAllTraderInfos()
{
    QString querryString = QString("select * from trader_info");
    qDebug() <<querryString;
    updateTraderInfoList(querryString);
}
void ExecSQL::searchTraderInfoForID(const QString &value)
{
    QString queryString = QString("select * from trader_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateTraderInfoList(queryString);
}
void ExecSQL::searchTraderInfoForName(const QString &value)
{
    QString queryString = QString("select * from trader_info where name = '%1'").arg(value);
    qDebug() << queryString;

    updateTraderInfoList(queryString);
}
void ExecSQL::searchTraderInfoForTele(const QString &value)
{
    QString queryString = QString("select * from trader_info where tele = '%1'").arg(value);
    qDebug() << queryString;

    updateTraderInfoList(queryString);
}
void ExecSQL::searchTraderInfoForIdNum(const QString &value)
{
    QString queryString = QString("select * from trader_info where id_num = '%1'").arg(value);
    qDebug() << queryString;

    updateTraderInfoList(queryString);
}



bool ExecSQL::addNewTraderInfo(const TraderInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into trader_info values('%1', '%2', '%3', '%4')")
            .arg(info.getID()).arg(info.getName()).arg(info.getTele()).arg(info.getID_Num());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeTraderInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from trader_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTraderInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trader_info set name = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTraderInfoForTele(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trader_info set tele = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTraderInfoForIdNum(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trader_info set id_num = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

///////////////////////StoreInfo/////////////////////////////
void ExecSQL::updateStoreInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_storeInfoMap.clear();
    GlobalVars::g_storeInfoList->clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int tra_id_idx = query.record().indexOf("tra_id");
        int name_idx = query.record().indexOf("name");
        int merch_type_idx = query.record().indexOf("merch_type");
        int location_idx = query.record().indexOf("location");
        int logo_idx = query.record().indexOf("logo");
        int date_idx = query.record().indexOf("date");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString tra_id = query.value(tra_id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString merch_type = query.value(merch_type_idx).toString();
            QString location = query.value(location_idx).toString();
            QString logo = query.value(logo_idx).toString();
            QString date = query.value(date_idx).toString();

            StoreInfo info(id, tra_id, name, merch_type, location, logo, date);

            GlobalVars::g_storeInfoList->append(info);
//            info.display();
        }
        for(StoreInfoList::iterator it = GlobalVars::g_storeInfoList->begin();
            it != GlobalVars::g_storeInfoList->end(); it++)
        {
            GlobalVars::g_storeInfoMap.insert(it->getID(),it);
        }
    }


}

void ExecSQL::searchAllStoreInfos()
{
    QString querryString = QString("select * from store_info");
    qDebug() << querryString;
    updateStoreInfoList(querryString);
//    GlobalVars::g_storeInfoMap.clear();
//    for(StoreInfoList::iterator it = GlobalVars::g_storeInfoList->begin();
//        it != GlobalVars::g_storeInfoList->end(); it++)
//    {
//        GlobalVars::g_storeInfoMap.insert(it->getID(),it);
//    }
}
void ExecSQL::searchStoreInfoForID(const QString &value)
{
    QString queryString = QString("select * from store_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForTraID(const QString &value)
{
    QString queryString = QString("select * from store_info where tra_id = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForName(const QString &value)
{
    QString queryString = QString("select * from store_info where name = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForMerchType(const QString &value)
{
    QString queryString = QString("select * from store_info where merch_type = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForLocation(const QString &value)
{
    QString queryString = QString("select * from store_info where location = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForLogo(const QString &value)
{
    QString queryString = QString("select * from store_info where logo = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}
void ExecSQL::searchStoreInfoForDate(const QString &value)
{
    QString queryString = QString("select * from store_info where date = '%1'").arg(value);
    qDebug() << queryString;

    updateStoreInfoList(queryString);
}


bool ExecSQL::addNewStoreInfo(const StoreInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into store_info values('%1', '%2', '%3', '%4', '%5', '%6','%7')")
            .arg(info.getID()).arg(info.getTra_ID()).arg(info.getName()).arg(info.getMerType())
            .arg(info.getLocation()).arg(info.getLogo()).arg(info.getDate());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeStoreInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from store_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForTraID(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set tra_id = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set name = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForMerchType(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set merch_type = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForLocation(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set location = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForLogo(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set logo = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyStoreInfoForDate(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update store_info set date = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

///////////////////////MerchInfo/////////////////////////////
void ExecSQL::updateMerchInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_merchInfoList->clear();
    GlobalVars::g_merchInfoMap.clear();
    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int store_id_idx = query.record().indexOf("store_id");
        int name_idx = query.record().indexOf("name");
        int price_idx = query.record().indexOf("price");
        int stock_idx = query.record().indexOf("stock");
        int merch_size_idx = query.record().indexOf("merch_size");
        int ad_photo_idx = query.record().indexOf("ad_photo");
        int descri_idx = query.record().indexOf("descri");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString store_id = query.value(store_id_idx).toString();
            QString name = query.value(name_idx).toString();
            QString price = query.value(price_idx).toString();
            QString stock = query.value(stock_idx).toString();
            QString merch_size = query.value(merch_size_idx).toString();
            QString ad_photo = query.value(ad_photo_idx).toString();
            QString descri = query.value(descri_idx).toString();

            MerchInfo info(id, store_id, name, price, stock, merch_size, ad_photo, descri);

            GlobalVars::g_merchInfoList->append(info);
//            info.display();
        }
        for(MerchInfoList::iterator it = GlobalVars::g_merchInfoList->begin();
            it != GlobalVars::g_merchInfoList->end(); it++)
        {
            GlobalVars::g_merchInfoMap.insert(it->getID(),it);
        }
    }


}

void ExecSQL::searchAllMerchInfos()
{
    QString querryString = QString("select * from merchandise_info");
    qDebug() << querryString;
    updateMerchInfoList(querryString);
}
void ExecSQL::searchMerchInfoForID(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForStoreID(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where store_id = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForName(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where name = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForPrice(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where price = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForStock(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where stock = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForMerchSize(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where merch_size = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForAdPhoto(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where ad_photo = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}
void ExecSQL::searchMerchInfoForDescri(const QString &value)
{
    QString queryString = QString("select * from merchandise_info where descri = '%1'").arg(value);
    qDebug() << queryString;

    updateMerchInfoList(queryString);
}

bool ExecSQL::addNewMerchInfo(const MerchInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into merchandise_info values('%1', '%2', '%3', '%4', '%5', '%6','%7','%8')")
            .arg(info.getID()).arg(info.getStore_ID()).arg(info.getName()).arg(info.getPrice())
            .arg(info.getStock()).arg(info.getMerchSize()).arg(info.getADPhoto()).arg(info.getDescri());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeMerchInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from merchandise_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForStoreID(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set store_id = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForName(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set name = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForPrice(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set price = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForStock(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set stock = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForMerchSize(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set merch_size = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForAdPhoto(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set ad_photo = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyMerchInfoForDescri(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update merchandise_info set descri = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

///////////////////////TrolleyInfo/////////////////////////////
void ExecSQL::updateTrolleyInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_trolleyInfoList->clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int fans_id_idx = query.record().indexOf("fans_id");
        int merch_id_idx = query.record().indexOf("merch_id");
        int merch_num_idx = query.record().indexOf("merch_num");
        int elect_size_idx = query.record().indexOf("elect_size");
        int date_idx = query.record().indexOf("date");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString fans_id = query.value(fans_id_idx).toString();
            QString merch_id = query.value(merch_id_idx).toString();
            QString merch_num = query.value(merch_num_idx).toString();
            QString elect_size = query.value(elect_size_idx).toString();
            QString date = query.value(date_idx).toString();

            TrolleyInfo info(id, fans_id, merch_id, merch_num, elect_size, date);

            GlobalVars::g_trolleyInfoList->append(info);
//            info.display();
        }
    }


}

void ExecSQL::searchAllTrolleyInfos()
{
    QString querryString = QString("select * from trolley_info");
    qDebug() << querryString;
    updateTrolleyInfoList(querryString);
}
void ExecSQL::searchTrolleyInfoForID(const QString &value)
{
    QString queryString = QString("select * from trolley_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}
void ExecSQL::searchTrolleyInfoForFansID(const QString &value)
{
    QString queryString = QString("select * from trolley_info where fans_id = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}
void ExecSQL::searchTrolleyInfoForMerchID(const QString &value)
{
    QString queryString = QString("select * from trolley_info where merch_id = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}
void ExecSQL::searchTrolleyInfoForMerchNum(const QString &value)
{
    QString queryString = QString("select * from trolley_info where merch_num = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}
void ExecSQL::searchTrolleyInfoForSelectSize(const QString &value)
{
    QString queryString = QString("select * from trolley_info where elect_size = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}
void ExecSQL::searchTrolleyInfoForDate(const QString &value)
{
    QString queryString = QString("select * from trolley_info where date = '%1'").arg(value);
    qDebug() << queryString;

    updateTrolleyInfoList(queryString);
}

bool ExecSQL::addNewTrolleyInfo(const TrolleyInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into trolley_info values('%1', '%2', '%3', '%4', '%5', '%6')")
            .arg(info.getID()).arg(info.getFans_ID()).arg(info.getMerch_ID()).arg(info.getMerchNum())
            .arg(info.getDate()).arg(info.getDate());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeTrolleyInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from trolley_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTrolleyInfoForFansID(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trolley_info set fans_id = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTrolleyInfoForMerchID(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trolley_info set merch_id = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTrolleyInfoForMerchNum(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trolley_info set merch_num = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTrolleyInfoForSelectSize(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trolley_info set elect_size = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTrolleyInfoForDate(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update trolley_info set date = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}

///////////////////////TranInfo/////////////////////////////
void ExecSQL::updateTranInfoList(const QString &sql)
{
    QSqlQuery query;
    GlobalVars::g_tranInfoList->clear();

    if(query.exec(sql))
    {
        int id_idx = query.record().indexOf("id");
        int tro_id_idx = query.record().indexOf("tro_id");
        int pri_sum_idx = query.record().indexOf("pri_sum");
        int dtime_idx = query.record().indexOf("dtime");

        ///query.next() retrieves(检索) the <next> record in the result
        /// result must be in the active state and isSelect() must return true(就是必须select操作)
        while (query.next())
        {
            QString id = query.value(id_idx).toString();
            QString tro_id = query.value(tro_id_idx).toString();
            QString pri_sum = query.value(pri_sum_idx).toString();
            QString dtime = query.value(dtime_idx).toString();

            TranInfo info(id, tro_id, pri_sum, dtime);

            GlobalVars::g_tranInfoList->append(info);
//            info.display();
        }
    }


}

void ExecSQL::searchAllTranInfos()
{
    QString querryString = QString("select * from transaction_info");
    qDebug() << querryString;
    updateTranInfoList(querryString);
}
void ExecSQL::searchTranInfoForID(const QString &value)
{
    QString queryString = QString("select * from transaction_info where id = '%1'").arg(value);
    qDebug() << queryString;

    updateTranInfoList(queryString);
}
void ExecSQL::searchTranInfoForTroID(const QString &value)
{
    QString queryString = QString("select * from transaction_info where tro_id = '%1'").arg(value);
    qDebug() << queryString;

    updateTranInfoList(queryString);
}
void ExecSQL::searchTranInfoForPriSum(const QString &value)
{
    QString queryString = QString("select * from transaction_info where pri_sum = '%1'").arg(value);
    qDebug() << queryString;

    updateTranInfoList(queryString);
}
void ExecSQL::searchTranInfoForDTime(const QString &value)
{
    QString queryString = QString("select * from transaction_info where dtime = '%1'").arg(value);
    qDebug() << queryString;

    updateTranInfoList(queryString);
}

bool ExecSQL::addNewTranInfo(const TranInfo &info)
{
    QSqlQuery query;
    QString queryString = QString("insert into transaction_info values('%1', '%2', '%3', '%4')")
            .arg(info.getID()).arg(info.getTro_ID()).arg(info.getPriceSum()).arg(info.getDTime());
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::removeTranInfo(QString value)
{
    QSqlQuery query;
    QString queryString = QString("delete from transaction_info where id = '%1'").arg(value);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTranInfoForTroID(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update transaction_info set tro_id = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTranInfoForPriSum(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update transaction_info set pri_sum = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}
bool ExecSQL::modifyTranInfoForDTime(const QString &id, const QString &value)
{
    QSqlQuery query;
    QString queryString = QString("update transaction_info set dtime = '%1' where id = '%2'").arg(value).arg(id);
    qDebug() << queryString;
    return query.exec(queryString);
}




