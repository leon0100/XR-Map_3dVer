/****************************************************************************
** Meta object code from reading C++ file 'contacts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/contacts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contacts_t {
    QByteArrayData data[18];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contacts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contacts_t qt_meta_stringdata_Contacts = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Contacts"
QT_MOC_LITERAL(1, 9, 11), // "QML.Element"
QT_MOC_LITERAL(2, 21, 14), // "contactChanged"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 10), // "setContact"
QT_MOC_LITERAL(5, 48, 4), // "indx"
QT_MOC_LITERAL(6, 53, 4), // "text"
QT_MOC_LITERAL(7, 58, 13), // "deleteContact"
QT_MOC_LITERAL(8, 72, 16), // "setActiveContact"
QT_MOC_LITERAL(9, 89, 6), // "update"
QT_MOC_LITERAL(10, 96, 11), // "contactInfo"
QT_MOC_LITERAL(11, 108, 14), // "contactVisible"
QT_MOC_LITERAL(12, 123, 16), // "contactPositionX"
QT_MOC_LITERAL(13, 140, 16), // "contactPositionY"
QT_MOC_LITERAL(14, 157, 11), // "contactIndx"
QT_MOC_LITERAL(15, 169, 10), // "contactLat"
QT_MOC_LITERAL(16, 180, 10), // "contactLon"
QT_MOC_LITERAL(17, 191, 12) // "contactDepth"

    },
    "Contacts\0QML.Element\0contactChanged\0"
    "\0setContact\0indx\0text\0deleteContact\0"
    "setActiveContact\0update\0contactInfo\0"
    "contactVisible\0contactPositionX\0"
    "contactPositionY\0contactIndx\0contactLat\0"
    "contactLon\0contactDepth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contacts[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       8,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags
       2,    0,   41,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   42,    3, 0x0a /* Public */,
       7,    1,   47,    3, 0x0a /* Public */,
       8,    1,   50,    3, 0x0a /* Public */,
       9,    0,   53,    3, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::Double, 0x00495001,
      16, QMetaType::Double, 0x00495001,
      17, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Contacts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Contacts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contactChanged(); break;
        case 1: { bool _r = _t->setContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->deleteContact((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setActiveContact((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Contacts::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Contacts::contactChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Contacts *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getContactInfo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getContactVisible(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getContactPositionX(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getContactPositionY(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getContactIndx(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getContactLat(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getContactLon(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getContactDepth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Contacts::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_Contacts.data,
    qt_meta_data_Contacts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Contacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contacts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contacts.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int Contacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Contacts::contactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
