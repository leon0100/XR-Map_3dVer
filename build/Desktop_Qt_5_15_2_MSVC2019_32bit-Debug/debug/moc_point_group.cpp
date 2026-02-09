/****************************************************************************
** Meta object code from reading C++ file 'point_group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/point_group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'point_group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PointGroup_t {
    QByteArrayData data[13];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PointGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PointGroup_t qt_meta_stringdata_PointGroup = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PointGroup"
QT_MOC_LITERAL(1, 11, 11), // "QML.Element"
QT_MOC_LITERAL(2, 23, 6), // "append"
QT_MOC_LITERAL(3, 30, 0), // ""
QT_MOC_LITERAL(4, 31, 28), // "std::shared_ptr<PointObject>"
QT_MOC_LITERAL(5, 60, 5), // "point"
QT_MOC_LITERAL(6, 66, 7), // "setData"
QT_MOC_LITERAL(7, 74, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(8, 93, 4), // "data"
QT_MOC_LITERAL(9, 98, 13), // "primitiveType"
QT_MOC_LITERAL(10, 112, 9), // "clearData"
QT_MOC_LITERAL(11, 122, 8), // "removeAt"
QT_MOC_LITERAL(12, 131, 5) // "index"

    },
    "PointGroup\0QML.Element\0append\0\0"
    "std::shared_ptr<PointObject>\0point\0"
    "setData\0QVector<QVector3D>\0data\0"
    "primitiveType\0clearData\0removeAt\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // slots: name, argc, parameters, tag, flags
       2,    1,   41,    3, 0x0a /* Public */,
       6,    2,   44,    3, 0x0a /* Public */,
       6,    1,   49,    3, 0x2a /* Public | MethodCloned */,
      10,    0,   52,    3, 0x0a /* Public */,
      11,    1,   53,    3, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void PointGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->append((*reinterpret_cast< std::shared_ptr<PointObject>(*)>(_a[1]))); break;
        case 1: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 3: _t->clearData(); break;
        case 4: _t->removeAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PointGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_PointGroup.data,
    qt_meta_data_PointGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PointGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointGroup.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int PointGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
