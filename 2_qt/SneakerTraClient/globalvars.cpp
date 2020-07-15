#include "globalvars.h"
#include <QTime>
QDateTime m_dateTime = QDateTime::currentDateTime();
//态数据成员初始化的格式：<数据类型><类名>::<静态数据成员名>=<值>
//引用静态数据成员格式：<类名>::<静态成员名>
///静态变量的初始化
QString GlobalVars::g_StrTime = m_dateTime.toString("yyyy-MM-dd");
QString GlobalVars::g_StrDTime = m_dateTime.toString("yyyyMMddhhmmsszzz");

UserInfo *GlobalVars::g_localUser = new UserInfo;
FansInfo *GlobalVars::g_localFans = new FansInfo;
TraderInfo *GlobalVars::g_localTrader = new TraderInfo;

UserInfoList *GlobalVars::g_userInfoList = new UserInfoList;
FansInfoList *GlobalVars::g_fansInfoList = new FansInfoList;
TraderInfoList *GlobalVars::g_traderInfoList = new TraderInfoList;
StoreInfoList *GlobalVars::g_storeInfoList = new StoreInfoList;
MerchInfoList *GlobalVars::g_merchInfoList = new MerchInfoList;
TrolleyInfoList *GlobalVars::g_trolleyInfoList = new TrolleyInfoList;
TranInfoList *GlobalVars::g_tranInfoList = new TranInfoList;

QQueue<QString> GlobalVars::g_msgQueue;

ImageMap GlobalVars::g_storeLogoImageMap;
ImageMap GlobalVars::g_merchHostPhotoMap;

StoreInfoMap GlobalVars::g_storeInfoMap;
MerchInfoMap GlobalVars::g_merchInfoMap;

ImageMap GlobalVars::g_homeStoreLogoMap;
ImageMap GlobalVars::g_homeMerchHostMap;
StoreInfoMap GlobalVars::g_homeStoreInfoMap;
MerchInfoMap GlobalVars::g_homeMerchInfoMap;

QStringList *GlobalVars::g_HomeStoreInfoList = new QStringList;
QStringList *GlobalVars::g_HomeMerchInfoList = new QStringList;

