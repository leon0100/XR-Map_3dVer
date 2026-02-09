/****************************************************************************
** Meta object code from reading C++ file 'polygon_group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/polygon_group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polygon_group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolygonGroup_t {
    QByteArrayData data[17];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolygonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolygonGroup_t qt_meta_stringdata_PolygonGroup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PolygonGroup"
QT_MOC_LITERAL(1, 13, 11), // "QML.Element"
QT_MOC_LITERAL(2, 25, 10), // "addPolygon"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 30), // "std::shared_ptr<PolygonObject>"
QT_MOC_LITERAL(5, 68, 7), // "polygon"
QT_MOC_LITERAL(6, 76, 13), // "removePolygon"
QT_MOC_LITERAL(7, 90, 15), // "removePolygonAt"
QT_MOC_LITERAL(8, 106, 5), // "index"
QT_MOC_LITERAL(9, 112, 7), // "setData"
QT_MOC_LITERAL(10, 120, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(11, 139, 4), // "data"
QT_MOC_LITERAL(12, 144, 13), // "primitiveType"
QT_MOC_LITERAL(13, 158, 9), // "clearData"
QT_MOC_LITERAL(14, 168, 20), // "polygonObjectChanged"
QT_MOC_LITERAL(15, 189, 9), // "polygonAt"
QT_MOC_LITERAL(16, 199, 14) // "PolygonObject*"

    },
    "PolygonGroup\0QML.Element\0addPolygon\0"
    "\0std::shared_ptr<PolygonObject>\0polygon\0"
    "removePolygon\0removePolygonAt\0index\0"
    "setData\0QVector<QVector3D>\0data\0"
    "primitiveType\0clearData\0polygonObjectChanged\0"
    "polygonAt\0PolygonObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolygonGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // slots: name, argc, parameters, tag, flags
       2,    1,   56,    3, 0x0a /* Public */,
       6,    1,   59,    3, 0x0a /* Public */,
       7,    1,   62,    3, 0x0a /* Public */,
       9,    2,   65,    3, 0x0a /* Public */,
       9,    1,   70,    3, 0x2a /* Public | MethodCloned */,
      13,    0,   73,    3, 0x0a /* Public */,
      14,    0,   74,    3, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   75,    3, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 16, QMetaType::Int,    8,

       0        // eod
};

void PolygonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolygonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPolygon((*reinterpret_cast< std::shared_ptr<PolygonObject>(*)>(_a[1]))); break;
        case 1: _t->removePolygon((*reinterpret_cast< std::shared_ptr<PolygonObject>(*)>(_a[1]))); break;
        case 2: _t->removePolygonAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 5: _t->clearData(); break;
        case 6: _t->polygonObjectChanged(); break;
        case 7: { PolygonObject* _r = _t->polygonAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PolygonObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolygonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_PolygonGroup.data,
    qt_meta_data_PolygonGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolygonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolygonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolygonGroup.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int PolygonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
