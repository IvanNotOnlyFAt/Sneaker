/****************************************************************************
** Meta object code from reading C++ file 'traderstoreform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/subtrader/traderstoreform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traderstoreform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraderStoreForm_t {
    QByteArrayData data[19];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraderStoreForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraderStoreForm_t qt_meta_stringdata_TraderStoreForm = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TraderStoreForm"
QT_MOC_LITERAL(1, 16, 14), // "signalAddStore"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "msg"
QT_MOC_LITERAL(4, 36, 5), // "image"
QT_MOC_LITERAL(5, 42, 22), // "signalRefreshStoreData"
QT_MOC_LITERAL(6, 65, 20), // "signalApplyStoreLogo"
QT_MOC_LITERAL(7, 86, 21), // "signalDeleteStoreItem"
QT_MOC_LITERAL(8, 108, 35), // "on_cb_condition_currentIndexC..."
QT_MOC_LITERAL(9, 144, 5), // "index"
QT_MOC_LITERAL(10, 150, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(11, 171, 24), // "on_pb_applystore_clicked"
QT_MOC_LITERAL(12, 196, 23), // "slotGainStoreInfoResult"
QT_MOC_LITERAL(13, 220, 3), // "res"
QT_MOC_LITERAL(14, 224, 23), // "slotGainStoreLogoResult"
QT_MOC_LITERAL(15, 248, 17), // "slotApplyAddStore"
QT_MOC_LITERAL(16, 266, 20), // "slotApplyStoreResult"
QT_MOC_LITERAL(17, 287, 21), // "slotDeleteStoreResult"
QT_MOC_LITERAL(18, 309, 15) // "slotDeleteStore"

    },
    "TraderStoreForm\0signalAddStore\0\0msg\0"
    "image\0signalRefreshStoreData\0"
    "signalApplyStoreLogo\0signalDeleteStoreItem\0"
    "on_cb_condition_currentIndexChanged\0"
    "index\0on_pb_search_clicked\0"
    "on_pb_applystore_clicked\0"
    "slotGainStoreInfoResult\0res\0"
    "slotGainStoreLogoResult\0slotApplyAddStore\0"
    "slotApplyStoreResult\0slotDeleteStoreResult\0"
    "slotDeleteStore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraderStoreForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    0,   84,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   89,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    2,  100,    2, 0x08 /* Private */,
      16,    2,  105,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,    3,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void TraderStoreForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraderStoreForm *_t = static_cast<TraderStoreForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalAddStore((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->signalRefreshStoreData(); break;
        case 2: _t->signalApplyStoreLogo(); break;
        case 3: _t->signalDeleteStoreItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_cb_condition_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pb_search_clicked(); break;
        case 6: _t->on_pb_applystore_clicked(); break;
        case 7: _t->slotGainStoreInfoResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotGainStoreLogoResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotApplyAddStore((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 10: _t->slotApplyStoreResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->slotDeleteStoreResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->slotDeleteStore((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TraderStoreForm::*_t)(QString , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalAddStore)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TraderStoreForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalRefreshStoreData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TraderStoreForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalApplyStoreLogo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TraderStoreForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalDeleteStoreItem)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject TraderStoreForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TraderStoreForm.data,
      qt_meta_data_TraderStoreForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TraderStoreForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraderStoreForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraderStoreForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TraderStoreForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void TraderStoreForm::signalAddStore(QString _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TraderStoreForm::signalRefreshStoreData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TraderStoreForm::signalApplyStoreLogo()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TraderStoreForm::signalDeleteStoreItem(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
