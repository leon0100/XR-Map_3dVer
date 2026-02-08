/****************************************************************************
** Meta object code from reading C++ file 'data_processor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/data_processor/data_processor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_processor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataProcessor_t {
    QByteArrayData data[117];
    char stringdata0[1818];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataProcessor_t qt_meta_stringdata_DataProcessor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataProcessor"
QT_MOC_LITERAL(1, 14, 9), // "sendState"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "DataProcessorType"
QT_MOC_LITERAL(4, 43, 5), // "state"
QT_MOC_LITERAL(5, 49, 28), // "bottomTrackProcessingCleared"
QT_MOC_LITERAL(6, 78, 25), // "isobathsProcessingCleared"
QT_MOC_LITERAL(7, 104, 23), // "mosaicProcessingCleared"
QT_MOC_LITERAL(8, 128, 24), // "surfaceProcessingCleared"
QT_MOC_LITERAL(9, 153, 20), // "allProcessingCleared"
QT_MOC_LITERAL(10, 174, 25), // "distCompletedByProcessing"
QT_MOC_LITERAL(11, 200, 6), // "epIndx"
QT_MOC_LITERAL(12, 207, 9), // "ChannelId"
QT_MOC_LITERAL(13, 217, 9), // "channelId"
QT_MOC_LITERAL(14, 227, 4), // "dist"
QT_MOC_LITERAL(15, 232, 27), // "lastBottomTrackEpochChanged"
QT_MOC_LITERAL(16, 260, 3), // "val"
QT_MOC_LITERAL(17, 264, 16), // "BottomTrackParam"
QT_MOC_LITERAL(18, 281, 3), // "btP"
QT_MOC_LITERAL(19, 285, 6), // "manual"
QT_MOC_LITERAL(20, 292, 9), // "redrawAll"
QT_MOC_LITERAL(21, 302, 15), // "sendSurfaceMinZ"
QT_MOC_LITERAL(22, 318, 4), // "minZ"
QT_MOC_LITERAL(23, 323, 15), // "sendSurfaceMaxZ"
QT_MOC_LITERAL(24, 339, 4), // "maxZ"
QT_MOC_LITERAL(25, 344, 22), // "sendSurfaceTextureTask"
QT_MOC_LITERAL(26, 367, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(27, 388, 11), // "textureTask"
QT_MOC_LITERAL(28, 400, 29), // "sendSurfaceColorIntervalsSize"
QT_MOC_LITERAL(29, 430, 4), // "size"
QT_MOC_LITERAL(30, 435, 19), // "sendSurfaceStepSize"
QT_MOC_LITERAL(31, 455, 12), // "lineStepSize"
QT_MOC_LITERAL(32, 468, 18), // "sendIsobathsLabels"
QT_MOC_LITERAL(33, 487, 38), // "QVector<IsobathUtils::LabelPa..."
QT_MOC_LITERAL(34, 526, 6), // "labels"
QT_MOC_LITERAL(35, 533, 24), // "sendIsobathsLineSegments"
QT_MOC_LITERAL(36, 558, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(37, 577, 12), // "lineSegments"
QT_MOC_LITERAL(38, 590, 15), // "sendIsobathsPts"
QT_MOC_LITERAL(39, 606, 3), // "pts"
QT_MOC_LITERAL(40, 610, 19), // "sendIsobathsEdgePts"
QT_MOC_LITERAL(41, 630, 7), // "edgePts"
QT_MOC_LITERAL(42, 638, 24), // "sendIsobathsLineStepSize"
QT_MOC_LITERAL(43, 663, 20), // "sendMosaicColorTable"
QT_MOC_LITERAL(44, 684, 10), // "colorTable"
QT_MOC_LITERAL(45, 695, 16), // "sendSurfaceTiles"
QT_MOC_LITERAL(46, 712, 7), // "TileMap"
QT_MOC_LITERAL(47, 720, 5), // "tiles"
QT_MOC_LITERAL(48, 726, 11), // "useTextures"
QT_MOC_LITERAL(49, 738, 17), // "setBottomTrackPtr"
QT_MOC_LITERAL(50, 756, 12), // "BottomTrack*"
QT_MOC_LITERAL(51, 769, 14), // "bottomTrackPtr"
QT_MOC_LITERAL(52, 784, 15), // "clearProcessing"
QT_MOC_LITERAL(53, 800, 20), // "setUpdateBottomTrack"
QT_MOC_LITERAL(54, 821, 17), // "setUpdateIsobaths"
QT_MOC_LITERAL(55, 839, 15), // "setUpdateMosaic"
QT_MOC_LITERAL(56, 855, 16), // "setIsOpeningFile"
QT_MOC_LITERAL(57, 872, 13), // "onChartsAdded"
QT_MOC_LITERAL(58, 886, 8), // "uint64_t"
QT_MOC_LITERAL(59, 895, 4), // "indx"
QT_MOC_LITERAL(60, 900, 20), // "onBottomTrack3DAdded"
QT_MOC_LITERAL(61, 921, 12), // "QVector<int>"
QT_MOC_LITERAL(62, 934, 7), // "epIndxs"
QT_MOC_LITERAL(63, 942, 9), // "vertIndxs"
QT_MOC_LITERAL(64, 952, 12), // "onEpochAdded"
QT_MOC_LITERAL(65, 965, 15), // "onPositionAdded"
QT_MOC_LITERAL(66, 981, 15), // "onAttitudeAdded"
QT_MOC_LITERAL(67, 997, 15), // "onMosaicCanCalc"
QT_MOC_LITERAL(68, 1013, 21), // "bottomTrackProcessing"
QT_MOC_LITERAL(69, 1035, 14), // "DatasetChannel"
QT_MOC_LITERAL(70, 1050, 8), // "channel1"
QT_MOC_LITERAL(71, 1059, 8), // "channel2"
QT_MOC_LITERAL(72, 1068, 16), // "bottomTrackParam"
QT_MOC_LITERAL(73, 1085, 29), // "setSurfaceColorTableThemeById"
QT_MOC_LITERAL(74, 1115, 2), // "id"
QT_MOC_LITERAL(75, 1118, 19), // "setSurfaceEdgeLimit"
QT_MOC_LITERAL(76, 1138, 13), // "setExtraWidth"
QT_MOC_LITERAL(77, 1152, 24), // "setIsobathsLabelStepSize"
QT_MOC_LITERAL(78, 1177, 26), // "setSurfaceIsobathsStepSize"
QT_MOC_LITERAL(79, 1204, 17), // "setMosaicChannels"
QT_MOC_LITERAL(80, 1222, 3), // "ch1"
QT_MOC_LITERAL(81, 1226, 7), // "uint8_t"
QT_MOC_LITERAL(82, 1234, 4), // "sub1"
QT_MOC_LITERAL(83, 1239, 3), // "ch2"
QT_MOC_LITERAL(84, 1243, 4), // "sub2"
QT_MOC_LITERAL(85, 1248, 14), // "setMosaicTheme"
QT_MOC_LITERAL(86, 1263, 21), // "setMosaicLAngleOffset"
QT_MOC_LITERAL(87, 1285, 21), // "setMosaicRAngleOffset"
QT_MOC_LITERAL(88, 1307, 23), // "setMosaicTileResolution"
QT_MOC_LITERAL(89, 1331, 15), // "setMosaicLevels"
QT_MOC_LITERAL(90, 1347, 8), // "lowLevel"
QT_MOC_LITERAL(91, 1356, 9), // "highLevel"
QT_MOC_LITERAL(92, 1366, 17), // "setMosaicLowLevel"
QT_MOC_LITERAL(93, 1384, 18), // "setMosaicHighLevel"
QT_MOC_LITERAL(94, 1403, 22), // "askColorTableForMosaic"
QT_MOC_LITERAL(95, 1426, 17), // "onIsobathsUpdated"
QT_MOC_LITERAL(96, 1444, 15), // "onMosaicUpdated"
QT_MOC_LITERAL(97, 1460, 13), // "requestCancel"
QT_MOC_LITERAL(98, 1474, 16), // "runCoalescedWork"
QT_MOC_LITERAL(99, 1491, 18), // "startTimerIfNeeded"
QT_MOC_LITERAL(100, 1510, 16), // "onWorkerFinished"
QT_MOC_LITERAL(101, 1527, 9), // "postState"
QT_MOC_LITERAL(102, 1537, 1), // "s"
QT_MOC_LITERAL(103, 1539, 29), // "postDistCompletedByProcessing"
QT_MOC_LITERAL(104, 1569, 31), // "postLastBottomTrackEpochChanged"
QT_MOC_LITERAL(105, 1601, 16), // "postSurfaceTiles"
QT_MOC_LITERAL(106, 1618, 8), // "postMinZ"
QT_MOC_LITERAL(107, 1627, 8), // "postMaxZ"
QT_MOC_LITERAL(108, 1636, 21), // "postSurfaceColorTable"
QT_MOC_LITERAL(109, 1658, 1), // "t"
QT_MOC_LITERAL(110, 1660, 29), // "postSurfaceColorIntervalsSize"
QT_MOC_LITERAL(111, 1690, 19), // "postSurfaceStepSize"
QT_MOC_LITERAL(112, 1710, 20), // "postMosaicColorTable"
QT_MOC_LITERAL(113, 1731, 18), // "postIsobathsLabels"
QT_MOC_LITERAL(114, 1750, 24), // "postIsobathsLineSegments"
QT_MOC_LITERAL(115, 1775, 20), // "onBottomTrackStarted"
QT_MOC_LITERAL(116, 1796, 21) // "onBottomTrackFinished"

    },
    "DataProcessor\0sendState\0\0DataProcessorType\0"
    "state\0bottomTrackProcessingCleared\0"
    "isobathsProcessingCleared\0"
    "mosaicProcessingCleared\0"
    "surfaceProcessingCleared\0allProcessingCleared\0"
    "distCompletedByProcessing\0epIndx\0"
    "ChannelId\0channelId\0dist\0"
    "lastBottomTrackEpochChanged\0val\0"
    "BottomTrackParam\0btP\0manual\0redrawAll\0"
    "sendSurfaceMinZ\0minZ\0sendSurfaceMaxZ\0"
    "maxZ\0sendSurfaceTextureTask\0"
    "std::vector<uint8_t>\0textureTask\0"
    "sendSurfaceColorIntervalsSize\0size\0"
    "sendSurfaceStepSize\0lineStepSize\0"
    "sendIsobathsLabels\0"
    "QVector<IsobathUtils::LabelParameters>\0"
    "labels\0sendIsobathsLineSegments\0"
    "QVector<QVector3D>\0lineSegments\0"
    "sendIsobathsPts\0pts\0sendIsobathsEdgePts\0"
    "edgePts\0sendIsobathsLineStepSize\0"
    "sendMosaicColorTable\0colorTable\0"
    "sendSurfaceTiles\0TileMap\0tiles\0"
    "useTextures\0setBottomTrackPtr\0"
    "BottomTrack*\0bottomTrackPtr\0clearProcessing\0"
    "setUpdateBottomTrack\0setUpdateIsobaths\0"
    "setUpdateMosaic\0setIsOpeningFile\0"
    "onChartsAdded\0uint64_t\0indx\0"
    "onBottomTrack3DAdded\0QVector<int>\0"
    "epIndxs\0vertIndxs\0onEpochAdded\0"
    "onPositionAdded\0onAttitudeAdded\0"
    "onMosaicCanCalc\0bottomTrackProcessing\0"
    "DatasetChannel\0channel1\0channel2\0"
    "bottomTrackParam\0setSurfaceColorTableThemeById\0"
    "id\0setSurfaceEdgeLimit\0setExtraWidth\0"
    "setIsobathsLabelStepSize\0"
    "setSurfaceIsobathsStepSize\0setMosaicChannels\0"
    "ch1\0uint8_t\0sub1\0ch2\0sub2\0setMosaicTheme\0"
    "setMosaicLAngleOffset\0setMosaicRAngleOffset\0"
    "setMosaicTileResolution\0setMosaicLevels\0"
    "lowLevel\0highLevel\0setMosaicLowLevel\0"
    "setMosaicHighLevel\0askColorTableForMosaic\0"
    "onIsobathsUpdated\0onMosaicUpdated\0"
    "requestCancel\0runCoalescedWork\0"
    "startTimerIfNeeded\0onWorkerFinished\0"
    "postState\0s\0postDistCompletedByProcessing\0"
    "postLastBottomTrackEpochChanged\0"
    "postSurfaceTiles\0postMinZ\0postMaxZ\0"
    "postSurfaceColorTable\0t\0"
    "postSurfaceColorIntervalsSize\0"
    "postSurfaceStepSize\0postMosaicColorTable\0"
    "postIsobathsLabels\0postIsobathsLineSegments\0"
    "onBottomTrackStarted\0onBottomTrackFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataProcessor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  354,    2, 0x06 /* Public */,
       5,    0,  357,    2, 0x06 /* Public */,
       6,    0,  358,    2, 0x06 /* Public */,
       7,    0,  359,    2, 0x06 /* Public */,
       8,    0,  360,    2, 0x06 /* Public */,
       9,    0,  361,    2, 0x06 /* Public */,
      10,    3,  362,    2, 0x06 /* Public */,
      15,    5,  369,    2, 0x06 /* Public */,
      21,    1,  380,    2, 0x06 /* Public */,
      23,    1,  383,    2, 0x06 /* Public */,
      25,    1,  386,    2, 0x06 /* Public */,
      28,    1,  389,    2, 0x06 /* Public */,
      30,    1,  392,    2, 0x06 /* Public */,
      32,    1,  395,    2, 0x06 /* Public */,
      35,    1,  398,    2, 0x06 /* Public */,
      38,    1,  401,    2, 0x06 /* Public */,
      40,    1,  404,    2, 0x06 /* Public */,
      42,    1,  407,    2, 0x06 /* Public */,
      43,    1,  410,    2, 0x06 /* Public */,
      45,    2,  413,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      49,    1,  418,    2, 0x0a /* Public */,
      52,    1,  421,    2, 0x0a /* Public */,
      52,    0,  424,    2, 0x2a /* Public | MethodCloned */,
      53,    1,  425,    2, 0x0a /* Public */,
      54,    1,  428,    2, 0x0a /* Public */,
      55,    1,  431,    2, 0x0a /* Public */,
      56,    1,  434,    2, 0x0a /* Public */,
      57,    1,  437,    2, 0x0a /* Public */,
      60,    3,  440,    2, 0x0a /* Public */,
      64,    1,  447,    2, 0x0a /* Public */,
      65,    1,  450,    2, 0x0a /* Public */,
      66,    1,  453,    2, 0x0a /* Public */,
      67,    1,  456,    2, 0x0a /* Public */,
      68,    5,  459,    2, 0x0a /* Public */,
      73,    1,  470,    2, 0x0a /* Public */,
      75,    1,  473,    2, 0x0a /* Public */,
      76,    1,  476,    2, 0x0a /* Public */,
      77,    1,  479,    2, 0x0a /* Public */,
      78,    1,  482,    2, 0x0a /* Public */,
      79,    4,  485,    2, 0x0a /* Public */,
      85,    1,  494,    2, 0x0a /* Public */,
      86,    1,  497,    2, 0x0a /* Public */,
      87,    1,  500,    2, 0x0a /* Public */,
      88,    1,  503,    2, 0x0a /* Public */,
      89,    2,  506,    2, 0x0a /* Public */,
      92,    1,  511,    2, 0x0a /* Public */,
      93,    1,  514,    2, 0x0a /* Public */,
      94,    0,  517,    2, 0x0a /* Public */,
      95,    0,  518,    2, 0x0a /* Public */,
      96,    0,  519,    2, 0x0a /* Public */,
      97,    0,  520,    2, 0x0a /* Public */,
      98,    0,  521,    2, 0x08 /* Private */,
      99,    0,  522,    2, 0x08 /* Private */,
     100,    0,  523,    2, 0x08 /* Private */,
     101,    1,  524,    2, 0x08 /* Private */,
     103,    3,  527,    2, 0x08 /* Private */,
     104,    5,  534,    2, 0x08 /* Private */,
     105,    2,  545,    2, 0x08 /* Private */,
     106,    1,  550,    2, 0x08 /* Private */,
     107,    1,  553,    2, 0x08 /* Private */,
     108,    1,  556,    2, 0x08 /* Private */,
     110,    1,  559,    2, 0x08 /* Private */,
     111,    1,  562,    2, 0x08 /* Private */,
     112,    1,  565,    2, 0x08 /* Private */,
     113,    1,  568,    2, 0x08 /* Private */,
     114,    1,  571,    2, 0x08 /* Private */,
     115,    0,  574,    2, 0x08 /* Private */,
     116,    0,  575,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::Float,   11,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, 0x80000000 | 17, QMetaType::Bool, QMetaType::Bool,   13,   16,   18,   19,   20,
    QMetaType::Void, QMetaType::Float,   22,
    QMetaType::Void, QMetaType::Float,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 36,   39,
    QMetaType::Void, 0x80000000 | 36,   41,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, 0x80000000 | 26,   44,
    QMetaType::Void, 0x80000000 | 46, QMetaType::Bool,   47,   48,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 61, 0x80000000 | 61, QMetaType::Bool,   62,   63,   19,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 69, 0x80000000 | 69, 0x80000000 | 17, QMetaType::Bool, QMetaType::Bool,   70,   71,   72,   19,   20,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 81, 0x80000000 | 12, 0x80000000 | 81,   80,   82,   83,   84,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   90,   91,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  102,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::Float,   11,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, 0x80000000 | 17, QMetaType::Bool, QMetaType::Bool,   13,   16,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 46, QMetaType::Bool,   47,   48,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, 0x80000000 | 26,  109,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Float,   31,
    QMetaType::Void, 0x80000000 | 26,  109,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendState((*reinterpret_cast< DataProcessorType(*)>(_a[1]))); break;
        case 1: _t->bottomTrackProcessingCleared(); break;
        case 2: _t->isobathsProcessingCleared(); break;
        case 3: _t->mosaicProcessingCleared(); break;
        case 4: _t->surfaceProcessingCleared(); break;
        case 5: _t->allProcessingCleared(); break;
        case 6: _t->distCompletedByProcessing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->lastBottomTrackEpochChanged((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const BottomTrackParam(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 8: _t->sendSurfaceMinZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->sendSurfaceMaxZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->sendSurfaceTextureTask((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 11: _t->sendSurfaceColorIntervalsSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sendSurfaceStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->sendIsobathsLabels((*reinterpret_cast< const QVector<IsobathUtils::LabelParameters>(*)>(_a[1]))); break;
        case 14: _t->sendIsobathsLineSegments((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 15: _t->sendIsobathsPts((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 16: _t->sendIsobathsEdgePts((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 17: _t->sendIsobathsLineStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->sendMosaicColorTable((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 19: _t->sendSurfaceTiles((*reinterpret_cast< const TileMap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setBottomTrackPtr((*reinterpret_cast< BottomTrack*(*)>(_a[1]))); break;
        case 21: _t->clearProcessing((*reinterpret_cast< DataProcessorType(*)>(_a[1]))); break;
        case 22: _t->clearProcessing(); break;
        case 23: _t->setUpdateBottomTrack((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setUpdateIsobaths((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setUpdateMosaic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setIsOpeningFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->onChartsAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 28: _t->onBottomTrack3DAdded((*reinterpret_cast< const QVector<int>(*)>(_a[1])),(*reinterpret_cast< const QVector<int>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->onEpochAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 30: _t->onPositionAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 31: _t->onAttitudeAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 32: _t->onMosaicCanCalc((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 33: _t->bottomTrackProcessing((*reinterpret_cast< const DatasetChannel(*)>(_a[1])),(*reinterpret_cast< const DatasetChannel(*)>(_a[2])),(*reinterpret_cast< const BottomTrackParam(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 34: _t->setSurfaceColorTableThemeById((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setSurfaceEdgeLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setExtraWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setIsobathsLabelStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 38: _t->setSurfaceIsobathsStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setMosaicChannels((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< const ChannelId(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 40: _t->setMosaicTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->setMosaicLAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->setMosaicRAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setMosaicTileResolution((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 44: _t->setMosaicLevels((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 45: _t->setMosaicLowLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 46: _t->setMosaicHighLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 47: _t->askColorTableForMosaic(); break;
        case 48: _t->onIsobathsUpdated(); break;
        case 49: _t->onMosaicUpdated(); break;
        case 50: _t->requestCancel(); break;
        case 51: _t->runCoalescedWork(); break;
        case 52: _t->startTimerIfNeeded(); break;
        case 53: _t->onWorkerFinished(); break;
        case 54: _t->postState((*reinterpret_cast< DataProcessorType(*)>(_a[1]))); break;
        case 55: _t->postDistCompletedByProcessing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 56: _t->postLastBottomTrackEpochChanged((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const BottomTrackParam(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 57: _t->postSurfaceTiles((*reinterpret_cast< const TileMap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 58: _t->postMinZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->postMaxZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->postSurfaceColorTable((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 61: _t->postSurfaceColorIntervalsSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->postSurfaceStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 63: _t->postMosaicColorTable((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 64: _t->postIsobathsLabels((*reinterpret_cast< const QVector<IsobathUtils::LabelParameters>(*)>(_a[1]))); break;
        case 65: _t->postIsobathsLineSegments((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 66: _t->onBottomTrackStarted(); break;
        case 67: _t->onBottomTrackFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatasetChannel >(); break;
            }
            break;
        case 65:
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
            using _t = void (DataProcessor::*)(DataProcessorType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::bottomTrackProcessingCleared)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::isobathsProcessingCleared)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::mosaicProcessingCleared)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::surfaceProcessingCleared)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::allProcessingCleared)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(int , const ChannelId & , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::distCompletedByProcessing)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const ChannelId & , int , const BottomTrackParam & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::lastBottomTrackEpochChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceMinZ)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceMaxZ)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceTextureTask)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceColorIntervalsSize)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceStepSize)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const QVector<IsobathUtils::LabelParameters> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendIsobathsLabels)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const QVector<QVector3D> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendIsobathsLineSegments)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const QVector<QVector3D> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendIsobathsPts)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const QVector<QVector3D> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendIsobathsEdgePts)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendIsobathsLineStepSize)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendMosaicColorTable)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)(const TileMap & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessor::sendSurfaceTiles)) {
                *result = 19;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataProcessor.data,
    qt_meta_data_DataProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    }
    return _id;
}

// SIGNAL 0
void DataProcessor::sendState(DataProcessorType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataProcessor::bottomTrackProcessingCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataProcessor::isobathsProcessingCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DataProcessor::mosaicProcessingCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DataProcessor::surfaceProcessingCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DataProcessor::allProcessingCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DataProcessor::distCompletedByProcessing(int _t1, const ChannelId & _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataProcessor::lastBottomTrackEpochChanged(const ChannelId & _t1, int _t2, const BottomTrackParam & _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataProcessor::sendSurfaceMinZ(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DataProcessor::sendSurfaceMaxZ(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DataProcessor::sendSurfaceTextureTask(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DataProcessor::sendSurfaceColorIntervalsSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DataProcessor::sendSurfaceStepSize(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DataProcessor::sendIsobathsLabels(const QVector<IsobathUtils::LabelParameters> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DataProcessor::sendIsobathsLineSegments(const QVector<QVector3D> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DataProcessor::sendIsobathsPts(const QVector<QVector3D> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DataProcessor::sendIsobathsEdgePts(const QVector<QVector3D> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DataProcessor::sendIsobathsLineStepSize(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DataProcessor::sendMosaicColorTable(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DataProcessor::sendSurfaceTiles(const TileMap & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
