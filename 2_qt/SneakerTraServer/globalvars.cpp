#include "globalvars.h"

//态数据成员初始化的格式：<数据类型><类名>::<静态数据成员名>=<值>
//引用静态数据成员格式：<类名>::<静态成员名>
///静态变量的初始化
UserInfoList *GlobalVars::g_userInfoList = new UserInfoList;

