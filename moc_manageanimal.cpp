/****************************************************************************
** Meta object code from reading C++ file 'manageanimal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "manageanimal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageanimal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_manageAnimal_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageAnimal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageAnimal_t qt_meta_stringdata_manageAnimal = {
    {
QT_MOC_LITERAL(0, 0, 12), // "manageAnimal"
QT_MOC_LITERAL(1, 13, 23), // "on_addAnimalbtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "showAnimals"
QT_MOC_LITERAL(4, 50, 11), // "loadAnimals"
QT_MOC_LITERAL(5, 62, 23), // "on_animalView_activated"
QT_MOC_LITERAL(6, 86, 5), // "index"
QT_MOC_LITERAL(7, 92, 20) // "on_btnLogout_clicked"

    },
    "manageAnimal\0on_addAnimalbtn_clicked\0"
    "\0showAnimals\0loadAnimals\0"
    "on_animalView_activated\0index\0"
    "on_btnLogout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageAnimal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,

       0        // eod
};

void manageAnimal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageAnimal *_t = static_cast<manageAnimal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addAnimalbtn_clicked(); break;
        case 1: _t->showAnimals(); break;
        case 2: _t->loadAnimals(); break;
        case 3: _t->on_animalView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_btnLogout_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject manageAnimal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageAnimal.data,
      qt_meta_data_manageAnimal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *manageAnimal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageAnimal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_manageAnimal.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int manageAnimal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
