/****************************************************************************
** Meta object code from reading C++ file 'scene_object.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/core/scene_object.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene_object.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SceneObject_t {
    QByteArrayData data[45];
    char stringdata0[501];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneObject_t qt_meta_stringdata_SceneObject = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SceneObject"
QT_MOC_LITERAL(1, 12, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "isVisible"
QT_MOC_LITERAL(4, 41, 11), // "dataChanged"
QT_MOC_LITERAL(5, 53, 11), // "nameChanged"
QT_MOC_LITERAL(6, 65, 4), // "name"
QT_MOC_LITERAL(7, 70, 13), // "boundsChanged"
QT_MOC_LITERAL(8, 84, 13), // "filterChanged"
QT_MOC_LITERAL(9, 98, 25), // "AbstractEntityDataFilter*"
QT_MOC_LITERAL(10, 124, 6), // "filter"
QT_MOC_LITERAL(11, 131, 7), // "changed"
QT_MOC_LITERAL(12, 139, 7), // "setName"
QT_MOC_LITERAL(13, 147, 7), // "setData"
QT_MOC_LITERAL(14, 155, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(15, 174, 4), // "data"
QT_MOC_LITERAL(16, 179, 13), // "primitiveType"
QT_MOC_LITERAL(17, 193, 10), // "appendData"
QT_MOC_LITERAL(18, 204, 16), // "setPrimitiveType"
QT_MOC_LITERAL(19, 221, 9), // "clearData"
QT_MOC_LITERAL(20, 231, 10), // "setVisible"
QT_MOC_LITERAL(21, 242, 8), // "setColor"
QT_MOC_LITERAL(22, 251, 5), // "color"
QT_MOC_LITERAL(23, 257, 8), // "setWidth"
QT_MOC_LITERAL(24, 266, 5), // "width"
QT_MOC_LITERAL(25, 272, 9), // "setFilter"
QT_MOC_LITERAL(26, 282, 41), // "std::shared_ptr<AbstractEntit..."
QT_MOC_LITERAL(27, 324, 12), // "removeVertex"
QT_MOC_LITERAL(28, 337, 5), // "index"
QT_MOC_LITERAL(29, 343, 4), // "type"
QT_MOC_LITERAL(30, 348, 15), // "SceneObjectType"
QT_MOC_LITERAL(31, 364, 7), // "visible"
QT_MOC_LITERAL(32, 372, 7), // "Unknown"
QT_MOC_LITERAL(33, 380, 9), // "BoatTrack"
QT_MOC_LITERAL(34, 390, 11), // "BottomTrack"
QT_MOC_LITERAL(35, 402, 5), // "Point"
QT_MOC_LITERAL(36, 408, 7), // "Polygon"
QT_MOC_LITERAL(37, 416, 10), // "PointGroup"
QT_MOC_LITERAL(38, 427, 12), // "PolygonGroup"
QT_MOC_LITERAL(39, 440, 8), // "UsblView"
QT_MOC_LITERAL(40, 449, 11), // "SurfaceView"
QT_MOC_LITERAL(41, 461, 9), // "ImageView"
QT_MOC_LITERAL(42, 471, 7), // "MapView"
QT_MOC_LITERAL(43, 479, 8), // "Contacts"
QT_MOC_LITERAL(44, 488, 12) // "IsobathsView"

    },
    "SceneObject\0visibilityChanged\0\0isVisible\0"
    "dataChanged\0nameChanged\0name\0boundsChanged\0"
    "filterChanged\0AbstractEntityDataFilter*\0"
    "filter\0changed\0setName\0setData\0"
    "QVector<QVector3D>\0data\0primitiveType\0"
    "appendData\0setPrimitiveType\0clearData\0"
    "setVisible\0setColor\0color\0setWidth\0"
    "width\0setFilter\0"
    "std::shared_ptr<AbstractEntityDataFilter>\0"
    "removeVertex\0index\0type\0SceneObjectType\0"
    "visible\0Unknown\0BoatTrack\0BottomTrack\0"
    "Point\0Polygon\0PointGroup\0PolygonGroup\0"
    "UsblView\0SurfaceView\0ImageView\0MapView\0"
    "Contacts\0IsobathsView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       6,  152, // properties
       1,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    0,  107,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       7,    0,  111,    2, 0x06 /* Public */,
       8,    1,  112,    2, 0x06 /* Public */,
      11,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  116,    2, 0x0a /* Public */,
      13,    2,  119,    2, 0x0a /* Public */,
      13,    1,  124,    2, 0x2a /* Public | MethodCloned */,
      17,    1,  127,    2, 0x0a /* Public */,
      17,    1,  130,    2, 0x0a /* Public */,
      18,    1,  133,    2, 0x0a /* Public */,
      19,    0,  136,    2, 0x0a /* Public */,
      20,    1,  137,    2, 0x0a /* Public */,
      21,    1,  140,    2, 0x0a /* Public */,
      23,    1,  143,    2, 0x0a /* Public */,
      25,    1,  146,    2, 0x0a /* Public */,
      27,    1,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QVector3D,   15,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QColor,   22,
    QMetaType::Void, QMetaType::QReal,   24,
    QMetaType::Void, 0x80000000 | 26,   10,
    QMetaType::Void, QMetaType::Int,   28,

 // properties: name, type, flags
      10, 0x80000000 | 9, 0x00095409,
       6, QMetaType::QString, 0x00095103,
      29, 0x80000000 | 30, 0x00095409,
      31, QMetaType::Bool, 0x00095103,
      22, QMetaType::QColor, 0x00095401,
      24, QMetaType::QReal, 0x00095401,

 // enums: name, alias, flags, count, data
      30,   30, 0x2,   13,  175,

 // enum data: key, value
      32, uint(SceneObject::SceneObjectType::Unknown),
      33, uint(SceneObject::SceneObjectType::BoatTrack),
      34, uint(SceneObject::SceneObjectType::BottomTrack),
      35, uint(SceneObject::SceneObjectType::Point),
      36, uint(SceneObject::SceneObjectType::Polygon),
      37, uint(SceneObject::SceneObjectType::PointGroup),
      38, uint(SceneObject::SceneObjectType::PolygonGroup),
      39, uint(SceneObject::SceneObjectType::UsblView),
      40, uint(SceneObject::SceneObjectType::SurfaceView),
      41, uint(SceneObject::SceneObjectType::ImageView),
      42, uint(SceneObject::SceneObjectType::MapView),
      43, uint(SceneObject::SceneObjectType::Contacts),
      44, uint(SceneObject::SceneObjectType::IsobathsView),

       0        // eod
};

void SceneObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SceneObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->boundsChanged(); break;
        case 4: _t->filterChanged((*reinterpret_cast< AbstractEntityDataFilter*(*)>(_a[1]))); break;
        case 5: _t->changed(); break;
        case 6: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 9: _t->appendData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 10: _t->appendData((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 11: _t->setPrimitiveType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->clearData(); break;
        case 13: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->setWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 16: _t->setFilter((*reinterpret_cast< std::shared_ptr<AbstractEntityDataFilter>(*)>(_a[1]))); break;
        case 17: _t->removeVertex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractEntityDataFilter* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SceneObject::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SceneObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SceneObject::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SceneObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::boundsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SceneObject::*)(AbstractEntityDataFilter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::filterChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SceneObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SceneObject::changed)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractEntityDataFilter* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SceneObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AbstractEntityDataFilter**>(_v) = _t->filter(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< SceneObjectType*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SceneObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SceneObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SceneObject.data,
    qt_meta_data_SceneObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SceneObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneObject.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<SceneObject>"))
        return static_cast< std::enable_shared_from_this<SceneObject>*>(this);
    return QObject::qt_metacast(_clname);
}

int SceneObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SceneObject::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SceneObject::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SceneObject::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SceneObject::boundsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SceneObject::filterChanged(AbstractEntityDataFilter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SceneObject::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
