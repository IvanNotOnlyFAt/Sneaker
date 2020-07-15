/****************************************************************************
** Meta object code from reading C++ file 'fanshomeform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/subfans/fanshomeform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fanshomeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FansHomeForm_t {
    QByteArrayData data[16];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FansHomeForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FansHomeForm_t qt_meta_stringdata_FansHomeForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FansHomeForm"
QT_MOC_LITERAL(1, 13, 21), // "signalRefreshHomeData"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "signalHomeStoreApply"
QT_MOC_LITERAL(4, 57, 3), // "msg"
QT_MOC_LITERAL(5, 61, 20), // "signalHomeMerchApply"
QT_MOC_LITERAL(6, 82, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(7, 103, 25), // "on_cb_condition_activated"
QT_MOC_LITERAL(8, 129, 5), // "index"
QT_MOC_LITERAL(9, 135, 20), // "on_pb_change_clicked"
QT_MOC_LITERAL(10, 156, 16), // "slotGainHomeInfo"
QT_MOC_LITERAL(11, 173, 3), // "res"
QT_MOC_LITERAL(12, 177, 22), // "slotGainHomeStorePhoto"
QT_MOC_LITERAL(13, 200, 22), // "slotGainHomeMerchPhoto"
QT_MOC_LITERAL(14, 223, 14), // "slotPBPurchase"
QT_MOC_LITERAL(15, 238, 7) // "merchID"

    },
    "FansHomeForm\0signalRefreshHomeData\0\0"
    "signalHomeStoreApply\0msg\0signalHomeMerchApply\0"
    "on_pb_search_clicked\0on_cb_condition_activated\0"
    "index\0on_pb_change_clicked\0slotGainHomeInfo\0"
    "res\0slotGainHomeStorePhoto\0"
    "slotGainHomeMerchPhoto\0slotPBPurchase\0"
    "merchID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FansHomeForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   71,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void FansHomeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FansHomeForm *_t = static_cast<FansHomeForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRefreshHomeData(); break;
        case 1: _t->signalHomeStoreApply((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalHomeMerchApply((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pb_search_clicked(); break;
        case 4: _t->on_cb_condition_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pb_change_clicked(); break;
        case 6: _t->slotGainHomeInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotGainHomeStorePhoto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotGainHomeMerchPhoto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotPBPurchase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FansHomeForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FansHomeForm::signalRefreshHomeData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FansHomeForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FansHomeForm::signalHomeStoreApply)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FansHomeForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FansHomeForm::signalHomeMerchApply)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FansHomeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FansHomeForm.data,
      qt_meta_data_FansHomeForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FansHomeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FansHomeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FansHomeForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FansHomeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FansHomeForm::signalRefreshHomeData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FansHomeForm::signalHomeStoreApply(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FansHomeForm::signalHomeMerchApply(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
