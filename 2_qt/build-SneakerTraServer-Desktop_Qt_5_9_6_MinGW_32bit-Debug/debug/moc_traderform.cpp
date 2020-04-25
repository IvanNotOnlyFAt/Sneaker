/****************************************************************************
** Meta object code from reading C++ file 'traderform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraServer/subwidgets/traderform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traderform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraderForm_t {
    QByteArrayData data[11];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraderForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraderForm_t qt_meta_stringdata_TraderForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TraderForm"
QT_MOC_LITERAL(1, 11, 20), // "on_pb_search_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_pb_modify_clicked"
QT_MOC_LITERAL(4, 54, 20), // "on_pb_delete_clicked"
QT_MOC_LITERAL(5, 75, 17), // "on_pb_add_clicked"
QT_MOC_LITERAL(6, 93, 20), // "on_pb_cancel_clicked"
QT_MOC_LITERAL(7, 114, 18), // "on_pb_save_clicked"
QT_MOC_LITERAL(8, 133, 22), // "on_tableWidget_clicked"
QT_MOC_LITERAL(9, 156, 5), // "index"
QT_MOC_LITERAL(10, 162, 35) // "on_cb_condition_currentIndexC..."

    },
    "TraderForm\0on_pb_search_clicked\0\0"
    "on_pb_modify_clicked\0on_pb_delete_clicked\0"
    "on_pb_add_clicked\0on_pb_cancel_clicked\0"
    "on_pb_save_clicked\0on_tableWidget_clicked\0"
    "index\0on_cb_condition_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraderForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void TraderForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraderForm *_t = static_cast<TraderForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_search_clicked(); break;
        case 1: _t->on_pb_modify_clicked(); break;
        case 2: _t->on_pb_delete_clicked(); break;
        case 3: _t->on_pb_add_clicked(); break;
        case 4: _t->on_pb_cancel_clicked(); break;
        case 5: _t->on_pb_save_clicked(); break;
        case 6: _t->on_tableWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_cb_condition_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TraderForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TraderForm.data,
      qt_meta_data_TraderForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TraderForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraderForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraderForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TraderForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
