/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Core_t {
    QByteArrayData data[130];
    char stringdata0[1756];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Core_t qt_meta_stringdata_Core = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Core"
QT_MOC_LITERAL(1, 5, 17), // "connectionChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "duplex"
QT_MOC_LITERAL(4, 31, 15), // "filePathChanged"
QT_MOC_LITERAL(5, 47, 17), // "sendIsFileOpening"
QT_MOC_LITERAL(6, 65, 18), // "channelListUpdated"
QT_MOC_LITERAL(7, 84, 25), // "dataProcessorStateChanged"
QT_MOC_LITERAL(8, 110, 17), // "isGPSAliveChanged"
QT_MOC_LITERAL(9, 128, 17), // "loggingKlfChanged"
QT_MOC_LITERAL(10, 146, 17), // "scrrenModeChanged"
QT_MOC_LITERAL(11, 164, 22), // "currentMapLevelChanged"
QT_MOC_LITERAL(12, 187, 13), // "setIsGPSAlive"
QT_MOC_LITERAL(13, 201, 5), // "state"
QT_MOC_LITERAL(14, 207, 13), // "getIsGPSAlive"
QT_MOC_LITERAL(15, 221, 11), // "openLogFile"
QT_MOC_LITERAL(16, 233, 8), // "filePath"
QT_MOC_LITERAL(17, 242, 8), // "isAppend"
QT_MOC_LITERAL(18, 251, 13), // "onCustomEvent"
QT_MOC_LITERAL(19, 265, 12), // "closeLogFile"
QT_MOC_LITERAL(20, 278, 12), // "onFileOpened"
QT_MOC_LITERAL(21, 291, 7), // "openXTF"
QT_MOC_LITERAL(22, 299, 4), // "data"
QT_MOC_LITERAL(23, 304, 7), // "openCSV"
QT_MOC_LITERAL(24, 312, 4), // "name"
QT_MOC_LITERAL(25, 317, 13), // "separatorType"
QT_MOC_LITERAL(26, 331, 3), // "row"
QT_MOC_LITERAL(27, 335, 7), // "colTime"
QT_MOC_LITERAL(28, 343, 9), // "isUtcTime"
QT_MOC_LITERAL(29, 353, 6), // "colLat"
QT_MOC_LITERAL(30, 360, 6), // "colLon"
QT_MOC_LITERAL(31, 367, 11), // "colAltitude"
QT_MOC_LITERAL(32, 379, 8), // "colNorth"
QT_MOC_LITERAL(33, 388, 7), // "colEast"
QT_MOC_LITERAL(34, 396, 5), // "colUp"
QT_MOC_LITERAL(35, 402, 9), // "openProxy"
QT_MOC_LITERAL(36, 412, 7), // "address"
QT_MOC_LITERAL(37, 420, 4), // "port"
QT_MOC_LITERAL(38, 425, 5), // "isTcp"
QT_MOC_LITERAL(39, 431, 10), // "closeProxy"
QT_MOC_LITERAL(40, 442, 9), // "upgradeFW"
QT_MOC_LITERAL(41, 452, 3), // "dev"
QT_MOC_LITERAL(42, 456, 14), // "upgradeChanged"
QT_MOC_LITERAL(43, 471, 14), // "progressStatus"
QT_MOC_LITERAL(44, 486, 13), // "getKlfLogging"
QT_MOC_LITERAL(45, 500, 13), // "setKlfLogging"
QT_MOC_LITERAL(46, 514, 9), // "isLogging"
QT_MOC_LITERAL(47, 524, 23), // "getFixBlackStripesState"
QT_MOC_LITERAL(48, 548, 30), // "getFixBlackStripesForwardSteps"
QT_MOC_LITERAL(49, 579, 31), // "getFixBlackStripesBackwardSteps"
QT_MOC_LITERAL(50, 611, 23), // "setFixBlackStripesState"
QT_MOC_LITERAL(51, 635, 30), // "setFixBlackStripesForwardSteps"
QT_MOC_LITERAL(52, 666, 3), // "val"
QT_MOC_LITERAL(53, 670, 31), // "setFixBlackStripesBackwardSteps"
QT_MOC_LITERAL(54, 702, 13), // "getCsvLogging"
QT_MOC_LITERAL(55, 716, 13), // "setCsvLogging"
QT_MOC_LITERAL(56, 730, 9), // "getUseGPS"
QT_MOC_LITERAL(57, 740, 9), // "setUseGPS"
QT_MOC_LITERAL(58, 750, 18), // "exportComplexToCSV"
QT_MOC_LITERAL(59, 769, 15), // "exportUSBLToCSV"
QT_MOC_LITERAL(60, 785, 15), // "exportPlotAsCVS"
QT_MOC_LITERAL(61, 801, 9), // "ChannelId"
QT_MOC_LITERAL(62, 811, 9), // "channelId"
QT_MOC_LITERAL(63, 821, 10), // "decimation"
QT_MOC_LITERAL(64, 832, 15), // "exportPlotAsXTF"
QT_MOC_LITERAL(65, 848, 17), // "setPlotStartLevel"
QT_MOC_LITERAL(66, 866, 5), // "level"
QT_MOC_LITERAL(67, 872, 16), // "setPlotStopLevel"
QT_MOC_LITERAL(68, 889, 19), // "setTimelinePosition"
QT_MOC_LITERAL(69, 909, 8), // "position"
QT_MOC_LITERAL(70, 918, 8), // "resetAim"
QT_MOC_LITERAL(71, 927, 6), // "UILoad"
QT_MOC_LITERAL(72, 934, 6), // "object"
QT_MOC_LITERAL(73, 941, 3), // "url"
QT_MOC_LITERAL(74, 945, 17), // "setMosaicChannels"
QT_MOC_LITERAL(75, 963, 10), // "firstChStr"
QT_MOC_LITERAL(76, 974, 11), // "secondChStr"
QT_MOC_LITERAL(77, 986, 16), // "getIsFileOpening"
QT_MOC_LITERAL(78, 1003, 20), // "getIsSeparateReading"
QT_MOC_LITERAL(79, 1024, 17), // "onChannelsUpdated"
QT_MOC_LITERAL(80, 1042, 14), // "onRedrawEpochs"
QT_MOC_LITERAL(81, 1057, 9), // "QSet<int>"
QT_MOC_LITERAL(82, 1067, 5), // "indxs"
QT_MOC_LITERAL(83, 1073, 21), // "getDataProcessorState"
QT_MOC_LITERAL(84, 1095, 14), // "initStreamList"
QT_MOC_LITERAL(85, 1110, 15), // "getCurrMapLevel"
QT_MOC_LITERAL(86, 1126, 15), // "getChannel1Name"
QT_MOC_LITERAL(87, 1142, 15), // "getChannel2Name"
QT_MOC_LITERAL(88, 1158, 20), // "getConvertedMousePos"
QT_MOC_LITERAL(89, 1179, 4), // "indx"
QT_MOC_LITERAL(90, 1184, 6), // "mouseX"
QT_MOC_LITERAL(91, 1191, 6), // "mouseY"
QT_MOC_LITERAL(92, 1198, 21), // "setIsAttitudeExpected"
QT_MOC_LITERAL(93, 1220, 18), // "onFileStopsOpening"
QT_MOC_LITERAL(94, 1239, 22), // "onFileStopsOpening_CSV"
QT_MOC_LITERAL(95, 1262, 15), // "QVector<float>&"
QT_MOC_LITERAL(96, 1278, 8), // "depthVec"
QT_MOC_LITERAL(97, 1287, 4), // "minZ"
QT_MOC_LITERAL(98, 1292, 4), // "maxZ"
QT_MOC_LITERAL(99, 1297, 28), // "onSendMapTextureIdByTileIndx"
QT_MOC_LITERAL(100, 1326, 14), // "map::TileIndex"
QT_MOC_LITERAL(101, 1341, 8), // "tileIndx"
QT_MOC_LITERAL(102, 1350, 6), // "GLuint"
QT_MOC_LITERAL(103, 1357, 9), // "textureId"
QT_MOC_LITERAL(104, 1367, 28), // "onDataProcesstorStateChanged"
QT_MOC_LITERAL(105, 1396, 17), // "DataProcessorType"
QT_MOC_LITERAL(106, 1414, 24), // "onSendFrameInputToLogger"
QT_MOC_LITERAL(107, 1439, 4), // "uuid"
QT_MOC_LITERAL(108, 1444, 5), // "Link*"
QT_MOC_LITERAL(109, 1450, 4), // "link"
QT_MOC_LITERAL(110, 1455, 20), // "Parsers::FrameParser"
QT_MOC_LITERAL(111, 1476, 5), // "frame"
QT_MOC_LITERAL(112, 1482, 18), // "onZoomLevelChanged"
QT_MOC_LITERAL(113, 1501, 10), // "isGPSAlive"
QT_MOC_LITERAL(114, 1512, 13), // "isFactoryMode"
QT_MOC_LITERAL(115, 1526, 11), // "consoleList"
QT_MOC_LITERAL(116, 1538, 17), // "ConsoleListModel*"
QT_MOC_LITERAL(117, 1556, 10), // "loggingKlf"
QT_MOC_LITERAL(118, 1567, 12), // "isKlfLogging"
QT_MOC_LITERAL(119, 1580, 10), // "loggingCsv"
QT_MOC_LITERAL(120, 1591, 6), // "useGPS"
QT_MOC_LITERAL(121, 1598, 20), // "fixBlackStripesState"
QT_MOC_LITERAL(122, 1619, 27), // "fixBlackStripesForwardSteps"
QT_MOC_LITERAL(123, 1647, 28), // "fixBlackStripesBackwardSteps"
QT_MOC_LITERAL(124, 1676, 13), // "isFileOpening"
QT_MOC_LITERAL(125, 1690, 17), // "isSeparateReading"
QT_MOC_LITERAL(126, 1708, 7), // "ch1Name"
QT_MOC_LITERAL(127, 1716, 7), // "ch2Name"
QT_MOC_LITERAL(128, 1724, 18), // "dataProcessorState"
QT_MOC_LITERAL(129, 1743, 12) // "currMapLevel"

    },
    "Core\0connectionChanged\0\0duplex\0"
    "filePathChanged\0sendIsFileOpening\0"
    "channelListUpdated\0dataProcessorStateChanged\0"
    "isGPSAliveChanged\0loggingKlfChanged\0"
    "scrrenModeChanged\0currentMapLevelChanged\0"
    "setIsGPSAlive\0state\0getIsGPSAlive\0"
    "openLogFile\0filePath\0isAppend\0"
    "onCustomEvent\0closeLogFile\0onFileOpened\0"
    "openXTF\0data\0openCSV\0name\0separatorType\0"
    "row\0colTime\0isUtcTime\0colLat\0colLon\0"
    "colAltitude\0colNorth\0colEast\0colUp\0"
    "openProxy\0address\0port\0isTcp\0closeProxy\0"
    "upgradeFW\0dev\0upgradeChanged\0"
    "progressStatus\0getKlfLogging\0setKlfLogging\0"
    "isLogging\0getFixBlackStripesState\0"
    "getFixBlackStripesForwardSteps\0"
    "getFixBlackStripesBackwardSteps\0"
    "setFixBlackStripesState\0"
    "setFixBlackStripesForwardSteps\0val\0"
    "setFixBlackStripesBackwardSteps\0"
    "getCsvLogging\0setCsvLogging\0getUseGPS\0"
    "setUseGPS\0exportComplexToCSV\0"
    "exportUSBLToCSV\0exportPlotAsCVS\0"
    "ChannelId\0channelId\0decimation\0"
    "exportPlotAsXTF\0setPlotStartLevel\0"
    "level\0setPlotStopLevel\0setTimelinePosition\0"
    "position\0resetAim\0UILoad\0object\0url\0"
    "setMosaicChannels\0firstChStr\0secondChStr\0"
    "getIsFileOpening\0getIsSeparateReading\0"
    "onChannelsUpdated\0onRedrawEpochs\0"
    "QSet<int>\0indxs\0getDataProcessorState\0"
    "initStreamList\0getCurrMapLevel\0"
    "getChannel1Name\0getChannel2Name\0"
    "getConvertedMousePos\0indx\0mouseX\0"
    "mouseY\0setIsAttitudeExpected\0"
    "onFileStopsOpening\0onFileStopsOpening_CSV\0"
    "QVector<float>&\0depthVec\0minZ\0maxZ\0"
    "onSendMapTextureIdByTileIndx\0"
    "map::TileIndex\0tileIndx\0GLuint\0textureId\0"
    "onDataProcesstorStateChanged\0"
    "DataProcessorType\0onSendFrameInputToLogger\0"
    "uuid\0Link*\0link\0Parsers::FrameParser\0"
    "frame\0onZoomLevelChanged\0isGPSAlive\0"
    "isFactoryMode\0consoleList\0ConsoleListModel*\0"
    "loggingKlf\0isKlfLogging\0loggingCsv\0"
    "useGPS\0fixBlackStripesState\0"
    "fixBlackStripesForwardSteps\0"
    "fixBlackStripesBackwardSteps\0isFileOpening\0"
    "isSeparateReading\0ch1Name\0ch2Name\0"
    "dataProcessorState\0currMapLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Core[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
      17,  678, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  374,    2, 0x06 /* Public */,
       1,    0,  377,    2, 0x26 /* Public | MethodCloned */,
       4,    0,  378,    2, 0x06 /* Public */,
       5,    0,  379,    2, 0x06 /* Public */,
       6,    0,  380,    2, 0x06 /* Public */,
       7,    0,  381,    2, 0x06 /* Public */,
       8,    0,  382,    2, 0x06 /* Public */,
       9,    0,  383,    2, 0x06 /* Public */,
      10,    0,  384,    2, 0x06 /* Public */,
      11,    0,  385,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  386,    2, 0x0a /* Public */,
      14,    0,  389,    2, 0x0a /* Public */,
      15,    3,  390,    2, 0x0a /* Public */,
      15,    2,  397,    2, 0x2a /* Public | MethodCloned */,
      15,    1,  402,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  405,    2, 0x0a /* Public */,
      20,    0,  406,    2, 0x0a /* Public */,
      21,    1,  407,    2, 0x0a /* Public */,
      23,   11,  410,    2, 0x0a /* Public */,
      23,   10,  433,    2, 0x2a /* Public | MethodCloned */,
      23,    9,  454,    2, 0x2a /* Public | MethodCloned */,
      23,    8,  473,    2, 0x2a /* Public | MethodCloned */,
      23,    7,  490,    2, 0x2a /* Public | MethodCloned */,
      23,    6,  505,    2, 0x2a /* Public | MethodCloned */,
      23,    5,  518,    2, 0x2a /* Public | MethodCloned */,
      23,    4,  529,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  538,    2, 0x2a /* Public | MethodCloned */,
      23,    2,  545,    2, 0x2a /* Public | MethodCloned */,
      35,    3,  550,    2, 0x0a /* Public */,
      39,    0,  557,    2, 0x0a /* Public */,
      40,    2,  558,    2, 0x0a /* Public */,
      42,    1,  563,    2, 0x0a /* Public */,
      44,    0,  566,    2, 0x0a /* Public */,
      45,    1,  567,    2, 0x0a /* Public */,
      47,    0,  570,    2, 0x0a /* Public */,
      48,    0,  571,    2, 0x0a /* Public */,
      49,    0,  572,    2, 0x0a /* Public */,
      50,    1,  573,    2, 0x0a /* Public */,
      51,    1,  576,    2, 0x0a /* Public */,
      53,    1,  579,    2, 0x0a /* Public */,
      54,    0,  582,    2, 0x0a /* Public */,
      55,    1,  583,    2, 0x0a /* Public */,
      56,    0,  586,    2, 0x0a /* Public */,
      57,    1,  587,    2, 0x0a /* Public */,
      58,    1,  590,    2, 0x0a /* Public */,
      59,    1,  593,    2, 0x0a /* Public */,
      60,    3,  596,    2, 0x0a /* Public */,
      60,    2,  603,    2, 0x2a /* Public | MethodCloned */,
      64,    1,  608,    2, 0x0a /* Public */,
      65,    1,  611,    2, 0x0a /* Public */,
      67,    1,  614,    2, 0x0a /* Public */,
      68,    1,  617,    2, 0x0a /* Public */,
      70,    0,  620,    2, 0x0a /* Public */,
      71,    2,  621,    2, 0x0a /* Public */,
      74,    2,  626,    2, 0x0a /* Public */,
      77,    0,  631,    2, 0x0a /* Public */,
      78,    0,  632,    2, 0x0a /* Public */,
      79,    0,  633,    2, 0x0a /* Public */,
      80,    1,  634,    2, 0x0a /* Public */,
      83,    0,  637,    2, 0x0a /* Public */,
      84,    0,  638,    2, 0x0a /* Public */,
      85,    0,  639,    2, 0x0a /* Public */,
      86,    0,  640,    2, 0x0a /* Public */,
      87,    0,  641,    2, 0x0a /* Public */,
      88,    3,  642,    2, 0x0a /* Public */,
      92,    1,  649,    2, 0x0a /* Public */,
      93,    0,  652,    2, 0x08 /* Private */,
      94,    3,  653,    2, 0x08 /* Private */,
      99,    2,  660,    2, 0x08 /* Private */,
     104,    1,  665,    2, 0x08 /* Private */,
     106,    3,  668,    2, 0x08 /* Private */,
     112,    1,  675,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QByteArray,   22,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,   29,   30,   31,   32,   33,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,   29,   30,   31,   32,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,   29,   30,   31,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,   28,   29,   30,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int,   24,   25,   26,   27,   28,   29,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   24,   25,   26,   27,   28,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,   24,   25,   26,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   24,   25,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   36,   37,   38,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QObjectStar,   24,   41,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 61, QMetaType::Float,   16,   62,   63,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 61,   16,   62,
    QMetaType::Bool, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Double,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QUrl,   72,   73,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   76,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QVariant, QMetaType::Int, QMetaType::Int, QMetaType::Int,   89,   90,   91,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 95, QMetaType::Double, QMetaType::Double,   96,   97,   98,
    QMetaType::Void, 0x80000000 | 100, 0x80000000 | 102,  101,  103,
    QMetaType::Void, 0x80000000 | 105,   13,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 108, 0x80000000 | 110,  107,  109,  111,
    QMetaType::Void, QMetaType::Int,   66,

 // properties: name, type, flags
     113, QMetaType::Bool, 0x00495001,
     114, QMetaType::Bool, 0x00095401,
     115, 0x80000000 | 116, 0x00095409,
     117, QMetaType::Bool, 0x00095003,
     118, QMetaType::Bool, 0x00495001,
     119, QMetaType::Bool, 0x00095003,
     120, QMetaType::Bool, 0x00095103,
     121, QMetaType::Bool, 0x00095103,
     122, QMetaType::Int, 0x00095103,
     123, QMetaType::Int, 0x00095103,
      16, QMetaType::QString, 0x00495001,
     124, QMetaType::Bool, 0x00495001,
     125, QMetaType::Bool, 0x00095401,
     126, QMetaType::QString, 0x00495801,
     127, QMetaType::QString, 0x00495801,
     128, QMetaType::Int, 0x00495001,
     129, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       6,
       0,
       0,
       0,
       7,
       0,
       0,
       0,
       0,
       0,
       2,
       3,
       0,
       4,
       4,
       5,
       9,

       0        // eod
};

void Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->connectionChanged(); break;
        case 2: _t->filePathChanged(); break;
        case 3: _t->sendIsFileOpening(); break;
        case 4: _t->channelListUpdated(); break;
        case 5: _t->dataProcessorStateChanged(); break;
        case 6: _t->isGPSAliveChanged(); break;
        case 7: _t->loggingKlfChanged(); break;
        case 8: _t->scrrenModeChanged(); break;
        case 9: _t->currentMapLevelChanged(); break;
        case 10: _t->setIsGPSAlive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getIsGPSAlive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->openLogFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->openLogFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->openLogFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: { bool _r = _t->closeLogFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->onFileOpened(); break;
        case 17: { bool _r = _t->openXTF((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->openCSV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->openProxy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->closeProxy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->upgradeFW((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->upgradeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: { bool _r = _t->getKlfLogging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setKlfLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: { bool _r = _t->getFixBlackStripesState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->getFixBlackStripesForwardSteps();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { int _r = _t->getFixBlackStripesBackwardSteps();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setFixBlackStripesState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setFixBlackStripesForwardSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->setFixBlackStripesBackwardSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: { bool _r = _t->getCsvLogging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->setCsvLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: { bool _r = _t->getUseGPS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setUseGPS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: { bool _r = _t->exportComplexToCSV((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->exportUSBLToCSV((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->exportPlotAsCVS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->exportPlotAsCVS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->exportPlotAsXTF((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setPlotStartLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->setPlotStopLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->setTimelinePosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: _t->resetAim(); break;
        case 53: _t->UILoad((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 54: _t->setMosaicChannels((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 55: { bool _r = _t->getIsFileOpening();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: { bool _r = _t->getIsSeparateReading();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->onChannelsUpdated(); break;
        case 58: _t->onRedrawEpochs((*reinterpret_cast< const QSet<int>(*)>(_a[1]))); break;
        case 59: { int _r = _t->getDataProcessorState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->initStreamList(); break;
        case 61: { int _r = _t->getCurrMapLevel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 62: { QString _r = _t->getChannel1Name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 63: { QString _r = _t->getChannel2Name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QVariant _r = _t->getConvertedMousePos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setIsAttitudeExpected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->onFileStopsOpening(); break;
        case 67: _t->onFileStopsOpening_CSV((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 68: _t->onSendMapTextureIdByTileIndx((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 69: _t->onDataProcesstorStateChanged((*reinterpret_cast< const DataProcessorType(*)>(_a[1]))); break;
        case 70: _t->onSendFrameInputToLogger((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< const Parsers::FrameParser(*)>(_a[3]))); break;
        case 71: _t->onZoomLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<int> >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 70:
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
            using _t = void (Core::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::connectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::filePathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::sendIsFileOpening)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::channelListUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::dataProcessorStateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::isGPSAliveChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::loggingKlfChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::scrrenModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::currentMapLevelChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConsoleListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsGPSAlive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isFactoryMode(); break;
        case 2: *reinterpret_cast< ConsoleListModel**>(_v) = _t->consoleList(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getKlfLogging(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getKlfLogging(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getCsvLogging(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getUseGPS(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getFixBlackStripesState(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getFixBlackStripesForwardSteps(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getFixBlackStripesBackwardSteps(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getFilePath(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getIsFileOpening(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getIsSeparateReading(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->getChannel1Name(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getChannel2Name(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getDataProcessorState(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getCurrMapLevel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setKlfLogging(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setCsvLogging(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setUseGPS(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setFixBlackStripesState(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setFixBlackStripesForwardSteps(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setFixBlackStripesBackwardSteps(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Core::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Core.data,
    qt_meta_data_Core,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Core::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Core.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Core::connectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void Core::filePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Core::sendIsFileOpening()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Core::channelListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Core::dataProcessorStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Core::isGPSAliveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Core::loggingKlfChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Core::scrrenModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Core::currentMapLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
