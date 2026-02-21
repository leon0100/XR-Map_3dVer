/****************************************************************************
** Meta object code from reading C++ file 'blemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/blemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RealTimeParser_t {
    QByteArrayData data[11];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RealTimeParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RealTimeParser_t qt_meta_stringdata_RealTimeParser = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RealTimeParser"
QT_MOC_LITERAL(1, 15, 11), // "parsedPoint"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "BoatPoint"
QT_MOC_LITERAL(4, 38, 2), // "pt"
QT_MOC_LITERAL(5, 41, 7), // "stopped"
QT_MOC_LITERAL(6, 49, 11), // "enqueueData"
QT_MOC_LITERAL(7, 61, 4), // "data"
QT_MOC_LITERAL(8, 66, 5), // "start"
QT_MOC_LITERAL(9, 72, 4), // "stop"
QT_MOC_LITERAL(10, 77, 12) // "processQueue"

    },
    "RealTimeParser\0parsedPoint\0\0BoatPoint\0"
    "pt\0stopped\0enqueueData\0data\0start\0"
    "stop\0processQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RealTimeParser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,
       9,    0,   52,    2, 0x0a /* Public */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RealTimeParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RealTimeParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parsedPoint((*reinterpret_cast< const BoatPoint(*)>(_a[1]))); break;
        case 1: _t->stopped(); break;
        case 2: _t->enqueueData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        case 5: _t->processQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BoatPoint >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RealTimeParser::*)(const BoatPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeParser::parsedPoint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RealTimeParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeParser::stopped)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RealTimeParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RealTimeParser.data,
    qt_meta_data_RealTimeParser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RealTimeParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RealTimeParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RealTimeParser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RealTimeParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RealTimeParser::parsedPoint(const BoatPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RealTimeParser::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_BLEManager_t {
    QByteArrayData data[66];
    char stringdata0[945];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BLEManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BLEManager_t qt_meta_stringdata_BLEManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BLEManager"
QT_MOC_LITERAL(1, 11, 12), // "scanCanceled"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "devicesChanged"
QT_MOC_LITERAL(4, 40, 16), // "connectedChanged"
QT_MOC_LITERAL(5, 57, 10), // "isCononect"
QT_MOC_LITERAL(6, 68, 12), // "dataReceived"
QT_MOC_LITERAL(7, 81, 4), // "data"
QT_MOC_LITERAL(8, 86, 17), // "scanStatusChanged"
QT_MOC_LITERAL(9, 104, 6), // "status"
QT_MOC_LITERAL(10, 111, 15), // "dataPanelUpdate"
QT_MOC_LITERAL(11, 127, 11), // "parsedPoint"
QT_MOC_LITERAL(12, 139, 9), // "BoatPoint"
QT_MOC_LITERAL(13, 149, 2), // "pt"
QT_MOC_LITERAL(14, 152, 17), // "dataPausedChanged"
QT_MOC_LITERAL(15, 170, 13), // "realDataPause"
QT_MOC_LITERAL(16, 184, 20), // "maxDepthValueChanged"
QT_MOC_LITERAL(17, 205, 20), // "resetCurrentDepthVal"
QT_MOC_LITERAL(18, 226, 18), // "onDeviceDiscovered"
QT_MOC_LITERAL(19, 245, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(20, 266, 10), // "deviceInfo"
QT_MOC_LITERAL(21, 277, 14), // "onScanFinished"
QT_MOC_LITERAL(22, 292, 11), // "onScanError"
QT_MOC_LITERAL(23, 304, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(24, 342, 5), // "error"
QT_MOC_LITERAL(25, 348, 14), // "onScanCanceled"
QT_MOC_LITERAL(26, 363, 19), // "onServiceDiscovered"
QT_MOC_LITERAL(27, 383, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(28, 398, 4), // "uuid"
QT_MOC_LITERAL(29, 403, 17), // "onServiceScanDone"
QT_MOC_LITERAL(30, 421, 19), // "serviceStateChanged"
QT_MOC_LITERAL(31, 441, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(32, 473, 1), // "s"
QT_MOC_LITERAL(33, 475, 31), // "BleServiceCharacteristicChanged"
QT_MOC_LITERAL(34, 507, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(35, 532, 1), // "c"
QT_MOC_LITERAL(36, 534, 5), // "value"
QT_MOC_LITERAL(37, 540, 28), // "BleServiceCharacteristicRead"
QT_MOC_LITERAL(38, 569, 29), // "BleServiceCharacteristicWrite"
QT_MOC_LITERAL(39, 599, 17), // "onDeviceConnected"
QT_MOC_LITERAL(40, 617, 20), // "onDeviceDisconnected"
QT_MOC_LITERAL(41, 638, 17), // "onControllerError"
QT_MOC_LITERAL(42, 656, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(43, 684, 13), // "startStopScan"
QT_MOC_LITERAL(44, 698, 4), // "scan"
QT_MOC_LITERAL(45, 703, 15), // "connectToDevice"
QT_MOC_LITERAL(46, 719, 5), // "index"
QT_MOC_LITERAL(47, 725, 16), // "disconnectDevice"
QT_MOC_LITERAL(48, 742, 8), // "sendData"
QT_MOC_LITERAL(49, 751, 5), // "datas"
QT_MOC_LITERAL(50, 757, 9), // "sendData2"
QT_MOC_LITERAL(51, 767, 13), // "clearRealData"
QT_MOC_LITERAL(52, 781, 14), // "getDeviceNames"
QT_MOC_LITERAL(53, 796, 16), // "setMaxDepthValue"
QT_MOC_LITERAL(54, 813, 5), // "depth"
QT_MOC_LITERAL(55, 819, 22), // "resetCurrentDepthValue"
QT_MOC_LITERAL(56, 842, 7), // "devices"
QT_MOC_LITERAL(57, 850, 9), // "connected"
QT_MOC_LITERAL(58, 860, 10), // "scanStatus"
QT_MOC_LITERAL(59, 871, 8), // "latitude"
QT_MOC_LITERAL(60, 880, 9), // "longitude"
QT_MOC_LITERAL(61, 890, 5), // "angle"
QT_MOC_LITERAL(62, 896, 5), // "speed"
QT_MOC_LITERAL(63, 902, 10), // "dataPaused"
QT_MOC_LITERAL(64, 913, 13), // "maxDepthValue"
QT_MOC_LITERAL(65, 927, 17) // "currentDepthValue"

    },
    "BLEManager\0scanCanceled\0\0devicesChanged\0"
    "connectedChanged\0isCononect\0dataReceived\0"
    "data\0scanStatusChanged\0status\0"
    "dataPanelUpdate\0parsedPoint\0BoatPoint\0"
    "pt\0dataPausedChanged\0realDataPause\0"
    "maxDepthValueChanged\0resetCurrentDepthVal\0"
    "onDeviceDiscovered\0QBluetoothDeviceInfo\0"
    "deviceInfo\0onScanFinished\0onScanError\0"
    "QBluetoothDeviceDiscoveryAgent::Error\0"
    "error\0onScanCanceled\0onServiceDiscovered\0"
    "QBluetoothUuid\0uuid\0onServiceScanDone\0"
    "serviceStateChanged\0QLowEnergyService::ServiceState\0"
    "s\0BleServiceCharacteristicChanged\0"
    "QLowEnergyCharacteristic\0c\0value\0"
    "BleServiceCharacteristicRead\0"
    "BleServiceCharacteristicWrite\0"
    "onDeviceConnected\0onDeviceDisconnected\0"
    "onControllerError\0QLowEnergyController::Error\0"
    "startStopScan\0scan\0connectToDevice\0"
    "index\0disconnectDevice\0sendData\0datas\0"
    "sendData2\0clearRealData\0getDeviceNames\0"
    "setMaxDepthValue\0depth\0resetCurrentDepthValue\0"
    "devices\0connected\0scanStatus\0latitude\0"
    "longitude\0angle\0speed\0dataPaused\0"
    "maxDepthValue\0currentDepthValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BLEManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      11,  250, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    1,  176,    2, 0x06 /* Public */,
       6,    1,  179,    2, 0x06 /* Public */,
       8,    1,  182,    2, 0x06 /* Public */,
      10,    0,  185,    2, 0x06 /* Public */,
      11,    1,  186,    2, 0x06 /* Public */,
      14,    1,  189,    2, 0x06 /* Public */,
      16,    0,  192,    2, 0x06 /* Public */,
      17,    0,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  194,    2, 0x08 /* Private */,
      21,    0,  197,    2, 0x08 /* Private */,
      22,    1,  198,    2, 0x08 /* Private */,
      25,    0,  201,    2, 0x08 /* Private */,
      26,    1,  202,    2, 0x08 /* Private */,
      29,    0,  205,    2, 0x08 /* Private */,
      30,    1,  206,    2, 0x08 /* Private */,
      33,    2,  209,    2, 0x08 /* Private */,
      37,    2,  214,    2, 0x08 /* Private */,
      38,    2,  219,    2, 0x08 /* Private */,
      39,    0,  224,    2, 0x08 /* Private */,
      40,    0,  225,    2, 0x08 /* Private */,
      41,    1,  226,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      43,    1,  229,    2, 0x02 /* Public */,
      45,    1,  232,    2, 0x02 /* Public */,
      47,    0,  235,    2, 0x02 /* Public */,
      48,    1,  236,    2, 0x02 /* Public */,
      50,    1,  239,    2, 0x02 /* Public */,
      51,    0,  242,    2, 0x02 /* Public */,
      52,    0,  243,    2, 0x02 /* Public */,
      53,    1,  244,    2, 0x02 /* Public */,
      55,    1,  247,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QByteArray,   35,   36,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QByteArray,   35,   36,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QByteArray,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,   24,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Double,   54,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      56, QMetaType::QStringList, 0x00495001,
      57, QMetaType::Bool, 0x00495001,
      58, QMetaType::QString, 0x00495001,
      59, QMetaType::QString, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      61, QMetaType::QString, 0x00495001,
      62, QMetaType::QString, 0x00495001,
      54, QMetaType::QString, 0x00495001,
      63, QMetaType::Bool, 0x00495103,
      64, QMetaType::Double, 0x00495103,
      65, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       1,
       2,
       4,
       5,
       5,
       5,
       5,
       5,
       7,
       8,
       9,

       0        // eod
};

void BLEManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BLEManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scanCanceled(); break;
        case 1: _t->devicesChanged(); break;
        case 2: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->scanStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->dataPanelUpdate(); break;
        case 6: _t->parsedPoint((*reinterpret_cast< const BoatPoint(*)>(_a[1]))); break;
        case 7: _t->dataPausedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->maxDepthValueChanged(); break;
        case 9: _t->resetCurrentDepthVal(); break;
        case 10: _t->onDeviceDiscovered((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 11: _t->onScanFinished(); break;
        case 12: _t->onScanError((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 13: _t->onScanCanceled(); break;
        case 14: _t->onServiceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 15: _t->onServiceScanDone(); break;
        case 16: _t->serviceStateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 17: _t->BleServiceCharacteristicChanged((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 18: _t->BleServiceCharacteristicRead((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 19: _t->BleServiceCharacteristicWrite((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 20: _t->onDeviceConnected(); break;
        case 21: _t->onDeviceDisconnected(); break;
        case 22: _t->onControllerError((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 23: _t->startStopScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->connectToDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->disconnectDevice(); break;
        case 26: _t->sendData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->sendData2((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 28: _t->clearRealData(); break;
        case 29: { QStringList _r = _t->getDeviceNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setMaxDepthValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->resetCurrentDepthValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BoatPoint >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyCharacteristic >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BLEManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::scanCanceled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::devicesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::connectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::dataReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::scanStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::dataPanelUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)(const BoatPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::parsedPoint)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::dataPausedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::maxDepthValueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BLEManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BLEManager::resetCurrentDepthVal)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BLEManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->devices(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->connected(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scanStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->latitude(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->longitude(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->angle(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->speed(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->depth(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->dataPaused(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->maxDepthValue(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->currentDepthValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BLEManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setDataPaused(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setMaxDepthValue(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->resetCurrentDepthValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BLEManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BLEManager.data,
    qt_meta_data_BLEManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BLEManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BLEManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BLEManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BLEManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BLEManager::scanCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BLEManager::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BLEManager::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BLEManager::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BLEManager::scanStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BLEManager::dataPanelUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BLEManager::parsedPoint(const BoatPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BLEManager::dataPausedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BLEManager::maxDepthValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BLEManager::resetCurrentDepthVal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
