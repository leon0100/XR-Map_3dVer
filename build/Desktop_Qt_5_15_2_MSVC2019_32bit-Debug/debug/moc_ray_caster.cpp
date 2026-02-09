/****************************************************************************
** Meta object code from reading C++ file 'ray_caster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/utils/ray_caster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ray_caster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RayCaster_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RayCaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RayCaster_t qt_meta_stringdata_RayCaster = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RayCaster"
QT_MOC_LITERAL(1, 10, 7), // "setMode"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 22), // "RayCaster::RayCastMode"
QT_MOC_LITERAL(4, 42, 4), // "mode"
QT_MOC_LITERAL(5, 47, 9), // "addObject"
QT_MOC_LITERAL(6, 57, 26), // "std::weak_ptr<SceneObject>"
QT_MOC_LITERAL(7, 84, 6), // "object"
QT_MOC_LITERAL(8, 91, 12), // "setDirection"
QT_MOC_LITERAL(9, 104, 9), // "direction"
QT_MOC_LITERAL(10, 114, 9), // "setOrigin"
QT_MOC_LITERAL(11, 124, 6), // "origin"
QT_MOC_LITERAL(12, 131, 9), // "setLength"
QT_MOC_LITERAL(13, 141, 6), // "length"
QT_MOC_LITERAL(14, 148, 7), // "trigger"
QT_MOC_LITERAL(15, 156, 5) // "reset"

    },
    "RayCaster\0setMode\0\0RayCaster::RayCastMode\0"
    "mode\0addObject\0std::weak_ptr<SceneObject>\0"
    "object\0setDirection\0direction\0setOrigin\0"
    "origin\0setLength\0length\0trigger\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RayCaster[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,
      14,    0,   74,    2, 0x0a /* Public */,
      14,    3,   75,    2, 0x0a /* Public */,
      14,    2,   82,    2, 0x2a /* Public | MethodCloned */,
      15,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QVector3D,    9,
    QMetaType::Void, QMetaType::QVector3D,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::Float,   11,    9,   13,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D,   11,    9,
    QMetaType::Void,

       0        // eod
};

void RayCaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RayCaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMode((*reinterpret_cast< RayCaster::RayCastMode(*)>(_a[1]))); break;
        case 1: _t->addObject((*reinterpret_cast< std::weak_ptr<SceneObject>(*)>(_a[1]))); break;
        case 2: _t->setDirection((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 3: _t->setOrigin((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 4: _t->setLength((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->trigger(); break;
        case 6: _t->trigger((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->trigger((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RayCaster::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RayCaster.data,
    qt_meta_data_RayCaster,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RayCaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RayCaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RayCaster.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RayCaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
