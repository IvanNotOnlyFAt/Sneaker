#ifndef EXECSQL_H
#define EXECSQL_H
#include "globalvars.h"


class ExecSQL
{
public:
    ///////////////////////registeredNewInfo/////////////////////////////
    static QString getNewRegisterStoreID(void);
    static QString getNewRegisterMerchID(QString storeid);
    ///////////////////////selectLoginForInfo/////////////////////////////
    static void selectLoginForInfo(UserInfo &info,const QString &id);
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

    ///////////////////////FansInfo/////////////////////////////
    static void updateFansInfoList(const QString &sql);

    static void searchAllFansInfos();
    static void searchFansInfoForID(const QString &value);
    static void searchFansInfoForNickName(const QString &value);
    static void searchFansInfoForTele(const QString &value);

    static bool addNewFansInfo(const FansInfo &info);
    static bool removeFansInfo(QString value);
    static bool modifyFansInfoForNickName(const QString &id, const QString &value);
    static bool modifyFansInfoForTele(const QString &id, const QString &value);

    ///////////////////////TraderInfo/////////////////////////////
    static void updateTraderInfoList(const QString &sql);

    static void searchAllTraderInfos();
    static void searchTraderInfoForID(const QString &value);
    static void searchTraderInfoForName(const QString &value);
    static void searchTraderInfoForTele(const QString &value);
    static void searchTraderInfoForIdNum(const QString &value);

    static bool addNewTraderInfo(const TraderInfo &info);
    static bool removeTraderInfo(QString value);
    static bool modifyTraderInfoForName(const QString &id, const QString &value);
    static bool modifyTraderInfoForTele(const QString &id, const QString &value);
    static bool modifyTraderInfoForIdNum(const QString &id, const QString &value);

    ///////////////////////StoreInfo/////////////////////////////
    static void updateStoreInfoList(const QString &sql);

    static void searchAllStoreInfos();
    static void searchStoreInfoForID(const QString &value);
    static void searchStoreInfoForTraID(const QString &value);
    static void searchStoreInfoForName(const QString &value);
    static void searchStoreInfoForMerchType(const QString &value);
    static void searchStoreInfoForLocation(const QString &value);
    static void searchStoreInfoForLogo(const QString &value);
    static void searchStoreInfoForDate(const QString &value);

    static bool addNewStoreInfo(const StoreInfo &info);
    static bool removeStoreInfo(QString value);
    static bool modifyStoreInfoForTraID(const QString &id, const QString &value);
    static bool modifyStoreInfoForName(const QString &id, const QString &value);
    static bool modifyStoreInfoForMerchType(const QString &id, const QString &value);
    static bool modifyStoreInfoForLocation(const QString &id, const QString &value);
    static bool modifyStoreInfoForLogo(const QString &id, const QString &value);
    static bool modifyStoreInfoForDate(const QString &id, const QString &value);

    ///////////////////////MerchInfo/////////////////////////////
    static void updateMerchInfoList(const QString &sql);

    static void searchAllMerchInfos();
    static void searchMerchInfoForID(const QString &value);
    static void searchMerchInfoForStoreID(const QString &value);
    static void searchMerchInfoForName(const QString &value);
    static void searchMerchInfoForPrice(const QString &value);
    static void searchMerchInfoForStock(const QString &value);
    static void searchMerchInfoForMerchSize(const QString &value);
    static void searchMerchInfoForAdPhoto(const QString &value);
    static void searchMerchInfoForDescri(const QString &value);

    static bool addNewMerchInfo(const MerchInfo &info);
    static bool removeMerchInfo(QString value);
    static bool modifyMerchInfoForStoreID(const QString &id, const QString &value);
    static bool modifyMerchInfoForName(const QString &id, const QString &value);
    static bool modifyMerchInfoForPrice(const QString &id, const QString &value);
    static bool modifyMerchInfoForStock(const QString &id, const QString &value);
    static bool modifyMerchInfoForMerchSize(const QString &id, const QString &value);
    static bool modifyMerchInfoForAdPhoto(const QString &id, const QString &value);
    static bool modifyMerchInfoForDescri(const QString &id, const QString &value);

    ///////////////////////TrolleyInfo/////////////////////////////
    static void updateTrolleyInfoList(const QString &sql);

    static void searchAllTrolleyInfos();
    static void searchTrolleyInfoForID(const QString &value);
    static void searchTrolleyInfoForFansID(const QString &value);
    static void searchTrolleyInfoForMerchID(const QString &value);
    static void searchTrolleyInfoForMerchNum(const QString &value);
    static void searchTrolleyInfoForSelectSize(const QString &value);
    static void searchTrolleyInfoForDate(const QString &value);


    static bool addNewTrolleyInfo(const TrolleyInfo &info);
    static bool removeTrolleyInfo(QString value);
    static bool modifyTrolleyInfoForFansID(const QString &id, const QString &value);
    static bool modifyTrolleyInfoForMerchID(const QString &id, const QString &value);
    static bool modifyTrolleyInfoForMerchNum(const QString &id, const QString &value);
    static bool modifyTrolleyInfoForSelectSize(const QString &id, const QString &value);
    static bool modifyTrolleyInfoForDate(const QString &id, const QString &value);

    ///////////////////////TranInfo/////////////////////////////
    static void updateTranInfoList(const QString &sql);

    static void searchAllTranInfos();
    static void searchTranInfoForID(const QString &value);
    static void searchTranInfoForTroID(const QString &value);
    static void searchTranInfoForPriSum(const QString &value);
    static void searchTranInfoForDTime(const QString &value);

    static bool addNewTranInfo(const TranInfo &info);
    static bool removeTranInfo(QString value);
    static bool modifyTranInfoForTroID(const QString &id, const QString &value);
    static bool modifyTranInfoForPriSum(const QString &id, const QString &value);
    static bool modifyTranInfoForDTime(const QString &id, const QString &value);
private:
    static int getMax(QList<int> list);
    static qlonglong getQuint64Max(QList<qlonglong> list);


};

#endif // EXECSQL_H
