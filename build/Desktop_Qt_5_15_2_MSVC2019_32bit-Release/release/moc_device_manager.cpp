/****************************************************************************
** Meta object code from reading C++ file 'device_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/device_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceManager_t {
    QByteArrayData data[142];
    char stringdata0[1795];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceManager_t qt_meta_stringdata_DeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DeviceManager"
QT_MOC_LITERAL(1, 14, 22), // "sendFrameInputToLogger"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "uuid"
QT_MOC_LITERAL(4, 43, 5), // "Link*"
QT_MOC_LITERAL(5, 49, 4), // "link"
QT_MOC_LITERAL(6, 54, 20), // "Parsers::FrameParser"
QT_MOC_LITERAL(7, 75, 5), // "frame"
QT_MOC_LITERAL(8, 81, 14), // "sendChartSetup"
QT_MOC_LITERAL(9, 96, 9), // "ChannelId"
QT_MOC_LITERAL(10, 106, 9), // "channelId"
QT_MOC_LITERAL(11, 116, 8), // "uint16_t"
QT_MOC_LITERAL(12, 125, 5), // "resol"
QT_MOC_LITERAL(13, 131, 5), // "count"
QT_MOC_LITERAL(14, 137, 6), // "offset"
QT_MOC_LITERAL(15, 144, 15), // "sendTranscSetup"
QT_MOC_LITERAL(16, 160, 4), // "freq"
QT_MOC_LITERAL(17, 165, 7), // "uint8_t"
QT_MOC_LITERAL(18, 173, 5), // "pulse"
QT_MOC_LITERAL(19, 179, 5), // "boost"
QT_MOC_LITERAL(20, 185, 15), // "sendSoundSpeeed"
QT_MOC_LITERAL(21, 201, 8), // "uint32_t"
QT_MOC_LITERAL(22, 210, 10), // "soundSpeed"
QT_MOC_LITERAL(23, 221, 8), // "dataSend"
QT_MOC_LITERAL(24, 230, 4), // "data"
QT_MOC_LITERAL(25, 235, 13), // "chartComplete"
QT_MOC_LITERAL(26, 249, 15), // "ChartParameters"
QT_MOC_LITERAL(27, 265, 11), // "chartParams"
QT_MOC_LITERAL(28, 277, 26), // "QVector<QVector<uint8_t> >"
QT_MOC_LITERAL(29, 304, 10), // "resolution"
QT_MOC_LITERAL(30, 315, 15), // "rawDataRecieved"
QT_MOC_LITERAL(31, 331, 7), // "RawData"
QT_MOC_LITERAL(32, 339, 7), // "rawData"
QT_MOC_LITERAL(33, 347, 12), // "distComplete"
QT_MOC_LITERAL(34, 360, 4), // "dist"
QT_MOC_LITERAL(35, 365, 20), // "usblSolutionComplete"
QT_MOC_LITERAL(36, 386, 31), // "IDBinUsblSolution::UsblSolution"
QT_MOC_LITERAL(37, 418, 18), // "dopplerBeamComlete"
QT_MOC_LITERAL(38, 437, 23), // "IDBinDVL::BeamSolution*"
QT_MOC_LITERAL(39, 461, 5), // "beams"
QT_MOC_LITERAL(40, 467, 3), // "cnt"
QT_MOC_LITERAL(41, 471, 19), // "dvlSolutionComplete"
QT_MOC_LITERAL(42, 491, 21), // "IDBinDVL::DVLSolution"
QT_MOC_LITERAL(43, 513, 11), // "dvlSolution"
QT_MOC_LITERAL(44, 525, 17), // "chartSetupChanged"
QT_MOC_LITERAL(45, 543, 16), // "distSetupChanged"
QT_MOC_LITERAL(46, 560, 14), // "datasetChanged"
QT_MOC_LITERAL(47, 575, 12), // "transChanged"
QT_MOC_LITERAL(48, 588, 12), // "soundChanged"
QT_MOC_LITERAL(49, 601, 11), // "UARTChanged"
QT_MOC_LITERAL(50, 613, 22), // "upgradeProgressChanged"
QT_MOC_LITERAL(51, 636, 14), // "progressStatus"
QT_MOC_LITERAL(52, 651, 20), // "deviceVersionChanged"
QT_MOC_LITERAL(53, 672, 10), // "devChanged"
QT_MOC_LITERAL(54, 683, 13), // "streamChanged"
QT_MOC_LITERAL(55, 697, 10), // "vruChanged"
QT_MOC_LITERAL(56, 708, 15), // "writeProxyFrame"
QT_MOC_LITERAL(57, 724, 17), // "writeMavlinkFrame"
QT_MOC_LITERAL(58, 742, 13), // "eventComplete"
QT_MOC_LITERAL(59, 756, 9), // "timestamp"
QT_MOC_LITERAL(60, 766, 2), // "id"
QT_MOC_LITERAL(61, 769, 5), // "unixt"
QT_MOC_LITERAL(62, 775, 19), // "rangefinderComplete"
QT_MOC_LITERAL(63, 795, 8), // "distance"
QT_MOC_LITERAL(64, 804, 16), // "positionComplete"
QT_MOC_LITERAL(65, 821, 3), // "lat"
QT_MOC_LITERAL(66, 825, 3), // "lon"
QT_MOC_LITERAL(67, 829, 4), // "date"
QT_MOC_LITERAL(68, 834, 4), // "time"
QT_MOC_LITERAL(69, 839, 20), // "positionComplete_CSV"
QT_MOC_LITERAL(70, 860, 5), // "depth"
QT_MOC_LITERAL(71, 866, 19), // "positionCompleteRTK"
QT_MOC_LITERAL(72, 886, 8), // "Position"
QT_MOC_LITERAL(73, 895, 8), // "position"
QT_MOC_LITERAL(74, 904, 13), // "depthComplete"
QT_MOC_LITERAL(75, 918, 20), // "gnssVelocityComplete"
QT_MOC_LITERAL(76, 939, 6), // "hSpeed"
QT_MOC_LITERAL(77, 946, 6), // "course"
QT_MOC_LITERAL(78, 953, 16), // "attitudeComplete"
QT_MOC_LITERAL(79, 970, 3), // "yaw"
QT_MOC_LITERAL(80, 974, 5), // "pitch"
QT_MOC_LITERAL(81, 980, 4), // "roll"
QT_MOC_LITERAL(82, 985, 12), // "tempComplete"
QT_MOC_LITERAL(83, 998, 3), // "val"
QT_MOC_LITERAL(84, 1002, 15), // "encoderComplete"
QT_MOC_LITERAL(85, 1018, 2), // "e1"
QT_MOC_LITERAL(86, 1021, 2), // "e2"
QT_MOC_LITERAL(87, 1024, 2), // "e3"
QT_MOC_LITERAL(88, 1027, 16), // "fileStopsOpening"
QT_MOC_LITERAL(89, 1044, 20), // "fileStopsOpening_CSV"
QT_MOC_LITERAL(90, 1065, 15), // "QVector<float>&"
QT_MOC_LITERAL(91, 1081, 4), // "minZ"
QT_MOC_LITERAL(92, 1086, 4), // "maxZ"
QT_MOC_LITERAL(93, 1091, 18), // "chartLossesChanged"
QT_MOC_LITERAL(94, 1110, 14), // "sendProtoFrame"
QT_MOC_LITERAL(95, 1125, 20), // "Parsers::ProtoBinOut"
QT_MOC_LITERAL(96, 1146, 8), // "protoOut"
QT_MOC_LITERAL(97, 1155, 10), // "fileOpened"
QT_MOC_LITERAL(98, 1166, 11), // "isCreatedId"
QT_MOC_LITERAL(99, 1178, 11), // "streamsList"
QT_MOC_LITERAL(100, 1190, 16), // "StreamListModel*"
QT_MOC_LITERAL(101, 1207, 14), // "initStreamList"
QT_MOC_LITERAL(102, 1222, 10), // "frameInput"
QT_MOC_LITERAL(103, 1233, 8), // "openFile"
QT_MOC_LITERAL(104, 1242, 8), // "filePath"
QT_MOC_LITERAL(105, 1251, 12), // "openFile_CSV"
QT_MOC_LITERAL(106, 1264, 9), // "closeFile"
QT_MOC_LITERAL(107, 1274, 12), // "onLinkOpened"
QT_MOC_LITERAL(108, 1287, 12), // "onLinkClosed"
QT_MOC_LITERAL(109, 1300, 13), // "onLinkDeleted"
QT_MOC_LITERAL(110, 1314, 11), // "binFrameOut"
QT_MOC_LITERAL(111, 1326, 19), // "setProtoBinConsoled"
QT_MOC_LITERAL(112, 1346, 10), // "isConsoled"
QT_MOC_LITERAL(113, 1357, 14), // "upgradeLastDev"
QT_MOC_LITERAL(114, 1372, 23), // "beaconActivationReceive"
QT_MOC_LITERAL(115, 1396, 20), // "beaconDirectQueueAsk"
QT_MOC_LITERAL(116, 1417, 22), // "isbeaconDirectQueueAsk"
QT_MOC_LITERAL(117, 1440, 22), // "setUSBLBeaconDirectAsk"
QT_MOC_LITERAL(118, 1463, 6), // "is_ask"
QT_MOC_LITERAL(119, 1470, 19), // "onLoggingKlfStarted"
QT_MOC_LITERAL(120, 1490, 7), // "started"
QT_MOC_LITERAL(121, 1498, 16), // "onSendRequestAll"
QT_MOC_LITERAL(122, 1515, 24), // "onStartUpgradingFirmware"
QT_MOC_LITERAL(123, 1540, 8), // "linkUuid"
QT_MOC_LITERAL(124, 1549, 7), // "address"
QT_MOC_LITERAL(125, 1557, 8), // "firmware"
QT_MOC_LITERAL(126, 1566, 23), // "onUpgradingFirmwareDone"
QT_MOC_LITERAL(127, 1590, 20), // "createLocationReader"
QT_MOC_LITERAL(128, 1611, 21), // "destroyLocationReader"
QT_MOC_LITERAL(129, 1633, 8), // "shutdown"
QT_MOC_LITERAL(130, 1642, 17), // "onPositionUpdated"
QT_MOC_LITERAL(131, 1660, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(132, 1677, 4), // "info"
QT_MOC_LITERAL(133, 1682, 9), // "setUseGPS"
QT_MOC_LITERAL(134, 1692, 5), // "state"
QT_MOC_LITERAL(135, 1698, 14), // "readyReadProxy"
QT_MOC_LITERAL(136, 1713, 17), // "readyReadProxyNav"
QT_MOC_LITERAL(137, 1731, 10), // "vruVoltage"
QT_MOC_LITERAL(138, 1742, 10), // "vruCurrent"
QT_MOC_LITERAL(139, 1753, 12), // "vruVelocityH"
QT_MOC_LITERAL(140, 1766, 13), // "pilotArmState"
QT_MOC_LITERAL(141, 1780, 14) // "pilotModeState"

    },
    "DeviceManager\0sendFrameInputToLogger\0"
    "\0uuid\0Link*\0link\0Parsers::FrameParser\0"
    "frame\0sendChartSetup\0ChannelId\0channelId\0"
    "uint16_t\0resol\0count\0offset\0sendTranscSetup\0"
    "freq\0uint8_t\0pulse\0boost\0sendSoundSpeeed\0"
    "uint32_t\0soundSpeed\0dataSend\0data\0"
    "chartComplete\0ChartParameters\0chartParams\0"
    "QVector<QVector<uint8_t> >\0resolution\0"
    "rawDataRecieved\0RawData\0rawData\0"
    "distComplete\0dist\0usblSolutionComplete\0"
    "IDBinUsblSolution::UsblSolution\0"
    "dopplerBeamComlete\0IDBinDVL::BeamSolution*\0"
    "beams\0cnt\0dvlSolutionComplete\0"
    "IDBinDVL::DVLSolution\0dvlSolution\0"
    "chartSetupChanged\0distSetupChanged\0"
    "datasetChanged\0transChanged\0soundChanged\0"
    "UARTChanged\0upgradeProgressChanged\0"
    "progressStatus\0deviceVersionChanged\0"
    "devChanged\0streamChanged\0vruChanged\0"
    "writeProxyFrame\0writeMavlinkFrame\0"
    "eventComplete\0timestamp\0id\0unixt\0"
    "rangefinderComplete\0distance\0"
    "positionComplete\0lat\0lon\0date\0time\0"
    "positionComplete_CSV\0depth\0"
    "positionCompleteRTK\0Position\0position\0"
    "depthComplete\0gnssVelocityComplete\0"
    "hSpeed\0course\0attitudeComplete\0yaw\0"
    "pitch\0roll\0tempComplete\0val\0encoderComplete\0"
    "e1\0e2\0e3\0fileStopsOpening\0"
    "fileStopsOpening_CSV\0QVector<float>&\0"
    "minZ\0maxZ\0chartLossesChanged\0"
    "sendProtoFrame\0Parsers::ProtoBinOut\0"
    "protoOut\0fileOpened\0isCreatedId\0"
    "streamsList\0StreamListModel*\0"
    "initStreamList\0frameInput\0openFile\0"
    "filePath\0openFile_CSV\0closeFile\0"
    "onLinkOpened\0onLinkClosed\0onLinkDeleted\0"
    "binFrameOut\0setProtoBinConsoled\0"
    "isConsoled\0upgradeLastDev\0"
    "beaconActivationReceive\0beaconDirectQueueAsk\0"
    "isbeaconDirectQueueAsk\0setUSBLBeaconDirectAsk\0"
    "is_ask\0onLoggingKlfStarted\0started\0"
    "onSendRequestAll\0onStartUpgradingFirmware\0"
    "linkUuid\0address\0firmware\0"
    "onUpgradingFirmwareDone\0createLocationReader\0"
    "destroyLocationReader\0shutdown\0"
    "onPositionUpdated\0QGeoPositionInfo\0"
    "info\0setUseGPS\0state\0readyReadProxy\0"
    "readyReadProxyNav\0vruVoltage\0vruCurrent\0"
    "vruVelocityH\0pilotArmState\0pilotModeState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      39,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  374,    2, 0x06 /* Public */,
       8,    4,  381,    2, 0x06 /* Public */,
      15,    4,  390,    2, 0x06 /* Public */,
      20,    2,  399,    2, 0x06 /* Public */,
      23,    1,  404,    2, 0x06 /* Public */,
      25,    5,  407,    2, 0x06 /* Public */,
      30,    2,  418,    2, 0x06 /* Public */,
      33,    2,  423,    2, 0x06 /* Public */,
      35,    1,  428,    2, 0x06 /* Public */,
      37,    2,  431,    2, 0x06 /* Public */,
      41,    1,  436,    2, 0x06 /* Public */,
      44,    0,  439,    2, 0x06 /* Public */,
      45,    0,  440,    2, 0x06 /* Public */,
      46,    0,  441,    2, 0x06 /* Public */,
      47,    0,  442,    2, 0x06 /* Public */,
      48,    0,  443,    2, 0x06 /* Public */,
      49,    0,  444,    2, 0x06 /* Public */,
      50,    1,  445,    2, 0x06 /* Public */,
      52,    0,  448,    2, 0x06 /* Public */,
      53,    0,  449,    2, 0x06 /* Public */,
      54,    0,  450,    2, 0x06 /* Public */,
      55,    0,  451,    2, 0x06 /* Public */,
      56,    1,  452,    2, 0x06 /* Public */,
      57,    1,  455,    2, 0x06 /* Public */,
      58,    3,  458,    2, 0x06 /* Public */,
      62,    2,  465,    2, 0x06 /* Public */,
      64,    4,  470,    2, 0x06 /* Public */,
      69,    3,  479,    2, 0x06 /* Public */,
      71,    1,  486,    2, 0x06 /* Public */,
      74,    1,  489,    2, 0x06 /* Public */,
      75,    2,  492,    2, 0x06 /* Public */,
      78,    3,  497,    2, 0x06 /* Public */,
      82,    1,  504,    2, 0x06 /* Public */,
      84,    3,  507,    2, 0x06 /* Public */,
      88,    0,  514,    2, 0x06 /* Public */,
      89,    3,  515,    2, 0x06 /* Public */,
      93,    0,  522,    2, 0x06 /* Public */,
      94,    1,  523,    2, 0x06 /* Public */,
      97,    0,  526,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      98,    1,  527,    2, 0x0a /* Public */,
      99,    0,  530,    2, 0x0a /* Public */,
     101,    0,  531,    2, 0x0a /* Public */,
     102,    3,  532,    2, 0x0a /* Public */,
     103,    1,  539,    2, 0x0a /* Public */,
     105,    1,  542,    2, 0x0a /* Public */,
     106,    0,  545,    2, 0x0a /* Public */,
     107,    2,  546,    2, 0x0a /* Public */,
     108,    2,  551,    2, 0x0a /* Public */,
     109,    2,  556,    2, 0x0a /* Public */,
     110,    1,  561,    2, 0x0a /* Public */,
     111,    1,  564,    2, 0x0a /* Public */,
     113,    1,  567,    2, 0x0a /* Public */,
     114,    1,  570,    2, 0x0a /* Public */,
     115,    0,  573,    2, 0x0a /* Public */,
     116,    0,  574,    2, 0x0a /* Public */,
     117,    1,  575,    2, 0x0a /* Public */,
     119,    1,  578,    2, 0x0a /* Public */,
     121,    1,  581,    2, 0x0a /* Public */,
     122,    3,  584,    2, 0x0a /* Public */,
     126,    0,  591,    2, 0x0a /* Public */,
     127,    0,  592,    2, 0x0a /* Public */,
     128,    0,  593,    2, 0x0a /* Public */,
     129,    0,  594,    2, 0x0a /* Public */,
     130,    1,  595,    2, 0x0a /* Public */,
     133,    1,  598,    2, 0x0a /* Public */,
     135,    1,  601,    2, 0x08 /* Private */,
     136,    1,  604,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     137,    0,  607,    2, 0x02 /* Public */,
     138,    0,  608,    2, 0x02 /* Public */,
     139,    0,  609,    2, 0x02 /* Public */,
     140,    0,  610,    2, 0x02 /* Public */,
     141,    0,  611,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 11,   10,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 17, 0x80000000 | 17,   10,   16,   18,   19,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 21,   10,   22,
    QMetaType::Void, QMetaType::QByteArray,   24,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 26, 0x80000000 | 28, QMetaType::Float, QMetaType::Float,   10,   27,   24,   29,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 31,   10,   32,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   34,
    QMetaType::Void, 0x80000000 | 36,   24,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 11,   39,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   59,   60,   61,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Float,   10,   63,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 21, 0x80000000 | 21,   65,   66,   67,   68,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int,   65,   66,   70,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void, QMetaType::Float,   70,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   76,   77,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   79,   80,   81,
    QMetaType::Void, QMetaType::Float,   83,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   85,   86,   87,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90, QMetaType::Double, QMetaType::Double,   70,   91,   92,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,   60,
    0x80000000 | 100,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::QByteArray,   24,
    QMetaType::Void, 0x80000000 | 17,   60,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  118,
    QMetaType::Void, QMetaType::Bool,  120,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 17, QMetaType::QByteArray,  123,  124,  125,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 131,  132,
    QMetaType::Void, QMetaType::Bool,  134,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void DeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFrameInputToLogger((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< Parsers::FrameParser(*)>(_a[3]))); break;
        case 1: _t->sendChartSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 2: _t->sendTranscSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 3: _t->sendSoundSpeeed((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 4: _t->dataSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->chartComplete((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< const ChartParameters(*)>(_a[2])),(*reinterpret_cast< const QVector<QVector<uint8_t> >(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 6: _t->rawDataRecieved((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< RawData(*)>(_a[2]))); break;
        case 7: _t->distComplete((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->usblSolutionComplete((*reinterpret_cast< IDBinUsblSolution::UsblSolution(*)>(_a[1]))); break;
        case 9: _t->dopplerBeamComlete((*reinterpret_cast< IDBinDVL::BeamSolution*(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 10: _t->dvlSolutionComplete((*reinterpret_cast< IDBinDVL::DVLSolution(*)>(_a[1]))); break;
        case 11: _t->chartSetupChanged(); break;
        case 12: _t->distSetupChanged(); break;
        case 13: _t->datasetChanged(); break;
        case 14: _t->transChanged(); break;
        case 15: _t->soundChanged(); break;
        case 16: _t->UARTChanged(); break;
        case 17: _t->upgradeProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->deviceVersionChanged(); break;
        case 19: _t->devChanged(); break;
        case 20: _t->streamChanged(); break;
        case 21: _t->vruChanged(); break;
        case 22: _t->writeProxyFrame((*reinterpret_cast< Parsers::FrameParser(*)>(_a[1]))); break;
        case 23: _t->writeMavlinkFrame((*reinterpret_cast< Parsers::FrameParser(*)>(_a[1]))); break;
        case 24: _t->eventComplete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->rangefinderComplete((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 26: _t->positionComplete((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4]))); break;
        case 27: _t->positionComplete_CSV((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 28: _t->positionCompleteRTK((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 29: _t->depthComplete((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->gnssVelocityComplete((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 31: _t->attitudeComplete((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 32: _t->tempComplete((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->encoderComplete((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 34: _t->fileStopsOpening(); break;
        case 35: _t->fileStopsOpening_CSV((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 36: _t->chartLossesChanged(); break;
        case 37: _t->sendProtoFrame((*reinterpret_cast< const Parsers::ProtoBinOut(*)>(_a[1]))); break;
        case 38: _t->fileOpened(); break;
        case 39: { bool _r = _t->isCreatedId((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { StreamListModel* _r = _t->streamsList();
            if (_a[0]) *reinterpret_cast< StreamListModel**>(_a[0]) = std::move(_r); }  break;
        case 41: _t->initStreamList(); break;
        case 42: _t->frameInput((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< Parsers::FrameParser(*)>(_a[3]))); break;
        case 43: _t->openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->openFile_CSV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: _t->closeFile(); break;
        case 46: _t->onLinkOpened((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 47: _t->onLinkClosed((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 48: _t->onLinkDeleted((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 49: _t->binFrameOut((*reinterpret_cast< Parsers::ProtoBinOut(*)>(_a[1]))); break;
        case 50: _t->setProtoBinConsoled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->upgradeLastDev((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 52: _t->beaconActivationReceive((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 53: _t->beaconDirectQueueAsk(); break;
        case 54: { bool _r = _t->isbeaconDirectQueueAsk();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setUSBLBeaconDirectAsk((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->onLoggingKlfStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->onSendRequestAll((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 58: _t->onStartUpgradingFirmware((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 59: _t->onUpgradingFirmwareDone(); break;
        case 60: _t->createLocationReader(); break;
        case 61: _t->destroyLocationReader(); break;
        case 62: _t->shutdown(); break;
        case 63: _t->onPositionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 64: _t->setUseGPS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->readyReadProxy((*reinterpret_cast< Link*(*)>(_a[1]))); break;
        case 66: _t->readyReadProxyNav((*reinterpret_cast< Link*(*)>(_a[1]))); break;
        case 67: { float _r = _t->vruVoltage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->vruCurrent();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { float _r = _t->vruVelocityH();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 70: { int _r = _t->pilotArmState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { int _r = _t->pilotModeState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoPositionInfo >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManager::*)(QUuid , Link * , Parsers::FrameParser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::sendFrameInputToLogger)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::sendChartSetup)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , uint16_t , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::sendTranscSetup)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::sendSoundSpeeed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::dataSend)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , const ChartParameters & , const QVector<QVector<uint8_t>> & , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::chartComplete)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , RawData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::rawDataRecieved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::distComplete)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(IDBinUsblSolution::UsblSolution );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::usblSolutionComplete)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(IDBinDVL::BeamSolution * , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::dopplerBeamComlete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(IDBinDVL::DVLSolution );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::dvlSolutionComplete)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::chartSetupChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::distSetupChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::datasetChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::transChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::soundChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::UARTChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::upgradeProgressChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::deviceVersionChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::devChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::streamChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::vruChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(Parsers::FrameParser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::writeProxyFrame)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(Parsers::FrameParser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::writeMavlinkFrame)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::eventComplete)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const ChannelId & , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::rangefinderComplete)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(double , double , uint32_t , uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::positionComplete)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::positionComplete_CSV)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(Position );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::positionCompleteRTK)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::depthComplete)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::gnssVelocityComplete)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::attitudeComplete)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::tempComplete)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::encoderComplete)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::fileStopsOpening)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QVector<float> & , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::fileStopsOpening_CSV)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::chartLossesChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(const Parsers::ProtoBinOut & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::sendProtoFrame)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::fileOpened)) {
                *result = 38;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceManager.data,
    qt_meta_data_DeviceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    }
    return _id;
}

// SIGNAL 0
void DeviceManager::sendFrameInputToLogger(QUuid _t1, Link * _t2, Parsers::FrameParser _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManager::sendChartSetup(const ChannelId & _t1, uint16_t _t2, uint16_t _t3, uint16_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceManager::sendTranscSetup(const ChannelId & _t1, uint16_t _t2, uint8_t _t3, uint8_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceManager::sendSoundSpeeed(const ChannelId & _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceManager::dataSend(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceManager::chartComplete(const ChannelId & _t1, const ChartParameters & _t2, const QVector<QVector<uint8_t>> & _t3, float _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceManager::rawDataRecieved(const ChannelId & _t1, RawData _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceManager::distComplete(const ChannelId & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeviceManager::usblSolutionComplete(IDBinUsblSolution::UsblSolution _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeviceManager::dopplerBeamComlete(IDBinDVL::BeamSolution * _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DeviceManager::dvlSolutionComplete(IDBinDVL::DVLSolution _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DeviceManager::chartSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DeviceManager::distSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void DeviceManager::datasetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void DeviceManager::transChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void DeviceManager::soundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void DeviceManager::UARTChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void DeviceManager::upgradeProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DeviceManager::deviceVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void DeviceManager::devChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void DeviceManager::streamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void DeviceManager::vruChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void DeviceManager::writeProxyFrame(Parsers::FrameParser _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void DeviceManager::writeMavlinkFrame(Parsers::FrameParser _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void DeviceManager::eventComplete(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void DeviceManager::rangefinderComplete(const ChannelId & _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DeviceManager::positionComplete(double _t1, double _t2, uint32_t _t3, uint32_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DeviceManager::positionComplete_CSV(double _t1, double _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void DeviceManager::positionCompleteRTK(Position _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void DeviceManager::depthComplete(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DeviceManager::gnssVelocityComplete(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void DeviceManager::attitudeComplete(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void DeviceManager::tempComplete(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DeviceManager::encoderComplete(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void DeviceManager::fileStopsOpening()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void DeviceManager::fileStopsOpening_CSV(QVector<float> & _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void DeviceManager::chartLossesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void DeviceManager::sendProtoFrame(const Parsers::ProtoBinOut & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void DeviceManager::fileOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
