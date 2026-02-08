/****************************************************************************
** Meta object code from reading C++ file 'dev_q_property.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/dev_q_property.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dev_q_property.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DevQProperty_t {
    QByteArrayData data[59];
    char stringdata0[763];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DevQProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DevQProperty_t qt_meta_stringdata_DevQProperty = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DevQProperty"
QT_MOC_LITERAL(1, 13, 16), // "distSetupChanged"
QT_MOC_LITERAL(2, 30, 17), // "chartSetupChanged"
QT_MOC_LITERAL(3, 48, 14), // "datasetChanged"
QT_MOC_LITERAL(4, 63, 12), // "transChanged"
QT_MOC_LITERAL(5, 76, 15), // "dspSetupChanged"
QT_MOC_LITERAL(6, 92, 12), // "soundChanged"
QT_MOC_LITERAL(7, 105, 11), // "UARTChanged"
QT_MOC_LITERAL(8, 117, 14), // "upgradeChanged"
QT_MOC_LITERAL(9, 132, 20), // "deviceVersionChanged"
QT_MOC_LITERAL(10, 153, 7), // "distMax"
QT_MOC_LITERAL(11, 161, 12), // "distDeadZone"
QT_MOC_LITERAL(12, 174, 14), // "distConfidence"
QT_MOC_LITERAL(13, 189, 14), // "distSetupState"
QT_MOC_LITERAL(14, 204, 12), // "chartSamples"
QT_MOC_LITERAL(15, 217, 15), // "chartResolution"
QT_MOC_LITERAL(16, 233, 11), // "chartOffset"
QT_MOC_LITERAL(17, 245, 15), // "chartSetupState"
QT_MOC_LITERAL(18, 261, 16), // "datasetTimestamp"
QT_MOC_LITERAL(19, 278, 11), // "datasetDist"
QT_MOC_LITERAL(20, 290, 12), // "datasetChart"
QT_MOC_LITERAL(21, 303, 11), // "datasetTemp"
QT_MOC_LITERAL(22, 315, 12), // "datasetEuler"
QT_MOC_LITERAL(23, 328, 12), // "datasetSDDBT"
QT_MOC_LITERAL(24, 341, 15), // "datasetSDDBT_P2"
QT_MOC_LITERAL(25, 357, 9), // "ch1Period"
QT_MOC_LITERAL(26, 367, 9), // "ch2Period"
QT_MOC_LITERAL(27, 377, 12), // "datasetState"
QT_MOC_LITERAL(28, 390, 9), // "transFreq"
QT_MOC_LITERAL(29, 400, 10), // "transPulse"
QT_MOC_LITERAL(30, 411, 10), // "transBoost"
QT_MOC_LITERAL(31, 422, 11), // "transcState"
QT_MOC_LITERAL(32, 434, 12), // "dspHorSmooth"
QT_MOC_LITERAL(33, 447, 8), // "dspState"
QT_MOC_LITERAL(34, 456, 10), // "soundSpeed"
QT_MOC_LITERAL(35, 467, 10), // "soundState"
QT_MOC_LITERAL(36, 478, 10), // "busAddress"
QT_MOC_LITERAL(37, 489, 8), // "baudrate"
QT_MOC_LITERAL(38, 498, 10), // "devAddress"
QT_MOC_LITERAL(39, 509, 13), // "devDefAddress"
QT_MOC_LITERAL(40, 523, 9), // "uartState"
QT_MOC_LITERAL(41, 533, 15), // "upgradeFWStatus"
QT_MOC_LITERAL(42, 549, 7), // "devName"
QT_MOC_LITERAL(43, 557, 7), // "devType"
QT_MOC_LITERAL(44, 565, 5), // "devSN"
QT_MOC_LITERAL(45, 571, 9), // "fwVersion"
QT_MOC_LITERAL(46, 581, 7), // "isSonar"
QT_MOC_LITERAL(47, 589, 10), // "isRecorder"
QT_MOC_LITERAL(48, 600, 9), // "isDoppler"
QT_MOC_LITERAL(49, 610, 12), // "isUSBLBeacon"
QT_MOC_LITERAL(50, 623, 6), // "isUSBL"
QT_MOC_LITERAL(51, 630, 14), // "isChartSupport"
QT_MOC_LITERAL(52, 645, 13), // "isDistSupport"
QT_MOC_LITERAL(53, 659, 12), // "isDSPSupport"
QT_MOC_LITERAL(54, 672, 19), // "isTransducerSupport"
QT_MOC_LITERAL(55, 692, 16), // "isDatasetSupport"
QT_MOC_LITERAL(56, 709, 19), // "isSoundSpeedSupport"
QT_MOC_LITERAL(57, 729, 16), // "isAddressSupport"
QT_MOC_LITERAL(58, 746, 16) // "isUpgradeSupport"

    },
    "DevQProperty\0distSetupChanged\0"
    "chartSetupChanged\0datasetChanged\0"
    "transChanged\0dspSetupChanged\0soundChanged\0"
    "UARTChanged\0upgradeChanged\0"
    "deviceVersionChanged\0distMax\0distDeadZone\0"
    "distConfidence\0distSetupState\0"
    "chartSamples\0chartResolution\0chartOffset\0"
    "chartSetupState\0datasetTimestamp\0"
    "datasetDist\0datasetChart\0datasetTemp\0"
    "datasetEuler\0datasetSDDBT\0datasetSDDBT_P2\0"
    "ch1Period\0ch2Period\0datasetState\0"
    "transFreq\0transPulse\0transBoost\0"
    "transcState\0dspHorSmooth\0dspState\0"
    "soundSpeed\0soundState\0busAddress\0"
    "baudrate\0devAddress\0devDefAddress\0"
    "uartState\0upgradeFWStatus\0devName\0"
    "devType\0devSN\0fwVersion\0isSonar\0"
    "isRecorder\0isDoppler\0isUSBLBeacon\0"
    "isUSBL\0isChartSupport\0isDistSupport\0"
    "isDSPSupport\0isTransducerSupport\0"
    "isDatasetSupport\0isSoundSpeedSupport\0"
    "isAddressSupport\0isUpgradeSupport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DevQProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      49,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495003,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Int, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495103,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::Bool, 0x00495001,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::Int, 0x00495103,
      30, QMetaType::Int, 0x00495103,
      31, QMetaType::Bool, 0x00495001,
      32, QMetaType::Int, 0x00495003,
      33, QMetaType::Bool, 0x00495001,
      34, QMetaType::Int, 0x00495103,
      35, QMetaType::Bool, 0x00495001,
      36, QMetaType::Int, 0x00495103,
      37, QMetaType::Int, 0x00495103,
      38, QMetaType::Int, 0x00495103,
      39, QMetaType::Int, 0x00495103,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Int, 0x00495001,
      42, QMetaType::QString, 0x00495001,
      43, QMetaType::Int, 0x00495001,
      44, QMetaType::Int, 0x00495001,
      45, QMetaType::QString, 0x00495001,
      46, QMetaType::Bool, 0x00495001,
      47, QMetaType::Bool, 0x00495001,
      48, QMetaType::Bool, 0x00495001,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Bool, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, QMetaType::Bool, 0x00495001,
      55, QMetaType::Bool, 0x00495001,
      56, QMetaType::Bool, 0x00495001,
      57, QMetaType::Bool, 0x00495001,
      58, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
    1879048193,
    1879048193,
    1879048193,
    1879048193,
    1879048194,
    1879048194,
    1879048194,
    1879048194,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048195,
    1879048196,
    1879048196,
    1879048196,
    1879048196,
    1879048197,
    1879048197,
    1879048198,
    1879048198,
    1879048199,
    1879048199,
    1879048199,
    1879048199,
    1879048199,
    1879048200,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,
    1879048201,

       0        // eod
};

void DevQProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DevQProperty *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->distMax(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->distDeadZone(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->distConfidence(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getDistSetupState(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->chartSamples(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->chartResolution(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->chartOffset(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getChartSetupState(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->datasetTimestamp(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->datasetDist(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->datasetChart(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->datasetTemp(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->datasetEuler(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->datasetSDDBT(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->datasetSDDBT_P2(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->ch1Period(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->ch2Period(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getDatasetState(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->transFreq(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->transPulse(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->transBoost(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getTranscState(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->dspSmoothFactor(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->getDspSetupState(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->soundSpeed(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getSoundSpeedState(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getBusAddress(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->getBaudrate(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->getDevAddress(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->getDevDefAddress(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getUartState(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->upgradeFWStatus(); break;
        case 32: *reinterpret_cast< QString*>(_v) = _t->devName(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->devType(); break;
        case 34: *reinterpret_cast< int*>(_v) = _t->devSerialNumber(); break;
        case 35: *reinterpret_cast< QString*>(_v) = _t->fwVersion(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->isSonar(); break;
        case 37: *reinterpret_cast< bool*>(_v) = _t->isRecorder(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->isDoppler(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->isUSBLBeacon(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->isUSBL(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->isChartSupport(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->isDistSupport(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->isDSPSupport(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->isTransducerSupport(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->isDatasetSupport(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->isSoundSpeedSupport(); break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->isAddressSupport(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->isUpgradeSupport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DevQProperty *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDistMax(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDistDeadZone(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setConfidence(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setChartSamples(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setChartResolution(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setChartOffset(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setDatasetTimestamp(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setDatasetDist(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setDatasetChart(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setDatasetTemp(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setDatasetEuler(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setDatasetSDDBT(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setDatasetSDDBT_P2(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setCh1Period(*reinterpret_cast< int*>(_v)); break;
        case 16: _t->setCh2Period(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setTransFreq(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setTransPulse(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setTransBoost(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setDspSmoothFactor(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setSoundSpeed(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setBusAddress(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setBaudrate(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setDevAddress(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setDevDefAddress(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DevQProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<DevDriver::staticMetaObject>(),
    qt_meta_stringdata_DevQProperty.data,
    qt_meta_data_DevQProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DevQProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevQProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DevQProperty.stringdata0))
        return static_cast<void*>(this);
    return DevDriver::qt_metacast(_clname);
}

int DevQProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DevDriver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 49;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 49;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_DevQProperty(DevQProperty *t) {
    t->distSetupChanged();
    t->chartSetupChanged();
    t->datasetChanged();
    t->transChanged();
    t->dspSetupChanged();
    t->soundChanged();
    t->UARTChanged();
    t->upgradeChanged();
    t->deviceVersionChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
