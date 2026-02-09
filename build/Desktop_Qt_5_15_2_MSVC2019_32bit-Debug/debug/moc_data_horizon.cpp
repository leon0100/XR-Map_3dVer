/****************************************************************************
** Meta object code from reading C++ file 'data_horizon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/data_horizon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_horizon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataHorizon_t {
    QByteArrayData data[22];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataHorizon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataHorizon_t qt_meta_stringdata_DataHorizon = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DataHorizon"
QT_MOC_LITERAL(1, 12, 10), // "epochAdded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "uint64_t"
QT_MOC_LITERAL(4, 33, 4), // "indx"
QT_MOC_LITERAL(5, 38, 13), // "positionAdded"
QT_MOC_LITERAL(6, 52, 10), // "chartAdded"
QT_MOC_LITERAL(7, 63, 13), // "attitudeAdded"
QT_MOC_LITERAL(8, 77, 16), // "bottomTrackAdded"
QT_MOC_LITERAL(9, 94, 18), // "bottomTrack3DAdded"
QT_MOC_LITERAL(10, 113, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 126, 7), // "epIndxs"
QT_MOC_LITERAL(12, 134, 9), // "vertIndxs"
QT_MOC_LITERAL(13, 144, 8), // "isManual"
QT_MOC_LITERAL(14, 153, 13), // "mosaicCanCalc"
QT_MOC_LITERAL(15, 167, 15), // "sonarPosCanCalc"
QT_MOC_LITERAL(16, 183, 12), // "onAddedEpoch"
QT_MOC_LITERAL(17, 196, 15), // "onAddedPosition"
QT_MOC_LITERAL(18, 212, 12), // "onAddedChart"
QT_MOC_LITERAL(19, 225, 15), // "onAddedAttitude"
QT_MOC_LITERAL(20, 241, 18), // "onAddedBottomTrack"
QT_MOC_LITERAL(21, 260, 20) // "onAddedBottomTrack3D"

    },
    "DataHorizon\0epochAdded\0\0uint64_t\0indx\0"
    "positionAdded\0chartAdded\0attitudeAdded\0"
    "bottomTrackAdded\0bottomTrack3DAdded\0"
    "QVector<int>\0epIndxs\0vertIndxs\0isManual\0"
    "mosaicCanCalc\0sonarPosCanCalc\0"
    "onAddedEpoch\0onAddedPosition\0onAddedChart\0"
    "onAddedAttitude\0onAddedBottomTrack\0"
    "onAddedBottomTrack3D"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataHorizon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
       9,    3,   99,    2, 0x06 /* Public */,
      14,    1,  106,    2, 0x06 /* Public */,
      15,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  112,    2, 0x0a /* Public */,
      17,    1,  115,    2, 0x0a /* Public */,
      18,    1,  118,    2, 0x0a /* Public */,
      19,    1,  121,    2, 0x0a /* Public */,
      20,    1,  124,    2, 0x0a /* Public */,
      21,    3,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Bool,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Bool,   11,   12,   13,

       0        // eod
};

void DataHorizon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataHorizon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->epochAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 1: _t->positionAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 2: _t->chartAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 3: _t->attitudeAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 4: _t->bottomTrackAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 5: _t->bottomTrack3DAdded((*reinterpret_cast< const QVector<int>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->mosaicCanCalc((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 7: _t->sonarPosCanCalc((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 8: _t->onAddedEpoch((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 9: _t->onAddedPosition((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 10: _t->onAddedChart((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 11: _t->onAddedAttitude((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 12: _t->onAddedBottomTrack((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 13: _t->onAddedBottomTrack3D((*reinterpret_cast< const QVector<int>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
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
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::epochAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::positionAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::chartAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::attitudeAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::bottomTrackAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(const QVector<int> & , const QVector<int> & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::bottomTrack3DAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::mosaicCanCalc)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataHorizon::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataHorizon::sonarPosCanCalc)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataHorizon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataHorizon.data,
    qt_meta_data_DataHorizon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataHorizon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataHorizon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataHorizon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataHorizon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DataHorizon::epochAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataHorizon::positionAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataHorizon::chartAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataHorizon::attitudeAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataHorizon::bottomTrackAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataHorizon::bottomTrack3DAdded(const QVector<int> & _t1, const QVector<int> & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataHorizon::mosaicCanCalc(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataHorizon::sonarPosCanCalc(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
