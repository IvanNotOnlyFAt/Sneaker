/****************************************************************************
** Meta object code from reading C++ file 'msgsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/network/msgsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MsgSocket_t {
    QByteArrayData data[18];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MsgSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MsgSocket_t qt_meta_stringdata_MsgSocket = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MsgSocket"
QT_MOC_LITERAL(1, 10, 21), // "signalUserLoginResult"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "res"
QT_MOC_LITERAL(4, 37, 22), // "signalUserLogoutResult"
QT_MOC_LITERAL(5, 60, 18), // "signalGainFansInfo"
QT_MOC_LITERAL(6, 79, 20), // "signalGainTraderInfo"
QT_MOC_LITERAL(7, 100, 19), // "signalGainStoreInfo"
QT_MOC_LITERAL(8, 120, 19), // "signalGainStoreLogo"
QT_MOC_LITERAL(9, 140, 22), // "signalApplyStoreResult"
QT_MOC_LITERAL(10, 163, 5), // "newID"
QT_MOC_LITERAL(11, 169, 23), // "signalDeleteStoreResult"
QT_MOC_LITERAL(12, 193, 13), // "slotReadyRead"
QT_MOC_LITERAL(13, 207, 11), // "slotSendMsg"
QT_MOC_LITERAL(14, 219, 3), // "msg"
QT_MOC_LITERAL(15, 223, 11), // "slotSendImg"
QT_MOC_LITERAL(16, 235, 7), // "command"
QT_MOC_LITERAL(17, 243, 5) // "image"

    },
    "MsgSocket\0signalUserLoginResult\0\0res\0"
    "signalUserLogoutResult\0signalGainFansInfo\0"
    "signalGainTraderInfo\0signalGainStoreInfo\0"
    "signalGainStoreLogo\0signalApplyStoreResult\0"
    "newID\0signalDeleteStoreResult\0"
    "slotReadyRead\0slotSendMsg\0msg\0slotSendImg\0"
    "command\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MsgSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,
       7,    1,   81,    2, 0x06 /* Public */,
       8,    1,   84,    2, 0x06 /* Public */,
       9,    2,   87,    2, 0x06 /* Public */,
      11,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   95,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x0a /* Public */,
      15,    2,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,   10,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   16,   17,

       0        // eod
};

void MsgSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MsgSocket *_t = static_cast<MsgSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUserLoginResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalUserLogoutResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalGainFansInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalGainTraderInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->signalGainStoreInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->signalGainStoreLogo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->signalApplyStoreResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->signalDeleteStoreResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotReadyRead(); break;
        case 9: _t->slotSendMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->slotSendImg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalUserLoginResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalUserLogoutResult)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalGainFansInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalGainTraderInfo)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalGainStoreInfo)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalGainStoreLogo)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalApplyStoreResult)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MsgSocket::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MsgSocket::signalDeleteStoreResult)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject MsgSocket::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MsgSocket.data,
      qt_meta_data_MsgSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MsgSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MsgSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MsgSocket.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MsgSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MsgSocket::signalUserLoginResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MsgSocket::signalUserLogoutResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MsgSocket::signalGainFansInfo(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MsgSocket::signalGainTraderInfo(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MsgSocket::signalGainStoreInfo(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MsgSocket::signalGainStoreLogo(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MsgSocket::signalApplyStoreResult(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MsgSocket::signalDeleteStoreResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
