/****************************************************************************
** Meta object code from reading C++ file 'bottom_track.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/bottom_track.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bottom_track.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BottomTrack_t {
    QByteArrayData data[35];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BottomTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BottomTrack_t qt_meta_stringdata_BottomTrack = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BottomTrack"
QT_MOC_LITERAL(1, 12, 11), // "QML.Element"
QT_MOC_LITERAL(2, 24, 12), // "epochHovered"
QT_MOC_LITERAL(3, 37, 0), // ""
QT_MOC_LITERAL(4, 38, 10), // "epochIndex"
QT_MOC_LITERAL(5, 49, 12), // "epochPressed"
QT_MOC_LITERAL(6, 62, 11), // "epochErased"
QT_MOC_LITERAL(7, 74, 13), // "epochSelected"
QT_MOC_LITERAL(8, 88, 9), // "channelId"
QT_MOC_LITERAL(9, 98, 16), // "epochListChanged"
QT_MOC_LITERAL(10, 115, 13), // "updatedPoints"
QT_MOC_LITERAL(11, 129, 12), // "QVector<int>"
QT_MOC_LITERAL(12, 142, 6), // "epIndx"
QT_MOC_LITERAL(13, 149, 8), // "vertIndx"
QT_MOC_LITERAL(14, 158, 8), // "isManual"
QT_MOC_LITERAL(15, 167, 7), // "setData"
QT_MOC_LITERAL(16, 175, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(17, 194, 4), // "data"
QT_MOC_LITERAL(18, 199, 13), // "primitiveType"
QT_MOC_LITERAL(19, 213, 9), // "clearData"
QT_MOC_LITERAL(20, 223, 15), // "isEpochsChanged"
QT_MOC_LITERAL(21, 239, 6), // "lEpoch"
QT_MOC_LITERAL(22, 246, 6), // "rEpoch"
QT_MOC_LITERAL(23, 253, 6), // "manual"
QT_MOC_LITERAL(24, 260, 9), // "redrawAll"
QT_MOC_LITERAL(25, 270, 20), // "resetVertexSelection"
QT_MOC_LITERAL(26, 291, 11), // "selectEpoch"
QT_MOC_LITERAL(27, 303, 9), // "ChannelId"
QT_MOC_LITERAL(28, 313, 15), // "setVisibleState"
QT_MOC_LITERAL(29, 329, 5), // "state"
QT_MOC_LITERAL(30, 335, 11), // "ActionEvent"
QT_MOC_LITERAL(31, 347, 9), // "Undefined"
QT_MOC_LITERAL(32, 357, 13), // "ClearDistProc"
QT_MOC_LITERAL(33, 371, 11), // "MaxDistProc"
QT_MOC_LITERAL(34, 383, 11) // "MinDistProc"

    },
    "BottomTrack\0QML.Element\0epochHovered\0"
    "\0epochIndex\0epochPressed\0epochErased\0"
    "epochSelected\0channelId\0epochListChanged\0"
    "updatedPoints\0QVector<int>\0epIndx\0"
    "vertIndx\0isManual\0setData\0QVector<QVector3D>\0"
    "data\0primitiveType\0clearData\0"
    "isEpochsChanged\0lEpoch\0rEpoch\0manual\0"
    "redrawAll\0resetVertexSelection\0"
    "selectEpoch\0ChannelId\0setVisibleState\0"
    "state\0ActionEvent\0Undefined\0ClearDistProc\0"
    "MaxDistProc\0MinDistProc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BottomTrack[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       0,    0, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags
       2,    1,   81,    3, 0x06 /* Public */,
       5,    1,   84,    3, 0x06 /* Public */,
       6,    1,   87,    3, 0x06 /* Public */,
       7,    2,   90,    3, 0x06 /* Public */,
       9,    0,   95,    3, 0x06 /* Public */,
      10,    3,   96,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  103,    3, 0x0a /* Public */,
      15,    1,  108,    3, 0x2a /* Public | MethodCloned */,
      19,    0,  111,    3, 0x0a /* Public */,
      20,    4,  112,    3, 0x0a /* Public */,
      25,    0,  121,    3, 0x0a /* Public */,
      26,    2,  122,    3, 0x0a /* Public */,
      28,    1,  127,    3, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11, QMetaType::Bool,   12,   13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   21,   22,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27,    4,    8,
    QMetaType::Void, QMetaType::Bool,   29,

 // enums: name, alias, flags, count, data
      30,   30, 0x2,    4,  135,

 // enum data: key, value
      31, uint(BottomTrack::ActionEvent::Undefined),
      32, uint(BottomTrack::ActionEvent::ClearDistProc),
      33, uint(BottomTrack::ActionEvent::MaxDistProc),
      34, uint(BottomTrack::ActionEvent::MinDistProc),

       0        // eod
};

void BottomTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BottomTrack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->epochHovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->epochPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->epochErased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->epochSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->epochListChanged(); break;
        case 5: _t->updatedPoints((*reinterpret_cast< const QVector<int>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setData((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 8: _t->clearData(); break;
        case 9: _t->isEpochsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->resetVertexSelection(); break;
        case 11: _t->selectEpoch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2]))); break;
        case 12: _t->setVisibleState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 7:
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
            using _t = void (BottomTrack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::epochHovered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BottomTrack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::epochPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BottomTrack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::epochErased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BottomTrack::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::epochSelected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BottomTrack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::epochListChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BottomTrack::*)(const QVector<int> & , const QVector<int> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomTrack::updatedPoints)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BottomTrack::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_BottomTrack.data,
    qt_meta_data_BottomTrack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BottomTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BottomTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BottomTrack.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int BottomTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void BottomTrack::epochHovered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BottomTrack::epochPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BottomTrack::epochErased(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BottomTrack::epochSelected(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BottomTrack::epochListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BottomTrack::updatedPoints(const QVector<int> & _t1, const QVector<int> & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
