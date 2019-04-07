/****************************************************************************
** Meta object code from reading C++ file 'uiserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uiserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddNewAnimalUI_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddNewAnimalUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddNewAnimalUI_t qt_meta_stringdata_AddNewAnimalUI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddNewAnimalUI"
QT_MOC_LITERAL(1, 15, 20), // "on_cancelbtn_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23) // "on_addAnimalbtn_clicked"

    },
    "AddNewAnimalUI\0on_cancelbtn_clicked\0"
    "\0on_addAnimalbtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddNewAnimalUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddNewAnimalUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddNewAnimalUI *_t = static_cast<AddNewAnimalUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancelbtn_clicked(); break;
        case 1: _t->on_addAnimalbtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddNewAnimalUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddNewAnimalUI.data,
      qt_meta_data_AddNewAnimalUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddNewAnimalUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddNewAnimalUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddNewAnimalUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddNewAnimalUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AddNewClientUI_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddNewClientUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddNewClientUI_t qt_meta_stringdata_AddNewClientUI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddNewClientUI"
QT_MOC_LITERAL(1, 15, 24), // "on_cancel_button_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21) // "on_add_client_clicked"

    },
    "AddNewClientUI\0on_cancel_button_clicked\0"
    "\0on_add_client_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddNewClientUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddNewClientUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddNewClientUI *_t = static_cast<AddNewClientUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancel_button_clicked(); break;
        case 1: _t->on_add_client_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddNewClientUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddNewClientUI.data,
      qt_meta_data_AddNewClientUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddNewClientUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddNewClientUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddNewClientUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddNewClientUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_EditAnimalUI_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditAnimalUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditAnimalUI_t qt_meta_stringdata_EditAnimalUI = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EditAnimalUI"
QT_MOC_LITERAL(1, 13, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20) // "on_btnCancel_clicked"

    },
    "EditAnimalUI\0on_btnSave_clicked\0\0"
    "on_btnCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditAnimalUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditAnimalUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditAnimalUI *_t = static_cast<EditAnimalUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSave_clicked(); break;
        case 1: _t->on_btnCancel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EditAnimalUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditAnimalUI.data,
      qt_meta_data_EditAnimalUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditAnimalUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditAnimalUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditAnimalUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditAnimalUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_EditClientUI_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditClientUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditClientUI_t qt_meta_stringdata_EditClientUI = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EditClientUI"
QT_MOC_LITERAL(1, 13, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20) // "on_btnCancel_clicked"

    },
    "EditClientUI\0on_btnSave_clicked\0\0"
    "on_btnCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditClientUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditClientUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditClientUI *_t = static_cast<EditClientUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSave_clicked(); break;
        case 1: _t->on_btnCancel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EditClientUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditClientUI.data,
      qt_meta_data_EditClientUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditClientUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditClientUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditClientUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditClientUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_LoginUI_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginUI_t qt_meta_stringdata_LoginUI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LoginUI"
QT_MOC_LITERAL(1, 8, 20), // "on_btnClient_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19) // "on_btnStaff_clicked"

    },
    "LoginUI\0on_btnClient_clicked\0\0"
    "on_btnStaff_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginUI *_t = static_cast<LoginUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnClient_clicked(); break;
        case 1: _t->on_btnStaff_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LoginUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginUI.data,
      qt_meta_data_LoginUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoginUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ManageAnimalUI_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManageAnimalUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManageAnimalUI_t qt_meta_stringdata_ManageAnimalUI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ManageAnimalUI"
QT_MOC_LITERAL(1, 15, 24), // "on_btnEditanimal_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_animalView_activated"
QT_MOC_LITERAL(4, 65, 5), // "index"
QT_MOC_LITERAL(5, 71, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(6, 90, 26) // "on_addNewAnimalbtn_clicked"

    },
    "ManageAnimalUI\0on_btnEditanimal_clicked\0"
    "\0on_animalView_activated\0index\0"
    "on_btnBack_clicked\0on_addNewAnimalbtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManageAnimalUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ManageAnimalUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManageAnimalUI *_t = static_cast<ManageAnimalUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnEditanimal_clicked(); break;
        case 1: _t->on_animalView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_btnBack_clicked(); break;
        case 3: _t->on_addNewAnimalbtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ManageAnimalUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManageAnimalUI.data,
      qt_meta_data_ManageAnimalUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ManageAnimalUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageAnimalUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManageAnimalUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ManageAnimalUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ManageClientUI_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManageClientUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManageClientUI_t qt_meta_stringdata_ManageClientUI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ManageClientUI"
QT_MOC_LITERAL(1, 15, 26), // "on_addclientbutton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(4, 62, 23), // "on_clientlist_activated"
QT_MOC_LITERAL(5, 86, 5) // "index"

    },
    "ManageClientUI\0on_addclientbutton_clicked\0"
    "\0on_btnBack_clicked\0on_clientlist_activated\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManageClientUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void ManageClientUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ManageClientUI *_t = static_cast<ManageClientUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addclientbutton_clicked(); break;
        case 1: _t->on_btnBack_clicked(); break;
        case 2: _t->on_clientlist_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ManageClientUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManageClientUI.data,
      qt_meta_data_ManageClientUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ManageClientUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageClientUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManageClientUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ManageClientUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_ClientPortalUI_t {
    QByteArrayData data[5];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientPortalUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientPortalUI_t qt_meta_stringdata_ClientPortalUI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ClientPortalUI"
QT_MOC_LITERAL(1, 15, 22), // "on_Viewanimals_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "on_Editprofile_clicked"
QT_MOC_LITERAL(4, 62, 24) // "on_client_logout_clicked"

    },
    "ClientPortalUI\0on_Viewanimals_clicked\0"
    "\0on_Editprofile_clicked\0"
    "on_client_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientPortalUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientPortalUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientPortalUI *_t = static_cast<ClientPortalUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Viewanimals_clicked(); break;
        case 1: _t->on_Editprofile_clicked(); break;
        case 2: _t->on_client_logout_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ClientPortalUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClientPortalUI.data,
      qt_meta_data_ClientPortalUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClientPortalUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientPortalUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientPortalUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ClientPortalUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_StaffPortalUI_t {
    QByteArrayData data[6];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StaffPortalUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StaffPortalUI_t qt_meta_stringdata_StaffPortalUI = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StaffPortalUI"
QT_MOC_LITERAL(1, 14, 21), // "on_btnAnimals_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "on_btnClients_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_staff_logout_clicked"
QT_MOC_LITERAL(5, 83, 23) // "on_runACMButton_clicked"

    },
    "StaffPortalUI\0on_btnAnimals_clicked\0"
    "\0on_btnClients_clicked\0on_staff_logout_clicked\0"
    "on_runACMButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StaffPortalUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StaffPortalUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StaffPortalUI *_t = static_cast<StaffPortalUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAnimals_clicked(); break;
        case 1: _t->on_btnClients_clicked(); break;
        case 2: _t->on_staff_logout_clicked(); break;
        case 3: _t->on_runACMButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject StaffPortalUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StaffPortalUI.data,
      qt_meta_data_StaffPortalUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StaffPortalUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaffPortalUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StaffPortalUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StaffPortalUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ACMUI_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ACMUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ACMUI_t qt_meta_stringdata_ACMUI = {
    {
QT_MOC_LITERAL(0, 0, 5), // "ACMUI"
QT_MOC_LITERAL(1, 6, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "on_ACMResultsTable_activated"
QT_MOC_LITERAL(4, 58, 5) // "index"

    },
    "ACMUI\0on_backButton_clicked\0\0"
    "on_ACMResultsTable_activated\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ACMUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void ACMUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ACMUI *_t = static_cast<ACMUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_backButton_clicked(); break;
        case 1: _t->on_ACMResultsTable_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ACMUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ACMUI.data,
      qt_meta_data_ACMUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ACMUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ACMUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ACMUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ACMUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
