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
    QByteArrayData data[13];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SneakerTraClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SneakerTraClient_t qt_meta_stringdata_SneakerTraClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SneakerTraClient"
QT_MOC_LITERAL(1, 17, 27), // "on_actionFansInfo_triggered"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 27), // "on_actionFansHome_triggered"
QT_MOC_LITERAL(4, 74, 26), // "on_actionTrolley_triggered"
QT_MOC_LITERAL(5, 101, 32), // "on_actionFansChangPswd_triggered"
QT_MOC_LITERAL(6, 134, 34), // "on_actionFansTranscation_trig..."
QT_MOC_LITERAL(7, 169, 29), // "on_actionTraderInfo_triggered"
QT_MOC_LITERAL(8, 199, 29), // "on_actionTraderHome_triggered"
QT_MOC_LITERAL(9, 229, 24), // "on_actionStore_triggered"
QT_MOC_LITERAL(10, 254, 24), // "on_actionMerch_triggered"
QT_MOC_LITERAL(11, 279, 31), // "on_actionTraderTransc_triggered"
QT_MOC_LITERAL(12, 311, 35) // "on_actionTraderChangePswd_tri..."

    },
    "SneakerTraClient\0on_actionFansInfo_triggered\0"
    "\0on_actionFansHome_triggered\0"
    "on_actionTrolley_triggered\0"
    "on_actionFansChangPswd_triggered\0"
    "on_actionFansTranscation_triggered\0"
    "on_actionTraderInfo_triggered\0"
    "on_actionTraderHome_triggered\0"
    "on_actionStore_triggered\0"
    "on_actionMerch_triggered\0"
    "on_actionTraderTransc_triggered\0"
    "on_actionTraderChangePswd_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SneakerTraClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void SneakerTraClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SneakerTraClient *_t = static_cast<SneakerTraClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionFansInfo_triggered(); break;
        case 1: _t->on_actionFansHome_triggered(); break;
        case 2: _t->on_actionTrolley_triggered(); break;
        case 3: _t->on_actionFansChangPswd_triggered(); break;
        case 4: _t->on_actionFansTranscation_triggered(); break;
        case 5: _t->on_actionTraderInfo_triggered(); break;
        case 6: _t->on_actionTraderHome_triggered(); break;
        case 7: _t->on_actionStore_triggered(); break;
        case 8: _t->on_actionMerch_triggered(); break;
        case 9: _t->on_actionTraderTransc_triggered(); break;
        case 10: _t->on_actionTraderChangePswd_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE