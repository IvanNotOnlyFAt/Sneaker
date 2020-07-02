#include "globalvars.h"
#include <QTime>
QDateTime m_dateTime = QDateTime::currentDateTime();
//态数据成员初始化的格式：<数据类型><类名>::<静态数据成员名>=<值>
//引用静态数据成员格式：<类名>::<静态成员名>
///静态变量的初始化
QQueue<QString> GlobalVars::g_msgQueue;
QQueue<QString> GlobalVars::g_imageMsgQueue;

QString GlobalVars::g_StrTime = m_dateTime.toString("yyyy-MM-dd");
QString GlobalVars::g_StrDTime = m_dateTime.toString("yyyyMMddhhmmsszzz");

UserInfoList *GlobalVars::g_userInfoList = new UserInfoList;
FansInfoList *GlobalVars::g_fansInfoList = new FansInfoList;
TraderInfoList *GlobalVars::g_traderInfoList = new TraderInfoList;
StoreInfoList *GlobalVars::g_storeInfoList = new StoreInfoList;
MerchInfoList *GlobalVars::g_merchInfoList = new MerchInfoList;
TrolleyInfoList *GlobalVars::g_trolleyInfoList = new TrolleyInfoList;
TranInfoList *GlobalVars::g_tranInfoList = new TranInfoList;

UserInfoMap GlobalVars::g_userInfoMap;
FansInfoMap GlobalVars::g_fansInfoMap;
TraderInfoMap GlobalVars::g_traderInfoMap;
StoreInfoMap GlobalVars::g_storeInfoMap;
MerchInfoMap GlobalVars::g_merchInfoMap;
TrolleyInfoMap GlobalVars::g_trolleyInfoMap;
TranInfoMap GlobalVars::g_tranInfoMap;
ImageMap GlobalVars::g_imgQueueMap;
