/****************************************************************************
** Meta object code from reading C++ file 'cloginform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SneakerTraClient/sublogform/cloginform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloginform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CLoginForm_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLoginForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLoginForm_t qt_meta_stringdata_CLoginForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CLoginForm"
QT_MOC_LITERAL(1, 11, 15), // "signalUserLogin"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "id"
QT_MOC_LITERAL(4, 31, 4), // "pswd"
QT_MOC_LITERAL(5, 36, 16), // "signalUserLogout"
QT_MOC_LITERAL(6, 53, 19), // "on_pb_login_clicked"
QT_MOC_LITERAL(7, 73, 19), // "on_pb_logup_clicked"
QT_MOC_LITERAL(8, 93, 20) // "on_pb_forget_clicked"

    },
    "CLoginForm\0signalUserLogin\0\0id\0pswd\0"
    "signalUserLogout\0on_pb_login_clicked\0"
    "on_pb_logup_clicked\0on_pb_forget_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLoginForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CLoginForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CLoginForm *_t = static_cast<CLoginForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUserLogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalUserLogout(); break;
        case 2: _t->on_pb_login_clicked(); break;
        case 3: _t->on_pb_logup_clicked(); break;
        case 4: _t->on_pb_forget_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CLoginForm::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CLoginForm::signalUserLogin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CLoginForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CLoginForm::signalUserLogout)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CLoginForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CLoginForm.data,
      qt_meta_data_CLoginForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CLoginForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLoginForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLoginForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CLoginForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CLoginForm::signalUserLogin(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CLoginForm::signalUserLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
