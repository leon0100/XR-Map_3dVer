/****************************************************************************
** Meta object code from reading C++ file 'device_manager_wrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/device_manager_wrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device_manager_wrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceManagerWrapper_t {
    QByteArrayData data[25];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceManagerWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceManagerWrapper_t qt_meta_stringdata_DeviceManagerWrapper = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DeviceManagerWrapper"
QT_MOC_LITERAL(1, 21, 12), // "sendOpenFile"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "path"
QT_MOC_LITERAL(4, 40, 16), // "sendOpenFile_CSV"
QT_MOC_LITERAL(5, 57, 13), // "sendCloseFile"
QT_MOC_LITERAL(6, 71, 10), // "devChanged"
QT_MOC_LITERAL(7, 82, 13), // "streamChanged"
QT_MOC_LITERAL(8, 96, 10), // "vruChanged"
QT_MOC_LITERAL(9, 107, 18), // "chartLossesChanged"
QT_MOC_LITERAL(10, 126, 11), // "isCreatedId"
QT_MOC_LITERAL(11, 138, 2), // "id"
QT_MOC_LITERAL(12, 141, 22), // "calcAverageChartLosses"
QT_MOC_LITERAL(13, 164, 4), // "devs"
QT_MOC_LITERAL(14, 169, 20), // "QList<DevQProperty*>"
QT_MOC_LITERAL(15, 190, 16), // "protoBinConsoled"
QT_MOC_LITERAL(16, 207, 11), // "streamsList"
QT_MOC_LITERAL(17, 219, 16), // "StreamListModel*"
QT_MOC_LITERAL(18, 236, 10), // "vruVoltage"
QT_MOC_LITERAL(19, 247, 10), // "vruCurrent"
QT_MOC_LITERAL(20, 258, 12), // "vruVelocityH"
QT_MOC_LITERAL(21, 271, 13), // "pilotArmState"
QT_MOC_LITERAL(22, 285, 14), // "pilotModeState"
QT_MOC_LITERAL(23, 300, 18), // "averageChartLosses"
QT_MOC_LITERAL(24, 319, 22) // "isbeaconDirectQueueAsk"

    },
    "DeviceManagerWrapper\0sendOpenFile\0\0"
    "path\0sendOpenFile_CSV\0sendCloseFile\0"
    "devChanged\0streamChanged\0vruChanged\0"
    "chartLossesChanged\0isCreatedId\0id\0"
    "calcAverageChartLosses\0devs\0"
    "QList<DevQProperty*>\0protoBinConsoled\0"
    "streamsList\0StreamListModel*\0vruVoltage\0"
    "vruCurrent\0vruVelocityH\0pilotArmState\0"
    "pilotModeState\0averageChartLosses\0"
    "isbeaconDirectQueueAsk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceManagerWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      10,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    0,   65,    2, 0x06 /* Public */,
       6,    0,   66,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,
       8,    0,   68,    2, 0x06 /* Public */,
       9,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   70,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00495009,
      15, QMetaType::Bool, 0x00095103,
      16, 0x80000000 | 17, 0x00495009,
      18, QMetaType::Float, 0x00495001,
      19, QMetaType::Float, 0x00495001,
      20, QMetaType::Float, 0x00495001,
      21, QMetaType::Int, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      23, QMetaType::Int, 0x00495001,
      24, QMetaType::Bool, 0x00095003,

 // properties: notify_signal_id
       3,
       0,
       4,
       5,
       5,
       5,
       5,
       5,
       6,
       0,

       0        // eod
};

void DeviceManagerWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManagerWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendOpenFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendOpenFile_CSV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendCloseFile(); break;
        case 3: _t->devChanged(); break;
        case 4: _t->streamChanged(); break;
        case 5: _t->vruChanged(); break;
        case 6: _t->chartLossesChanged(); break;
        case 7: { bool _r = _t->isCreatedId((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->calcAverageChartLosses(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManagerWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::sendOpenFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::sendOpenFile_CSV)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::sendCloseFile)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::devChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::streamChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::vruChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeviceManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManagerWrapper::chartLossesChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<DevQProperty*> >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StreamListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceManagerWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<DevQProperty*>*>(_v) = _t->getDevList(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getProtoBinConsoled(); break;
        case 2: *reinterpret_cast< StreamListModel**>(_v) = _t->streamsList(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->vruVoltage(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->vruCurrent(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->vruVelocityH(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->pilotArmState(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->pilotModeState(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getAverageChartLosses(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getUSBLBeaconDirectAsk(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeviceManagerWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setProtoBinConsoled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setUSBLBeaconDirectAsk(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeviceManagerWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceManagerWrapper.data,
    qt_meta_data_DeviceManagerWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceManagerWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceManagerWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceManagerWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceManagerWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeviceManagerWrapper::sendOpenFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManagerWrapper::sendOpenFile_CSV(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceManagerWrapper::sendCloseFile()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DeviceManagerWrapper::devChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DeviceManagerWrapper::streamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DeviceManagerWrapper::vruChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DeviceManagerWrapper::chartLossesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
