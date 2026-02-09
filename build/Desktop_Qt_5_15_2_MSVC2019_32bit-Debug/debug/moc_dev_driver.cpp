/****************************************************************************
** Meta object code from reading C++ file 'dev_driver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/device/dev_driver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dev_driver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DevDriver_t {
    QByteArrayData data[155];
    char stringdata0[2070];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DevDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DevDriver_t qt_meta_stringdata_DevDriver = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DevDriver"
QT_MOC_LITERAL(1, 10, 25), // "averageChartLossesChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "binFrameOut"
QT_MOC_LITERAL(4, 49, 20), // "Parsers::ProtoBinOut"
QT_MOC_LITERAL(5, 70, 9), // "proto_out"
QT_MOC_LITERAL(6, 80, 22), // "startUpgradingFirmware"
QT_MOC_LITERAL(7, 103, 21), // "upgradingFirmwareDone"
QT_MOC_LITERAL(8, 125, 24), // "startUpgradingFirmwareDM"
QT_MOC_LITERAL(9, 150, 8), // "linkUuid"
QT_MOC_LITERAL(10, 159, 7), // "uint8_t"
QT_MOC_LITERAL(11, 167, 7), // "address"
QT_MOC_LITERAL(12, 175, 8), // "firmware"
QT_MOC_LITERAL(13, 184, 23), // "upgradingFirmwareDoneDM"
QT_MOC_LITERAL(14, 208, 14), // "sendChartSetup"
QT_MOC_LITERAL(15, 223, 9), // "ChannelId"
QT_MOC_LITERAL(16, 233, 9), // "channelId"
QT_MOC_LITERAL(17, 243, 8), // "uint16_t"
QT_MOC_LITERAL(18, 252, 5), // "resol"
QT_MOC_LITERAL(19, 258, 5), // "count"
QT_MOC_LITERAL(20, 264, 6), // "offset"
QT_MOC_LITERAL(21, 271, 15), // "sendTranscSetup"
QT_MOC_LITERAL(22, 287, 4), // "freq"
QT_MOC_LITERAL(23, 292, 5), // "pulse"
QT_MOC_LITERAL(24, 298, 5), // "boost"
QT_MOC_LITERAL(25, 304, 14), // "sendSoundSpeed"
QT_MOC_LITERAL(26, 319, 8), // "uint32_t"
QT_MOC_LITERAL(27, 328, 10), // "soundSpeed"
QT_MOC_LITERAL(28, 339, 13), // "chartComplete"
QT_MOC_LITERAL(29, 353, 15), // "ChartParameters"
QT_MOC_LITERAL(30, 369, 12), // "chartsParams"
QT_MOC_LITERAL(31, 382, 26), // "QVector<QVector<uint8_t> >"
QT_MOC_LITERAL(32, 409, 4), // "data"
QT_MOC_LITERAL(33, 414, 10), // "resolution"
QT_MOC_LITERAL(34, 425, 15), // "rawDataRecieved"
QT_MOC_LITERAL(35, 441, 7), // "RawData"
QT_MOC_LITERAL(36, 449, 8), // "raw_data"
QT_MOC_LITERAL(37, 458, 10), // "iqComplete"
QT_MOC_LITERAL(38, 469, 4), // "type"
QT_MOC_LITERAL(39, 474, 16), // "attitudeComplete"
QT_MOC_LITERAL(40, 491, 3), // "yaw"
QT_MOC_LITERAL(41, 495, 5), // "pitch"
QT_MOC_LITERAL(42, 501, 4), // "roll"
QT_MOC_LITERAL(43, 506, 12), // "tempComplete"
QT_MOC_LITERAL(44, 519, 3), // "val"
QT_MOC_LITERAL(45, 523, 12), // "distComplete"
QT_MOC_LITERAL(46, 536, 4), // "dist"
QT_MOC_LITERAL(47, 541, 20), // "usblSolutionComplete"
QT_MOC_LITERAL(48, 562, 31), // "IDBinUsblSolution::UsblSolution"
QT_MOC_LITERAL(49, 594, 24), // "beaconActivationComplete"
QT_MOC_LITERAL(50, 619, 2), // "id"
QT_MOC_LITERAL(51, 622, 16), // "positionComplete"
QT_MOC_LITERAL(52, 639, 3), // "lat"
QT_MOC_LITERAL(53, 643, 3), // "lon"
QT_MOC_LITERAL(54, 647, 4), // "date"
QT_MOC_LITERAL(55, 652, 4), // "time"
QT_MOC_LITERAL(56, 657, 13), // "depthComplete"
QT_MOC_LITERAL(57, 671, 5), // "depth"
QT_MOC_LITERAL(58, 677, 17), // "chartSetupChanged"
QT_MOC_LITERAL(59, 695, 15), // "dspSetupChanged"
QT_MOC_LITERAL(60, 711, 16), // "distSetupChanged"
QT_MOC_LITERAL(61, 728, 14), // "datasetChanged"
QT_MOC_LITERAL(62, 743, 12), // "transChanged"
QT_MOC_LITERAL(63, 756, 12), // "soundChanged"
QT_MOC_LITERAL(64, 769, 11), // "UARTChanged"
QT_MOC_LITERAL(65, 781, 22), // "upgradeProgressChanged"
QT_MOC_LITERAL(66, 804, 15), // "progress_status"
QT_MOC_LITERAL(67, 820, 14), // "upgradeChanged"
QT_MOC_LITERAL(68, 835, 20), // "deviceVersionChanged"
QT_MOC_LITERAL(69, 856, 15), // "deviceIDChanged"
QT_MOC_LITERAL(70, 872, 3), // "uid"
QT_MOC_LITERAL(71, 876, 8), // "onReboot"
QT_MOC_LITERAL(72, 885, 19), // "dopplerVeloComplete"
QT_MOC_LITERAL(73, 905, 19), // "dopplerBeamComplete"
QT_MOC_LITERAL(74, 925, 23), // "IDBinDVL::BeamSolution*"
QT_MOC_LITERAL(75, 949, 5), // "beams"
QT_MOC_LITERAL(76, 955, 3), // "cnt"
QT_MOC_LITERAL(77, 959, 19), // "dvlSolutionComplete"
QT_MOC_LITERAL(78, 979, 21), // "IDBinDVL::DVLSolution"
QT_MOC_LITERAL(79, 1001, 11), // "dvlSolution"
QT_MOC_LITERAL(80, 1013, 13), // "protoComplete"
QT_MOC_LITERAL(81, 1027, 21), // "Parsers::FrameParser&"
QT_MOC_LITERAL(82, 1049, 5), // "proto"
QT_MOC_LITERAL(83, 1055, 15), // "startConnection"
QT_MOC_LITERAL(84, 1071, 6), // "duplex"
QT_MOC_LITERAL(85, 1078, 14), // "stopConnection"
QT_MOC_LITERAL(86, 1093, 12), // "restartState"
QT_MOC_LITERAL(87, 1106, 11), // "requestDist"
QT_MOC_LITERAL(88, 1118, 12), // "requestChart"
QT_MOC_LITERAL(89, 1131, 17), // "requestStreamList"
QT_MOC_LITERAL(90, 1149, 13), // "requestStream"
QT_MOC_LITERAL(91, 1163, 9), // "stream_id"
QT_MOC_LITERAL(92, 1173, 13), // "setConsoleOut"
QT_MOC_LITERAL(93, 1187, 10), // "is_console"
QT_MOC_LITERAL(94, 1198, 13), // "flashSettings"
QT_MOC_LITERAL(95, 1212, 13), // "resetSettings"
QT_MOC_LITERAL(96, 1226, 6), // "reboot"
QT_MOC_LITERAL(97, 1233, 7), // "process"
QT_MOC_LITERAL(98, 1241, 13), // "dvlChangeMode"
QT_MOC_LITERAL(99, 1255, 7), // "ismode1"
QT_MOC_LITERAL(100, 1263, 7), // "ismode2"
QT_MOC_LITERAL(101, 1271, 7), // "ismode3"
QT_MOC_LITERAL(102, 1279, 7), // "ismode4"
QT_MOC_LITERAL(103, 1287, 11), // "range_mode4"
QT_MOC_LITERAL(104, 1299, 21), // "importSettingsFromXML"
QT_MOC_LITERAL(105, 1321, 9), // "file_path"
QT_MOC_LITERAL(106, 1331, 19), // "exportSettingsToXML"
QT_MOC_LITERAL(107, 1351, 15), // "setDatasetState"
QT_MOC_LITERAL(108, 1367, 5), // "state"
QT_MOC_LITERAL(109, 1373, 17), // "setDistSetupState"
QT_MOC_LITERAL(110, 1391, 18), // "setChartSetupState"
QT_MOC_LITERAL(111, 1410, 16), // "setDspSetupState"
QT_MOC_LITERAL(112, 1427, 14), // "setTranscState"
QT_MOC_LITERAL(113, 1442, 18), // "setSoundSpeedState"
QT_MOC_LITERAL(114, 1461, 12), // "setUartState"
QT_MOC_LITERAL(115, 1474, 11), // "setLinkUuid"
QT_MOC_LITERAL(116, 1486, 11), // "getLinkUuid"
QT_MOC_LITERAL(117, 1498, 17), // "askBeaconPosition"
QT_MOC_LITERAL(118, 1516, 36), // "IDBinUsblSolution::USBLReques..."
QT_MOC_LITERAL(119, 1553, 3), // "ask"
QT_MOC_LITERAL(120, 1557, 16), // "enableBeaconOnce"
QT_MOC_LITERAL(121, 1574, 7), // "timeout"
QT_MOC_LITERAL(122, 1582, 19), // "acousticPingRequest"
QT_MOC_LITERAL(123, 1602, 10), // "timeout_us"
QT_MOC_LITERAL(124, 1613, 22), // "acousticResponceFilter"
QT_MOC_LITERAL(125, 1636, 23), // "acousticResponceTimeout"
QT_MOC_LITERAL(126, 1660, 12), // "doRequestAll"
QT_MOC_LITERAL(127, 1673, 17), // "receivedTimestamp"
QT_MOC_LITERAL(128, 1691, 13), // "Parsers::Type"
QT_MOC_LITERAL(129, 1705, 16), // "Parsers::Version"
QT_MOC_LITERAL(130, 1722, 3), // "ver"
QT_MOC_LITERAL(131, 1726, 13), // "Parsers::Resp"
QT_MOC_LITERAL(132, 1740, 4), // "resp"
QT_MOC_LITERAL(133, 1745, 12), // "receivedDist"
QT_MOC_LITERAL(134, 1758, 13), // "receivedChart"
QT_MOC_LITERAL(135, 1772, 11), // "receivedRaw"
QT_MOC_LITERAL(136, 1784, 11), // "receivedAtt"
QT_MOC_LITERAL(137, 1796, 12), // "receivedTemp"
QT_MOC_LITERAL(138, 1809, 15), // "receivedDataset"
QT_MOC_LITERAL(139, 1825, 17), // "receivedDistSetup"
QT_MOC_LITERAL(140, 1843, 18), // "receivedChartSetup"
QT_MOC_LITERAL(141, 1862, 16), // "receivedDSPSetup"
QT_MOC_LITERAL(142, 1879, 14), // "receivedTransc"
QT_MOC_LITERAL(143, 1894, 18), // "receivedSoundSpeed"
QT_MOC_LITERAL(144, 1913, 12), // "receivedUART"
QT_MOC_LITERAL(145, 1926, 15), // "receivedVersion"
QT_MOC_LITERAL(146, 1942, 12), // "receivedMark"
QT_MOC_LITERAL(147, 1955, 13), // "receivedFlash"
QT_MOC_LITERAL(148, 1969, 12), // "receivedBoot"
QT_MOC_LITERAL(149, 1982, 14), // "receivedUpdate"
QT_MOC_LITERAL(150, 1997, 11), // "receivedNav"
QT_MOC_LITERAL(151, 2009, 11), // "receivedDVL"
QT_MOC_LITERAL(152, 2021, 15), // "receivedDVLMode"
QT_MOC_LITERAL(153, 2037, 12), // "receivedUSBL"
QT_MOC_LITERAL(154, 2050, 19) // "receivedUSBLControl"

    },
    "DevDriver\0averageChartLossesChanged\0"
    "\0binFrameOut\0Parsers::ProtoBinOut\0"
    "proto_out\0startUpgradingFirmware\0"
    "upgradingFirmwareDone\0startUpgradingFirmwareDM\0"
    "linkUuid\0uint8_t\0address\0firmware\0"
    "upgradingFirmwareDoneDM\0sendChartSetup\0"
    "ChannelId\0channelId\0uint16_t\0resol\0"
    "count\0offset\0sendTranscSetup\0freq\0"
    "pulse\0boost\0sendSoundSpeed\0uint32_t\0"
    "soundSpeed\0chartComplete\0ChartParameters\0"
    "chartsParams\0QVector<QVector<uint8_t> >\0"
    "data\0resolution\0rawDataRecieved\0RawData\0"
    "raw_data\0iqComplete\0type\0attitudeComplete\0"
    "yaw\0pitch\0roll\0tempComplete\0val\0"
    "distComplete\0dist\0usblSolutionComplete\0"
    "IDBinUsblSolution::UsblSolution\0"
    "beaconActivationComplete\0id\0"
    "positionComplete\0lat\0lon\0date\0time\0"
    "depthComplete\0depth\0chartSetupChanged\0"
    "dspSetupChanged\0distSetupChanged\0"
    "datasetChanged\0transChanged\0soundChanged\0"
    "UARTChanged\0upgradeProgressChanged\0"
    "progress_status\0upgradeChanged\0"
    "deviceVersionChanged\0deviceIDChanged\0"
    "uid\0onReboot\0dopplerVeloComplete\0"
    "dopplerBeamComplete\0IDBinDVL::BeamSolution*\0"
    "beams\0cnt\0dvlSolutionComplete\0"
    "IDBinDVL::DVLSolution\0dvlSolution\0"
    "protoComplete\0Parsers::FrameParser&\0"
    "proto\0startConnection\0duplex\0"
    "stopConnection\0restartState\0requestDist\0"
    "requestChart\0requestStreamList\0"
    "requestStream\0stream_id\0setConsoleOut\0"
    "is_console\0flashSettings\0resetSettings\0"
    "reboot\0process\0dvlChangeMode\0ismode1\0"
    "ismode2\0ismode3\0ismode4\0range_mode4\0"
    "importSettingsFromXML\0file_path\0"
    "exportSettingsToXML\0setDatasetState\0"
    "state\0setDistSetupState\0setChartSetupState\0"
    "setDspSetupState\0setTranscState\0"
    "setSoundSpeedState\0setUartState\0"
    "setLinkUuid\0getLinkUuid\0askBeaconPosition\0"
    "IDBinUsblSolution::USBLRequestBeacon\0"
    "ask\0enableBeaconOnce\0timeout\0"
    "acousticPingRequest\0timeout_us\0"
    "acousticResponceFilter\0acousticResponceTimeout\0"
    "doRequestAll\0receivedTimestamp\0"
    "Parsers::Type\0Parsers::Version\0ver\0"
    "Parsers::Resp\0resp\0receivedDist\0"
    "receivedChart\0receivedRaw\0receivedAtt\0"
    "receivedTemp\0receivedDataset\0"
    "receivedDistSetup\0receivedChartSetup\0"
    "receivedDSPSetup\0receivedTransc\0"
    "receivedSoundSpeed\0receivedUART\0"
    "receivedVersion\0receivedMark\0receivedFlash\0"
    "receivedBoot\0receivedUpdate\0receivedNav\0"
    "receivedDVL\0receivedDVLMode\0receivedUSBL\0"
    "receivedUSBLControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DevDriver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      91,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  469,    2, 0x06 /* Public */,
       3,    1,  470,    2, 0x06 /* Public */,
       6,    0,  473,    2, 0x06 /* Public */,
       7,    0,  474,    2, 0x06 /* Public */,
       8,    3,  475,    2, 0x06 /* Public */,
      13,    0,  482,    2, 0x06 /* Public */,
      14,    4,  483,    2, 0x06 /* Public */,
      21,    4,  492,    2, 0x06 /* Public */,
      25,    2,  501,    2, 0x06 /* Public */,
      28,    5,  506,    2, 0x06 /* Public */,
      34,    2,  517,    2, 0x06 /* Public */,
      37,    2,  522,    2, 0x06 /* Public */,
      39,    3,  527,    2, 0x06 /* Public */,
      43,    1,  534,    2, 0x06 /* Public */,
      45,    2,  537,    2, 0x06 /* Public */,
      47,    1,  542,    2, 0x06 /* Public */,
      49,    1,  545,    2, 0x06 /* Public */,
      51,    4,  548,    2, 0x06 /* Public */,
      56,    1,  557,    2, 0x06 /* Public */,
      58,    0,  560,    2, 0x06 /* Public */,
      59,    0,  561,    2, 0x06 /* Public */,
      60,    0,  562,    2, 0x06 /* Public */,
      61,    0,  563,    2, 0x06 /* Public */,
      62,    0,  564,    2, 0x06 /* Public */,
      63,    0,  565,    2, 0x06 /* Public */,
      64,    0,  566,    2, 0x06 /* Public */,
      65,    1,  567,    2, 0x06 /* Public */,
      67,    0,  570,    2, 0x06 /* Public */,
      68,    0,  571,    2, 0x06 /* Public */,
      69,    1,  572,    2, 0x06 /* Public */,
      71,    0,  575,    2, 0x06 /* Public */,
      72,    0,  576,    2, 0x06 /* Public */,
      73,    2,  577,    2, 0x06 /* Public */,
      77,    1,  582,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      80,    1,  585,    2, 0x0a /* Public */,
      83,    1,  588,    2, 0x0a /* Public */,
      85,    0,  591,    2, 0x0a /* Public */,
      86,    0,  592,    2, 0x0a /* Public */,
      87,    0,  593,    2, 0x0a /* Public */,
      88,    0,  594,    2, 0x0a /* Public */,
      89,    0,  595,    2, 0x0a /* Public */,
      90,    1,  596,    2, 0x0a /* Public */,
      92,    1,  599,    2, 0x0a /* Public */,
      94,    0,  602,    2, 0x0a /* Public */,
      95,    0,  603,    2, 0x0a /* Public */,
      96,    0,  604,    2, 0x0a /* Public */,
      97,    0,  605,    2, 0x0a /* Public */,
      98,    5,  606,    2, 0x0a /* Public */,
     104,    1,  617,    2, 0x0a /* Public */,
     106,    1,  620,    2, 0x0a /* Public */,
     107,    1,  623,    2, 0x0a /* Public */,
     109,    1,  626,    2, 0x0a /* Public */,
     110,    1,  629,    2, 0x0a /* Public */,
     111,    1,  632,    2, 0x0a /* Public */,
     112,    1,  635,    2, 0x0a /* Public */,
     113,    1,  638,    2, 0x0a /* Public */,
     114,    1,  641,    2, 0x0a /* Public */,
     115,    1,  644,    2, 0x0a /* Public */,
     116,    0,  647,    2, 0x0a /* Public */,
     117,    0,  648,    2, 0x0a /* Public */,
     117,    1,  649,    2, 0x0a /* Public */,
     120,    1,  652,    2, 0x0a /* Public */,
     122,    2,  655,    2, 0x0a /* Public */,
     122,    1,  660,    2, 0x2a /* Public | MethodCloned */,
     124,    1,  663,    2, 0x0a /* Public */,
     125,    1,  666,    2, 0x0a /* Public */,
     125,    0,  669,    2, 0x2a /* Public | MethodCloned */,
     126,    0,  670,    2, 0x0a /* Public */,
     127,    3,  671,    2, 0x09 /* Protected */,
     133,    3,  678,    2, 0x09 /* Protected */,
     134,    3,  685,    2, 0x09 /* Protected */,
     135,    1,  692,    2, 0x09 /* Protected */,
     136,    3,  695,    2, 0x09 /* Protected */,
     137,    3,  702,    2, 0x09 /* Protected */,
     138,    3,  709,    2, 0x09 /* Protected */,
     139,    3,  716,    2, 0x09 /* Protected */,
     140,    3,  723,    2, 0x09 /* Protected */,
     141,    3,  730,    2, 0x09 /* Protected */,
     142,    3,  737,    2, 0x09 /* Protected */,
     143,    3,  744,    2, 0x09 /* Protected */,
     144,    3,  751,    2, 0x09 /* Protected */,
     145,    3,  758,    2, 0x09 /* Protected */,
     146,    3,  765,    2, 0x09 /* Protected */,
     147,    3,  772,    2, 0x09 /* Protected */,
     148,    3,  779,    2, 0x09 /* Protected */,
     149,    3,  786,    2, 0x09 /* Protected */,
     150,    3,  793,    2, 0x09 /* Protected */,
     151,    3,  800,    2, 0x09 /* Protected */,
     152,    3,  807,    2, 0x09 /* Protected */,
     153,    3,  814,    2, 0x09 /* Protected */,
     154,    3,  821,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 10, QMetaType::QByteArray,    9,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17,   16,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17, 0x80000000 | 10, 0x80000000 | 10,   16,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 26,   16,   27,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 29, 0x80000000 | 31, QMetaType::Float, QMetaType::Float,   16,   30,   32,   33,   20,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 35,   16,   36,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 10,   32,   38,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   40,   41,   42,
    QMetaType::Void, QMetaType::Float,   44,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   16,   46,
    QMetaType::Void, 0x80000000 | 48,   32,
    QMetaType::Void, 0x80000000 | 10,   50,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 26, 0x80000000 | 26,   52,   53,   54,   55,
    QMetaType::Void, QMetaType::Float,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74, 0x80000000 | 17,   75,   76,
    QMetaType::Void, 0x80000000 | 78,   79,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, QMetaType::Bool,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   91,
    QMetaType::Void, QMetaType::Bool,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Float,   99,  100,  101,  102,  103,
    QMetaType::Void, QMetaType::QString,  105,
    QMetaType::Void, QMetaType::QString,  105,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::QUuid,    9,
    QMetaType::QUuid,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 118,  119,
    QMetaType::Void, QMetaType::Float,  121,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 26,   11,  123,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 26,  123,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,
    QMetaType::Void, 0x80000000 | 128, 0x80000000 | 129, 0x80000000 | 131,   38,  130,  132,

       0        // eod
};

void DevDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DevDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->averageChartLossesChanged(); break;
        case 1: _t->binFrameOut((*reinterpret_cast< Parsers::ProtoBinOut(*)>(_a[1]))); break;
        case 2: _t->startUpgradingFirmware(); break;
        case 3: _t->upgradingFirmwareDone(); break;
        case 4: _t->startUpgradingFirmwareDM((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->upgradingFirmwareDoneDM(); break;
        case 6: _t->sendChartSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 7: _t->sendTranscSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 8: _t->sendSoundSpeed((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 9: _t->chartComplete((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< const ChartParameters(*)>(_a[2])),(*reinterpret_cast< const QVector<QVector<uint8_t> >(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 10: _t->rawDataRecieved((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< RawData(*)>(_a[2]))); break;
        case 11: _t->iqComplete((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2]))); break;
        case 12: _t->attitudeComplete((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 13: _t->tempComplete((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->distComplete((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->usblSolutionComplete((*reinterpret_cast< IDBinUsblSolution::UsblSolution(*)>(_a[1]))); break;
        case 16: _t->beaconActivationComplete((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 17: _t->positionComplete((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4]))); break;
        case 18: _t->depthComplete((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->chartSetupChanged(); break;
        case 20: _t->dspSetupChanged(); break;
        case 21: _t->distSetupChanged(); break;
        case 22: _t->datasetChanged(); break;
        case 23: _t->transChanged(); break;
        case 24: _t->soundChanged(); break;
        case 25: _t->UARTChanged(); break;
        case 26: _t->upgradeProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->upgradeChanged(); break;
        case 28: _t->deviceVersionChanged(); break;
        case 29: _t->deviceIDChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 30: _t->onReboot(); break;
        case 31: _t->dopplerVeloComplete(); break;
        case 32: _t->dopplerBeamComplete((*reinterpret_cast< IDBinDVL::BeamSolution*(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 33: _t->dvlSolutionComplete((*reinterpret_cast< IDBinDVL::DVLSolution(*)>(_a[1]))); break;
        case 34: _t->protoComplete((*reinterpret_cast< Parsers::FrameParser(*)>(_a[1]))); break;
        case 35: _t->startConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->stopConnection(); break;
        case 37: _t->restartState(); break;
        case 38: _t->requestDist(); break;
        case 39: _t->requestChart(); break;
        case 40: _t->requestStreamList(); break;
        case 41: _t->requestStream((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->setConsoleOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->flashSettings(); break;
        case 44: _t->resetSettings(); break;
        case 45: _t->reboot(); break;
        case 46: _t->process(); break;
        case 47: _t->dvlChangeMode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 48: _t->importSettingsFromXML((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->exportSettingsToXML((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->setDatasetState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->setDistSetupState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->setChartSetupState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setDspSetupState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setTranscState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->setSoundSpeedState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->setUartState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->setLinkUuid((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 58: { QUuid _r = _t->getLinkUuid();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->askBeaconPosition(); break;
        case 60: _t->askBeaconPosition((*reinterpret_cast< IDBinUsblSolution::USBLRequestBeacon(*)>(_a[1]))); break;
        case 61: _t->enableBeaconOnce((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 62: _t->acousticPingRequest((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 63: _t->acousticPingRequest((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 64: _t->acousticResponceFilter((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 65: _t->acousticResponceTimeout((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 66: _t->acousticResponceTimeout(); break;
        case 67: _t->doRequestAll(); break;
        case 68: _t->receivedTimestamp((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 69: _t->receivedDist((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 70: _t->receivedChart((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 71: _t->receivedRaw((*reinterpret_cast< RawData(*)>(_a[1]))); break;
        case 72: _t->receivedAtt((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 73: _t->receivedTemp((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 74: _t->receivedDataset((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 75: _t->receivedDistSetup((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 76: _t->receivedChartSetup((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 77: _t->receivedDSPSetup((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 78: _t->receivedTransc((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 79: _t->receivedSoundSpeed((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 80: _t->receivedUART((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 81: _t->receivedVersion((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 82: _t->receivedMark((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 83: _t->receivedFlash((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 84: _t->receivedBoot((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 85: _t->receivedUpdate((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 86: _t->receivedNav((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 87: _t->receivedDVL((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 88: _t->receivedDVLMode((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 89: _t->receivedUSBL((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        case 90: _t->receivedUSBLControl((*reinterpret_cast< Parsers::Type(*)>(_a[1])),(*reinterpret_cast< Parsers::Version(*)>(_a[2])),(*reinterpret_cast< Parsers::Resp(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::averageChartLossesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(Parsers::ProtoBinOut );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::binFrameOut)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::startUpgradingFirmware)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::upgradingFirmwareDone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(QUuid , uint8_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::startUpgradingFirmwareDM)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::upgradingFirmwareDoneDM)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::sendChartSetup)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , uint16_t , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::sendTranscSetup)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::sendSoundSpeed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , const ChartParameters & , const QVector<QVector<uint8_t>> & , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::chartComplete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , RawData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::rawDataRecieved)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(QByteArray , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::iqComplete)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::attitudeComplete)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::tempComplete)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(const ChannelId & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::distComplete)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(IDBinUsblSolution::UsblSolution );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::usblSolutionComplete)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::beaconActivationComplete)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(double , double , uint32_t , uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::positionComplete)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::depthComplete)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::chartSetupChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::dspSetupChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::distSetupChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::datasetChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::transChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::soundChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::UARTChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::upgradeProgressChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::upgradeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::deviceVersionChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::deviceIDChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::onReboot)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::dopplerVeloComplete)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(IDBinDVL::BeamSolution * , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::dopplerBeamComplete)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (DevDriver::*)(IDBinDVL::DVLSolution );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevDriver::dvlSolutionComplete)) {
                *result = 33;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DevDriver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DevDriver.data,
    qt_meta_data_DevDriver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DevDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DevDriver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DevDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 91)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 91;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 91)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 91;
    }
    return _id;
}

// SIGNAL 0
void DevDriver::averageChartLossesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DevDriver::binFrameOut(Parsers::ProtoBinOut _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DevDriver::startUpgradingFirmware()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DevDriver::upgradingFirmwareDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DevDriver::startUpgradingFirmwareDM(QUuid _t1, uint8_t _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DevDriver::upgradingFirmwareDoneDM()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DevDriver::sendChartSetup(const ChannelId & _t1, uint16_t _t2, uint16_t _t3, uint16_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DevDriver::sendTranscSetup(const ChannelId & _t1, uint16_t _t2, uint8_t _t3, uint8_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DevDriver::sendSoundSpeed(const ChannelId & _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DevDriver::chartComplete(const ChannelId & _t1, const ChartParameters & _t2, const QVector<QVector<uint8_t>> & _t3, float _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DevDriver::rawDataRecieved(const ChannelId & _t1, RawData _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DevDriver::iqComplete(QByteArray _t1, uint8_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DevDriver::attitudeComplete(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DevDriver::tempComplete(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DevDriver::distComplete(const ChannelId & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DevDriver::usblSolutionComplete(IDBinUsblSolution::UsblSolution _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DevDriver::beaconActivationComplete(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DevDriver::positionComplete(double _t1, double _t2, uint32_t _t3, uint32_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DevDriver::depthComplete(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DevDriver::chartSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void DevDriver::dspSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void DevDriver::distSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void DevDriver::datasetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void DevDriver::transChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void DevDriver::soundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void DevDriver::UARTChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void DevDriver::upgradeProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DevDriver::upgradeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void DevDriver::deviceVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void DevDriver::deviceIDChanged(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void DevDriver::onReboot()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void DevDriver::dopplerVeloComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void DevDriver::dopplerBeamComplete(IDBinDVL::BeamSolution * _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void DevDriver::dvlSolutionComplete(IDBinDVL::DVLSolution _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
