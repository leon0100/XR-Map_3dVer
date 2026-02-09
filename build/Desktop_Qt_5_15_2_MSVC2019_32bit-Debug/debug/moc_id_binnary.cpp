/****************************************************************************
** Meta object code from reading C++ file 'id_binnary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/id_binnary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'id_binnary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IDBin_t {
    QByteArrayData data[18];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBin_t qt_meta_stringdata_IDBin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "IDBin"
QT_MOC_LITERAL(1, 6, 13), // "updateContent"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "Parsers::Type"
QT_MOC_LITERAL(4, 35, 4), // "type"
QT_MOC_LITERAL(5, 40, 16), // "Parsers::Version"
QT_MOC_LITERAL(6, 57, 3), // "ver"
QT_MOC_LITERAL(7, 61, 13), // "Parsers::Resp"
QT_MOC_LITERAL(8, 75, 4), // "resp"
QT_MOC_LITERAL(9, 80, 7), // "uint8_t"
QT_MOC_LITERAL(10, 88, 7), // "address"
QT_MOC_LITERAL(11, 96, 8), // "dataSend"
QT_MOC_LITERAL(12, 105, 4), // "data"
QT_MOC_LITERAL(13, 110, 11), // "binFrameOut"
QT_MOC_LITERAL(14, 122, 21), // "Parsers::ProtoBinOut&"
QT_MOC_LITERAL(15, 144, 9), // "proto_out"
QT_MOC_LITERAL(16, 154, 15), // "notifyDevDriver"
QT_MOC_LITERAL(17, 170, 5) // "state"

    },
    "IDBin\0updateContent\0\0Parsers::Type\0"
    "type\0Parsers::Version\0ver\0Parsers::Resp\0"
    "resp\0uint8_t\0address\0dataSend\0data\0"
    "binFrameOut\0Parsers::ProtoBinOut&\0"
    "proto_out\0notifyDevDriver\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
      11,    1,   43,    2, 0x06 /* Public */,
      13,    1,   46,    2, 0x06 /* Public */,
      16,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void IDBin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IDBin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateContent((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 1: _t->dataSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->binFrameOut((*reinterpret_cast< Parsers::ProtoBinOut(*)>(_a[1]))); break;
        case 3: _t->notifyDevDriver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IDBin::*)(Parsers::Type , Parsers::Version , Parsers::Resp , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IDBin::updateContent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IDBin::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IDBin::dataSend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IDBin::*)(Parsers::ProtoBinOut & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IDBin::binFrameOut)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IDBin::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IDBin::notifyDevDriver)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IDBin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IDBin.data,
    qt_meta_data_IDBin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IDBin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void IDBin::updateContent(Parsers::Type _t1, Parsers::Version _t2, Parsers::Resp _t3, uint8_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IDBin::dataSend(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IDBin::binFrameOut(Parsers::ProtoBinOut & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IDBin::notifyDevDriver(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_IDBinTimestamp_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinTimestamp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinTimestamp_t qt_meta_stringdata_IDBinTimestamp = {
    {
QT_MOC_LITERAL(0, 0, 14) // "IDBinTimestamp"

    },
    "IDBinTimestamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinTimestamp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinTimestamp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinTimestamp::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinTimestamp.data,
    qt_meta_data_IDBinTimestamp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinTimestamp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinTimestamp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinTimestamp.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinTimestamp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDist_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDist_t qt_meta_stringdata_IDBinDist = {
    {
QT_MOC_LITERAL(0, 0, 9) // "IDBinDist"

    },
    "IDBinDist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDist[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDist::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDist.data,
    qt_meta_data_IDBinDist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDist.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinChart_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinChart_t qt_meta_stringdata_IDBinChart = {
    {
QT_MOC_LITERAL(0, 0, 10), // "IDBinChart"
QT_MOC_LITERAL(1, 11, 15), // "rawDataRecieved"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "RawData"
QT_MOC_LITERAL(4, 36, 8) // "raw_data"

    },
    "IDBinChart\0rawDataRecieved\0\0RawData\0"
    "raw_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinChart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void IDBinChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IDBinChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rawDataRecieved((*reinterpret_cast< RawData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IDBinChart::*)(RawData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IDBinChart::rawDataRecieved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IDBinChart::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinChart.data,
    qt_meta_data_IDBinChart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinChart.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void IDBinChart::rawDataRecieved(RawData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_IDBinAttitude_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinAttitude_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinAttitude_t qt_meta_stringdata_IDBinAttitude = {
    {
QT_MOC_LITERAL(0, 0, 13) // "IDBinAttitude"

    },
    "IDBinAttitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinAttitude[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinAttitude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinAttitude::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinAttitude.data,
    qt_meta_data_IDBinAttitude,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinAttitude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinAttitude::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinAttitude.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinAttitude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinTemp_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinTemp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinTemp_t qt_meta_stringdata_IDBinTemp = {
    {
QT_MOC_LITERAL(0, 0, 9) // "IDBinTemp"

    },
    "IDBinTemp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinTemp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinTemp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinTemp::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinTemp.data,
    qt_meta_data_IDBinTemp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinTemp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinTemp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinTemp.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinTemp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDataset_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDataset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDataset_t qt_meta_stringdata_IDBinDataset = {
    {
QT_MOC_LITERAL(0, 0, 12) // "IDBinDataset"

    },
    "IDBinDataset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDataset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDataset::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDataset.data,
    qt_meta_data_IDBinDataset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDataset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDataset.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDistSetup_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDistSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDistSetup_t qt_meta_stringdata_IDBinDistSetup = {
    {
QT_MOC_LITERAL(0, 0, 14) // "IDBinDistSetup"

    },
    "IDBinDistSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDistSetup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDistSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDistSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDistSetup.data,
    qt_meta_data_IDBinDistSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDistSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDistSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDistSetup.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDistSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinChartSetup_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinChartSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinChartSetup_t qt_meta_stringdata_IDBinChartSetup = {
    {
QT_MOC_LITERAL(0, 0, 15) // "IDBinChartSetup"

    },
    "IDBinChartSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinChartSetup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinChartSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinChartSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinChartSetup.data,
    qt_meta_data_IDBinChartSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinChartSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinChartSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinChartSetup.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinChartSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDSPSetup_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDSPSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDSPSetup_t qt_meta_stringdata_IDBinDSPSetup = {
    {
QT_MOC_LITERAL(0, 0, 13) // "IDBinDSPSetup"

    },
    "IDBinDSPSetup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDSPSetup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDSPSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDSPSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDSPSetup.data,
    qt_meta_data_IDBinDSPSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDSPSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDSPSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDSPSetup.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDSPSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinTransc_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinTransc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinTransc_t qt_meta_stringdata_IDBinTransc = {
    {
QT_MOC_LITERAL(0, 0, 11) // "IDBinTransc"

    },
    "IDBinTransc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinTransc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinTransc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinTransc::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinTransc.data,
    qt_meta_data_IDBinTransc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinTransc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinTransc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinTransc.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinTransc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinSoundSpeed_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinSoundSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinSoundSpeed_t qt_meta_stringdata_IDBinSoundSpeed = {
    {
QT_MOC_LITERAL(0, 0, 15) // "IDBinSoundSpeed"

    },
    "IDBinSoundSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinSoundSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinSoundSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinSoundSpeed::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinSoundSpeed.data,
    qt_meta_data_IDBinSoundSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinSoundSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinSoundSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinSoundSpeed.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinSoundSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinUART_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinUART_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinUART_t qt_meta_stringdata_IDBinUART = {
    {
QT_MOC_LITERAL(0, 0, 9) // "IDBinUART"

    },
    "IDBinUART"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinUART[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinUART::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinUART::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinUART.data,
    qt_meta_data_IDBinUART,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinUART::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinUART::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinUART.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinUART::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinVersion_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinVersion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinVersion_t qt_meta_stringdata_IDBinVersion = {
    {
QT_MOC_LITERAL(0, 0, 12) // "IDBinVersion"

    },
    "IDBinVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinVersion[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinVersion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinVersion::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinVersion.data,
    qt_meta_data_IDBinVersion,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinVersion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinVersion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinVersion.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinVersion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinMark_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinMark_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinMark_t qt_meta_stringdata_IDBinMark = {
    {
QT_MOC_LITERAL(0, 0, 9) // "IDBinMark"

    },
    "IDBinMark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinMark[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinMark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinMark::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinMark.data,
    qt_meta_data_IDBinMark,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinMark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinMark::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinMark.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinMark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinFlash_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinFlash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinFlash_t qt_meta_stringdata_IDBinFlash = {
    {
QT_MOC_LITERAL(0, 0, 10) // "IDBinFlash"

    },
    "IDBinFlash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinFlash[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinFlash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinFlash::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinFlash.data,
    qt_meta_data_IDBinFlash,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinFlash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinFlash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinFlash.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinFlash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinBoot_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinBoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinBoot_t qt_meta_stringdata_IDBinBoot = {
    {
QT_MOC_LITERAL(0, 0, 9) // "IDBinBoot"

    },
    "IDBinBoot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinBoot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinBoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinBoot::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinBoot.data,
    qt_meta_data_IDBinBoot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinBoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinBoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinBoot.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinBoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinUpdate_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinUpdate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinUpdate_t qt_meta_stringdata_IDBinUpdate = {
    {
QT_MOC_LITERAL(0, 0, 11), // "IDBinUpdate"
QT_MOC_LITERAL(1, 12, 9), // "putUpdate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14) // "is_auto_offset"

    },
    "IDBinUpdate\0putUpdate\0\0is_auto_offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinUpdate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Bool,

       0        // eod
};

void IDBinUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IDBinUpdate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->putUpdate((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->putUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IDBinUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinUpdate.data,
    qt_meta_data_IDBinUpdate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinUpdate.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_IDBinVoltage_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinVoltage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinVoltage_t qt_meta_stringdata_IDBinVoltage = {
    {
QT_MOC_LITERAL(0, 0, 12) // "IDBinVoltage"

    },
    "IDBinVoltage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinVoltage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinVoltage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinVoltage::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinVoltage.data,
    qt_meta_data_IDBinVoltage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinVoltage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinVoltage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinVoltage.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinVoltage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinNav_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinNav_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinNav_t qt_meta_stringdata_IDBinNav = {
    {
QT_MOC_LITERAL(0, 0, 8) // "IDBinNav"

    },
    "IDBinNav"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinNav[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinNav::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinNav::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinNav.data,
    qt_meta_data_IDBinNav,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinNav::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinNav::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinNav.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinNav::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDVL_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDVL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDVL_t qt_meta_stringdata_IDBinDVL = {
    {
QT_MOC_LITERAL(0, 0, 8) // "IDBinDVL"

    },
    "IDBinDVL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDVL[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDVL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDVL::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDVL.data,
    qt_meta_data_IDBinDVL,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDVL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDVL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDVL.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDVL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinDVLMode_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinDVLMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinDVLMode_t qt_meta_stringdata_IDBinDVLMode = {
    {
QT_MOC_LITERAL(0, 0, 12) // "IDBinDVLMode"

    },
    "IDBinDVLMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinDVLMode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinDVLMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinDVLMode::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinDVLMode.data,
    qt_meta_data_IDBinDVLMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinDVLMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinDVLMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinDVLMode.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinDVLMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinUsblSolution_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinUsblSolution_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinUsblSolution_t qt_meta_stringdata_IDBinUsblSolution = {
    {
QT_MOC_LITERAL(0, 0, 17) // "IDBinUsblSolution"

    },
    "IDBinUsblSolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinUsblSolution[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinUsblSolution::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinUsblSolution::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinUsblSolution.data,
    qt_meta_data_IDBinUsblSolution,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinUsblSolution::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinUsblSolution::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinUsblSolution.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinUsblSolution::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IDBinUsblControl_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDBinUsblControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDBinUsblControl_t qt_meta_stringdata_IDBinUsblControl = {
    {
QT_MOC_LITERAL(0, 0, 16) // "IDBinUsblControl"

    },
    "IDBinUsblControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDBinUsblControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void IDBinUsblControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IDBinUsblControl::staticMetaObject = { {
    QMetaObject::SuperData::link<IDBin::staticMetaObject>(),
    qt_meta_stringdata_IDBinUsblControl.data,
    qt_meta_data_IDBinUsblControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IDBinUsblControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDBinUsblControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IDBinUsblControl.stringdata0))
        return static_cast<void*>(this);
    return IDBin::qt_metacast(_clname);
}

int IDBinUsblControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDBin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
