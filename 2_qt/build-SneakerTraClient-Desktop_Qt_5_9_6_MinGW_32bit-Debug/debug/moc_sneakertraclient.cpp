/****************************************************************************
** Meta object code from reading C++ file 'sneakertraclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/sneakertraclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sneakertraclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SneakerTraClient_t {
    QByteArrayData data[26];
    char stringdata0[506];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SneakerTraClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SneakerTraClient_t qt_meta_stringdata_SneakerTraClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SneakerTraClient"
QT_MOC_LITERAL(1, 17, 13), // "slotUserLogin"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "id"
QT_MOC_LITERAL(4, 35, 4), // "pswd"
QT_MOC_LITERAL(5, 40, 19), // "slotUserLoginResult"
QT_MOC_LITERAL(6, 60, 3), // "res"
QT_MOC_LITERAL(7, 64, 14), // "slotUserLogout"
QT_MOC_LITERAL(8, 79, 20), // "slotUserLogoutResult"
QT_MOC_LITERAL(9, 100, 13), // "slotUserClose"
QT_MOC_LITERAL(10, 114, 27), // "on_actionFansInfo_triggered"
QT_MOC_LITERAL(11, 142, 27), // "on_actionFansHome_triggered"
QT_MOC_LITERAL(12, 170, 26), // "on_actionTrolley_triggered"
QT_MOC_LITERAL(13, 197, 32), // "on_actionFansChangPswd_triggered"
QT_MOC_LITERAL(14, 230, 34), // "on_actionFansTranscation_trig..."
QT_MOC_LITERAL(15, 265, 29), // "on_actionTraderInfo_triggered"
QT_MOC_LITERAL(16, 295, 29), // "on_actionTraderHome_triggered"
QT_MOC_LITERAL(17, 325, 24), // "on_actionStore_triggered"
QT_MOC_LITERAL(18, 350, 24), // "on_actionMerch_triggered"
QT_MOC_LITERAL(19, 375, 31), // "on_actionTraderTransc_triggered"
QT_MOC_LITERAL(20, 407, 35), // "on_actionTraderChangePswd_tri..."
QT_MOC_LITERAL(21, 443, 20), // "slotRefreshStoreData"
QT_MOC_LITERAL(22, 464, 18), // "slotApplyStoreLogo"
QT_MOC_LITERAL(23, 483, 12), // "slotAddStore"
QT_MOC_LITERAL(24, 496, 3), // "msg"
QT_MOC_LITERAL(25, 500, 5) // "image"

    },
    "SneakerTraClient\0slotUserLogin\0\0id\0"
    "pswd\0slotUserLoginResult\0res\0"
    "slotUserLogout\0slotUserLogoutResult\0"
    "slotUserClose\0on_actionFansInfo_triggered\0"
    "on_actionFansHome_triggered\0"
    "on_actionTrolley_triggered\0"
    "on_actionFansChangPswd_triggered\0"
    "on_actionFansTranscation_triggered\0"
    "on_actionTraderInfo_triggered\0"
    "on_actionTraderHome_triggered\0"
    "on_actionStore_triggered\0"
    "on_actionMerch_triggered\0"
    "on_actionTraderTransc_triggered\0"
    "on_actionTraderChangePswd_triggered\0"
    "slotRefreshStoreData\0slotApplyStoreLogo\0"
    "slotAddStore\0msg\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SneakerTraClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x0a /* Public */,
       5,    1,  114,    2, 0x0a /* Public */,
       7,    0,  117,    2, 0x0a /* Public */,
       8,    1,  118,    2, 0x0a /* Public */,
       9,    0,  121,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,
      22,    0,  134,    2, 0x08 /* Private */,
      23,    2,  135,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   24,   25,

       0        // eod
};

void SneakerTraClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SneakerTraClient *_t = static_cast<SneakerTraClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotUserLogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->slotUserLoginResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotUserLogout(); break;
        case 3: _t->slotUserLogoutResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotUserClose(); break;
        case 5: _t->on_actionFansInfo_triggered(); break;
        case 6: _t->on_actionFansHome_triggered(); break;
        case 7: _t->on_actionTrolley_triggered(); break;
        case 8: _t->on_actionFansChangPswd_triggered(); break;
        case 9: _t->on_actionFansTranscation_triggered(); break;
        case 10: _t->on_actionTraderInfo_triggered(); break;
        case 11: _t->on_actionTraderHome_triggered(); break;
        case 12: _t->on_actionStore_triggered(); break;
        case 13: _t->on_actionMerch_triggered(); break;
        case 14: _t->on_actionTraderTransc_triggered(); break;
        case 15: _t->on_actionTraderChangePswd_triggered(); break;
        case 16: _t->slotRefreshStoreData(); break;
        case 17: _t->slotApplyStoreLogo(); break;
        case 18: _t->slotAddStore((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SneakerTraClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SneakerTraClient.data,
      qt_meta_data_SneakerTraClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SneakerTraClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SneakerTraClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SneakerTraClient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SneakerTraClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
