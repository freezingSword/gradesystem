/****************************************************************************
** Meta object code from reading C++ file 'teachermanagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../teachermanagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teachermanagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_teachermanagement_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teachermanagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teachermanagement_t qt_meta_stringdata_teachermanagement = {
    {
QT_MOC_LITERAL(0, 0, 17), // "teachermanagement"
QT_MOC_LITERAL(1, 18, 8), // "backSlot"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "searchSlot"
QT_MOC_LITERAL(4, 39, 10), // "insertSlot"
QT_MOC_LITERAL(5, 50, 8), // "showSlot"
QT_MOC_LITERAL(6, 59, 10), // "delbtnSlot"
QT_MOC_LITERAL(7, 70, 10) // "changeSlot"

    },
    "teachermanagement\0backSlot\0\0searchSlot\0"
    "insertSlot\0showSlot\0delbtnSlot\0"
    "changeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teachermanagement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void teachermanagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teachermanagement *_t = static_cast<teachermanagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backSlot(); break;
        case 1: _t->searchSlot(); break;
        case 2: _t->insertSlot(); break;
        case 3: _t->showSlot(); break;
        case 4: _t->delbtnSlot(); break;
        case 5: _t->changeSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject teachermanagement::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_teachermanagement.data,
      qt_meta_data_teachermanagement,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *teachermanagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teachermanagement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_teachermanagement.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int teachermanagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
