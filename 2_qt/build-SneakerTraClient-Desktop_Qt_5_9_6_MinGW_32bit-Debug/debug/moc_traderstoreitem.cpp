/****************************************************************************
** Meta object code from reading C++ file 'traderstoreitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/subtraderitem/traderstoreitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traderstoreitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraderStoreItem_t {
    QByteArrayData data[7];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraderStoreItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraderStoreItem_t qt_meta_stringdata_TraderStoreItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TraderStoreItem"
QT_MOC_LITERAL(1, 16, 17), // "signalDeleteStore"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "msg"
QT_MOC_LITERAL(4, 39, 20), // "on_pb_switch_clicked"
QT_MOC_LITERAL(5, 60, 20), // "on_pb_change_clicked"
QT_MOC_LITERAL(6, 81, 20) // "on_pb_delete_clicked"

    },
    "TraderStoreItem\0signalDeleteStore\0\0"
    "msg\0on_pb_switch_clicked\0on_pb_change_clicked\0"
    "on_pb_delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraderStoreItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TraderStoreItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraderStoreItem *_t = static_cast<TraderStoreItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalDeleteStore((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pb_switch_clicked(); break;
        case 2: _t->on_pb_change_clicked(); break;
        case 3: _t->on_pb_delete_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TraderStoreItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraderStoreItem::signalDeleteStore)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TraderStoreItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TraderStoreItem.data,
      qt_meta_data_TraderStoreItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TraderStoreItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraderStoreItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraderStoreItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TraderStoreItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TraderStoreItem::signalDeleteStore(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
