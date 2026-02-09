/****************************************************************************
** Meta object code from reading C++ file 'link.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/link/link.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'link.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Link_t {
    QByteArrayData data[29];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Link_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Link_t qt_meta_stringdata_Link = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Link"
QT_MOC_LITERAL(1, 5, 10), // "readyParse"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "Link*"
QT_MOC_LITERAL(4, 23, 4), // "link"
QT_MOC_LITERAL(5, 28, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(6, 52, 4), // "uuid"
QT_MOC_LITERAL(7, 57, 10), // "frameReady"
QT_MOC_LITERAL(8, 68, 20), // "Parsers::FrameParser"
QT_MOC_LITERAL(9, 89, 5), // "frame"
QT_MOC_LITERAL(10, 95, 6), // "opened"
QT_MOC_LITERAL(11, 102, 7), // "linkPtr"
QT_MOC_LITERAL(12, 110, 6), // "closed"
QT_MOC_LITERAL(13, 117, 15), // "baudrateChanged"
QT_MOC_LITERAL(14, 133, 21), // "isReceivesDataChanged"
QT_MOC_LITERAL(15, 155, 16), // "sendDoRequestAll"
QT_MOC_LITERAL(16, 172, 29), // "upgradingFirmwareStateChanged"
QT_MOC_LITERAL(17, 202, 9), // "dataReady"
QT_MOC_LITERAL(18, 212, 4), // "data"
QT_MOC_LITERAL(19, 217, 10), // "writeFrame"
QT_MOC_LITERAL(20, 228, 5), // "write"
QT_MOC_LITERAL(21, 234, 24), // "onStartUpgradingFirmware"
QT_MOC_LITERAL(22, 259, 23), // "onUpgradingFirmwareDone"
QT_MOC_LITERAL(23, 283, 17), // "onCheckedTimerEnd"
QT_MOC_LITERAL(24, 301, 9), // "readyRead"
QT_MOC_LITERAL(25, 311, 12), // "aboutToClose"
QT_MOC_LITERAL(26, 324, 17), // "handleSerialError"
QT_MOC_LITERAL(27, 342, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(28, 371, 5) // "error"

    },
    "Link\0readyParse\0\0Link*\0link\0"
    "connectionStatusChanged\0uuid\0frameReady\0"
    "Parsers::FrameParser\0frame\0opened\0"
    "linkPtr\0closed\0baudrateChanged\0"
    "isReceivesDataChanged\0sendDoRequestAll\0"
    "upgradingFirmwareStateChanged\0dataReady\0"
    "data\0writeFrame\0write\0onStartUpgradingFirmware\0"
    "onUpgradingFirmwareDone\0onCheckedTimerEnd\0"
    "readyRead\0aboutToClose\0handleSerialError\0"
    "QSerialPort::SerialPortError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Link[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       7,    3,  110,    2, 0x06 /* Public */,
      10,    2,  117,    2, 0x06 /* Public */,
      12,    2,  122,    2, 0x06 /* Public */,
      13,    1,  127,    2, 0x06 /* Public */,
      14,    1,  130,    2, 0x06 /* Public */,
      15,    1,  133,    2, 0x06 /* Public */,
      16,    1,  136,    2, 0x06 /* Public */,
      17,    1,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  142,    2, 0x0a /* Public */,
      20,    1,  145,    2, 0x0a /* Public */,
      21,    0,  148,    2, 0x0a /* Public */,
      22,    0,  149,    2, 0x0a /* Public */,
      23,    0,  150,    2, 0x08 /* Private */,
      24,    0,  151,    2, 0x08 /* Private */,
      25,    0,  152,    2, 0x08 /* Private */,
      26,    1,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 3, 0x80000000 | 8,    6,    4,    9,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 3,    6,   11,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QUuid,    6,
    QMetaType::Void, QMetaType::QByteArray,   18,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, QMetaType::QByteArray,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,

       0        // eod
};

void Link::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Link *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyParse((*reinterpret_cast< Link*(*)>(_a[1]))); break;
        case 1: _t->connectionStatusChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 2: _t->frameReady((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< Parsers::FrameParser(*)>(_a[3]))); break;
        case 3: _t->opened((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 4: _t->closed((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 5: _t->baudrateChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 6: _t->isReceivesDataChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 7: _t->sendDoRequestAll((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 8: _t->upgradingFirmwareStateChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 9: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: { bool _r = _t->writeFrame((*reinterpret_cast< Parsers::FrameParser(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->write((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->onStartUpgradingFirmware(); break;
        case 13: _t->onUpgradingFirmwareDone(); break;
        case 14: _t->onCheckedTimerEnd(); break;
        case 15: _t->readyRead(); break;
        case 16: _t->aboutToClose(); break;
        case 17: _t->handleSerialError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Link::*)(Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::readyParse)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::connectionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid , Link * , Parsers::FrameParser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::frameReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid , Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::opened)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid , Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::closed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::baudrateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::isReceivesDataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::sendDoRequestAll)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Link::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::upgradingFirmwareStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Link::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Link::dataReady)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Link::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Link.data,
    qt_meta_data_Link,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Link::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Link::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Link.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Link::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Link::readyParse(Link * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Link::connectionStatusChanged(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Link::frameReady(QUuid _t1, Link * _t2, Parsers::FrameParser _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Link::opened(QUuid _t1, Link * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Link::closed(QUuid _t1, Link * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Link::baudrateChanged(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Link::isReceivesDataChanged(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Link::sendDoRequestAll(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Link::upgradingFirmwareStateChanged(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Link::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
