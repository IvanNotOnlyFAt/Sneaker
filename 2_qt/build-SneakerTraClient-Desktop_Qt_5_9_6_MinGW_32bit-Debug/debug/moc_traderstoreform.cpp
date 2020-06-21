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
    QByteArrayData data[11];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraderStoreForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraderStoreForm_t qt_meta_stringdata_TraderStoreForm = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TraderStoreForm"
QT_MOC_LITERAL(1, 16, 22), // "signalRefreshStoreData"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "signalApplyStoreLogo"
QT_MOC_LITERAL(4, 61, 35), // "on_cb_condition_currentIndexC..."
QT_MOC_LITERAL(5, 97, 5), // "index"
QT_MOC_LITERAL(6, 103, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(7, 124, 24), // "on_pb_applystore_clicked"
QT_MOC_LITERAL(8, 149, 23), // "slotGainStoreInfoResult"
QT_MOC_LITERAL(9, 173, 3), // "res"
QT_MOC_LITERAL(10, 177, 23) // "slotGainStoreLogoResult"

    },
    "TraderStoreForm\0signalRefreshStoreData\0"
    "\0signalApplyStoreLogo\0"
    "on_cb_condition_currentIndexChanged\0"
    "index\0on_pb_search_clicked\0"
    "on_pb_applystore_clicked\0"
    "slotGainStoreInfoResult\0res\0"
    "slotGainStoreLogoResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraderStoreForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void TraderStoreForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraderStoreForm *_t = static_cast<TraderStoreForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRefreshStoreData(); break;
        case 1: _t->signalApplyStoreLogo(); break;
        case 2: _t->on_cb_condition_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pb_search_clicked(); break;
        case 4: _t->on_pb_applystore_clicked(); break;
        case 5: _t->slotGainStoreInfoResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotGainStoreLogoResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TraderStoreForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalRefreshStoreData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TraderStoreForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreForm::signalApplyStoreLogo)) {
                *result = 1;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TraderStoreForm::signalRefreshStoreData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TraderStoreForm::signalApplyStoreLogo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
