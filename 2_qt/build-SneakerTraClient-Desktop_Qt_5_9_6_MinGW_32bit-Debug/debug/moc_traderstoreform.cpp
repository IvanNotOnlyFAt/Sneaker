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
    QByteArrayData data[9];
    char stringdata0[156];
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
QT_MOC_LITERAL(3, 40, 35), // "on_cb_condition_currentIndexC..."
QT_MOC_LITERAL(4, 76, 5), // "index"
QT_MOC_LITERAL(5, 82, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(6, 103, 24), // "on_pb_applystore_clicked"
QT_MOC_LITERAL(7, 128, 23), // "slotGainStoreInfoResult"
QT_MOC_LITERAL(8, 152, 3) // "res"

    },
    "TraderStoreForm\0signalRefreshStoreData\0"
    "\0on_cb_condition_currentIndexChanged\0"
    "index\0on_pb_search_clicked\0"
    "on_pb_applystore_clicked\0"
    "slotGainStoreInfoResult\0res"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraderStoreForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void TraderStoreForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraderStoreForm *_t = static_cast<TraderStoreForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRefreshStoreData(); break;
        case 1: _t->on_cb_condition_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pb_search_clicked(); break;
        case 3: _t->on_pb_applystore_clicked(); break;
        case 4: _t->slotGainStoreInfoResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TraderStoreForm::signalRefreshStoreData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE