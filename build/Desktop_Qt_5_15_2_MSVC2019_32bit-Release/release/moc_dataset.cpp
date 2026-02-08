/****************************************************************************
** Meta object code from reading C++ file 'dataset.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/dataset.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dataset_t {
    QByteArrayData data[149];
    char stringdata0[1865];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dataset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dataset_t qt_meta_stringdata_Dataset = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Dataset"
QT_MOC_LITERAL(1, 8, 10), // "epochAdded"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "uint64_t"
QT_MOC_LITERAL(4, 29, 4), // "indx"
QT_MOC_LITERAL(5, 34, 13), // "positionAdded"
QT_MOC_LITERAL(6, 48, 10), // "chartAdded"
QT_MOC_LITERAL(7, 59, 13), // "attitudeAdded"
QT_MOC_LITERAL(8, 73, 16), // "bottomTrackAdded"
QT_MOC_LITERAL(9, 90, 10), // "dataUpdate"
QT_MOC_LITERAL(10, 101, 18), // "bottomTrackUpdated"
QT_MOC_LITERAL(11, 120, 9), // "ChannelId"
QT_MOC_LITERAL(12, 130, 9), // "channelId"
QT_MOC_LITERAL(13, 140, 6), // "lEpoch"
QT_MOC_LITERAL(14, 147, 6), // "rEpoch"
QT_MOC_LITERAL(15, 154, 6), // "manual"
QT_MOC_LITERAL(16, 161, 9), // "redrawAll"
QT_MOC_LITERAL(17, 171, 13), // "updatedLlaRef"
QT_MOC_LITERAL(18, 185, 15), // "channelsUpdated"
QT_MOC_LITERAL(19, 201, 12), // "redrawEpochs"
QT_MOC_LITERAL(20, 214, 9), // "QSet<int>"
QT_MOC_LITERAL(21, 224, 5), // "indxs"
QT_MOC_LITERAL(22, 230, 19), // "lastPositionChanged"
QT_MOC_LITERAL(23, 250, 20), // "activeContactChanged"
QT_MOC_LITERAL(24, 271, 16), // "lastDepthChanged"
QT_MOC_LITERAL(25, 288, 12), // "speedChanged"
QT_MOC_LITERAL(26, 301, 17), // "onSonarPosCanCalc"
QT_MOC_LITERAL(27, 319, 24), // "isValidActiveContactIndx"
QT_MOC_LITERAL(28, 344, 21), // "isValidBoatCoordinate"
QT_MOC_LITERAL(29, 366, 16), // "isValidLastDepth"
QT_MOC_LITERAL(30, 383, 12), // "isValidSpeed"
QT_MOC_LITERAL(31, 396, 15), // "getBoatLatitude"
QT_MOC_LITERAL(32, 412, 16), // "getBoatLongitude"
QT_MOC_LITERAL(33, 429, 16), // "getDistToContact"
QT_MOC_LITERAL(34, 446, 17), // "getAngleToContact"
QT_MOC_LITERAL(35, 464, 12), // "getLastDepth"
QT_MOC_LITERAL(36, 477, 8), // "getSpeed"
QT_MOC_LITERAL(37, 486, 8), // "addEvent"
QT_MOC_LITERAL(38, 495, 9), // "timestamp"
QT_MOC_LITERAL(39, 505, 2), // "id"
QT_MOC_LITERAL(40, 508, 5), // "unixt"
QT_MOC_LITERAL(41, 514, 10), // "addEncoder"
QT_MOC_LITERAL(42, 525, 10), // "angle1_deg"
QT_MOC_LITERAL(43, 536, 10), // "angle2_deg"
QT_MOC_LITERAL(44, 547, 10), // "angle3_deg"
QT_MOC_LITERAL(45, 558, 12), // "addTimestamp"
QT_MOC_LITERAL(46, 571, 13), // "setChartSetup"
QT_MOC_LITERAL(47, 585, 8), // "uint16_t"
QT_MOC_LITERAL(48, 594, 5), // "resol"
QT_MOC_LITERAL(49, 600, 5), // "count"
QT_MOC_LITERAL(50, 606, 6), // "offset"
QT_MOC_LITERAL(51, 613, 14), // "setTranscSetup"
QT_MOC_LITERAL(52, 628, 4), // "freq"
QT_MOC_LITERAL(53, 633, 7), // "uint8_t"
QT_MOC_LITERAL(54, 641, 5), // "pulse"
QT_MOC_LITERAL(55, 647, 5), // "boost"
QT_MOC_LITERAL(56, 653, 13), // "setSoundSpeed"
QT_MOC_LITERAL(57, 667, 8), // "uint32_t"
QT_MOC_LITERAL(58, 676, 10), // "soundSpeed"
QT_MOC_LITERAL(59, 687, 14), // "setSonarOffset"
QT_MOC_LITERAL(60, 702, 1), // "x"
QT_MOC_LITERAL(61, 704, 1), // "y"
QT_MOC_LITERAL(62, 706, 1), // "z"
QT_MOC_LITERAL(63, 708, 23), // "setFixBlackStripesState"
QT_MOC_LITERAL(64, 732, 5), // "state"
QT_MOC_LITERAL(65, 738, 30), // "setFixBlackStripesForwardSteps"
QT_MOC_LITERAL(66, 769, 3), // "val"
QT_MOC_LITERAL(67, 773, 31), // "setFixBlackStripesBackwardSteps"
QT_MOC_LITERAL(68, 805, 8), // "addChart"
QT_MOC_LITERAL(69, 814, 15), // "ChartParameters"
QT_MOC_LITERAL(70, 830, 11), // "chartParams"
QT_MOC_LITERAL(71, 842, 26), // "QVector<QVector<uint8_t> >"
QT_MOC_LITERAL(72, 869, 4), // "data"
QT_MOC_LITERAL(73, 874, 10), // "resolution"
QT_MOC_LITERAL(74, 885, 15), // "rawDataRecieved"
QT_MOC_LITERAL(75, 901, 7), // "RawData"
QT_MOC_LITERAL(76, 909, 8), // "raw_data"
QT_MOC_LITERAL(77, 918, 7), // "addDist"
QT_MOC_LITERAL(78, 926, 4), // "dist"
QT_MOC_LITERAL(79, 931, 14), // "addRangefinder"
QT_MOC_LITERAL(80, 946, 8), // "distance"
QT_MOC_LITERAL(81, 955, 15), // "addUsblSolution"
QT_MOC_LITERAL(82, 971, 31), // "IDBinUsblSolution::UsblSolution"
QT_MOC_LITERAL(83, 1003, 14), // "addDopplerBeam"
QT_MOC_LITERAL(84, 1018, 23), // "IDBinDVL::BeamSolution*"
QT_MOC_LITERAL(85, 1042, 5), // "beams"
QT_MOC_LITERAL(86, 1048, 3), // "cnt"
QT_MOC_LITERAL(87, 1052, 14), // "addDVLSolution"
QT_MOC_LITERAL(88, 1067, 21), // "IDBinDVL::DVLSolution"
QT_MOC_LITERAL(89, 1089, 11), // "dvlSolution"
QT_MOC_LITERAL(90, 1101, 6), // "addAtt"
QT_MOC_LITERAL(91, 1108, 3), // "yaw"
QT_MOC_LITERAL(92, 1112, 5), // "pitch"
QT_MOC_LITERAL(93, 1118, 4), // "roll"
QT_MOC_LITERAL(94, 1123, 11), // "addPosition"
QT_MOC_LITERAL(95, 1135, 3), // "lat"
QT_MOC_LITERAL(96, 1139, 3), // "lon"
QT_MOC_LITERAL(97, 1143, 9), // "unix_time"
QT_MOC_LITERAL(98, 1153, 7), // "int32_t"
QT_MOC_LITERAL(99, 1161, 7), // "nanosec"
QT_MOC_LITERAL(100, 1169, 15), // "addPosition_CSV"
QT_MOC_LITERAL(101, 1185, 5), // "depth"
QT_MOC_LITERAL(102, 1191, 14), // "addPositionRTK"
QT_MOC_LITERAL(103, 1206, 8), // "Position"
QT_MOC_LITERAL(104, 1215, 8), // "position"
QT_MOC_LITERAL(105, 1224, 8), // "addDepth"
QT_MOC_LITERAL(106, 1233, 15), // "addGnssVelocity"
QT_MOC_LITERAL(107, 1249, 7), // "h_speed"
QT_MOC_LITERAL(108, 1257, 6), // "course"
QT_MOC_LITERAL(109, 1264, 7), // "addTemp"
QT_MOC_LITERAL(110, 1272, 6), // "temp_c"
QT_MOC_LITERAL(111, 1279, 14), // "mergeGnssTrack"
QT_MOC_LITERAL(112, 1294, 15), // "QList<Position>"
QT_MOC_LITERAL(113, 1310, 5), // "track"
QT_MOC_LITERAL(114, 1316, 12), // "resetDataset"
QT_MOC_LITERAL(115, 1329, 18), // "resetRenderBuffers"
QT_MOC_LITERAL(116, 1348, 19), // "resetDistProcessing"
QT_MOC_LITERAL(117, 1368, 16), // "setChannelOffset"
QT_MOC_LITERAL(118, 1385, 17), // "spatialProcessing"
QT_MOC_LITERAL(119, 1403, 14), // "usblProcessing"
QT_MOC_LITERAL(120, 1418, 11), // "beaconTrack"
QT_MOC_LITERAL(121, 1430, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(122, 1449, 12), // "beaconTrack1"
QT_MOC_LITERAL(123, 1462, 10), // "setScene3D"
QT_MOC_LITERAL(124, 1473, 20), // "GraphicsScene3dView*"
QT_MOC_LITERAL(125, 1494, 14), // "scene3dViewPtr"
QT_MOC_LITERAL(126, 1509, 14), // "setRefPosition"
QT_MOC_LITERAL(127, 1524, 11), // "epoch_index"
QT_MOC_LITERAL(128, 1536, 6), // "Epoch*"
QT_MOC_LITERAL(129, 1543, 9), // "ref_epoch"
QT_MOC_LITERAL(130, 1553, 26), // "setRefPositionByFirstValid"
QT_MOC_LITERAL(131, 1580, 28), // "getFirstEpochByValidPosition"
QT_MOC_LITERAL(132, 1609, 16), // "channelsNameList"
QT_MOC_LITERAL(133, 1626, 15), // "interpolateData"
QT_MOC_LITERAL(134, 1642, 9), // "fromStart"
QT_MOC_LITERAL(135, 1652, 15), // "onDistCompleted"
QT_MOC_LITERAL(136, 1668, 6), // "epIndx"
QT_MOC_LITERAL(137, 1675, 29), // "onLastBottomTrackEpochChanged"
QT_MOC_LITERAL(138, 1705, 16), // "BottomTrackParam"
QT_MOC_LITERAL(139, 1722, 3), // "btP"
QT_MOC_LITERAL(140, 1726, 12), // "boatLatitude"
QT_MOC_LITERAL(141, 1739, 13), // "boatLongitude"
QT_MOC_LITERAL(142, 1753, 13), // "distToContact"
QT_MOC_LITERAL(143, 1767, 14), // "angleToContact"
QT_MOC_LITERAL(144, 1782, 24), // "isActiveContactIndxValid"
QT_MOC_LITERAL(145, 1807, 21), // "isBoatCoordinateValid"
QT_MOC_LITERAL(146, 1829, 16), // "isLastDepthValid"
QT_MOC_LITERAL(147, 1846, 12), // "isSpeedValid"
QT_MOC_LITERAL(148, 1859, 5) // "speed"

    },
    "Dataset\0epochAdded\0\0uint64_t\0indx\0"
    "positionAdded\0chartAdded\0attitudeAdded\0"
    "bottomTrackAdded\0dataUpdate\0"
    "bottomTrackUpdated\0ChannelId\0channelId\0"
    "lEpoch\0rEpoch\0manual\0redrawAll\0"
    "updatedLlaRef\0channelsUpdated\0"
    "redrawEpochs\0QSet<int>\0indxs\0"
    "lastPositionChanged\0activeContactChanged\0"
    "lastDepthChanged\0speedChanged\0"
    "onSonarPosCanCalc\0isValidActiveContactIndx\0"
    "isValidBoatCoordinate\0isValidLastDepth\0"
    "isValidSpeed\0getBoatLatitude\0"
    "getBoatLongitude\0getDistToContact\0"
    "getAngleToContact\0getLastDepth\0getSpeed\0"
    "addEvent\0timestamp\0id\0unixt\0addEncoder\0"
    "angle1_deg\0angle2_deg\0angle3_deg\0"
    "addTimestamp\0setChartSetup\0uint16_t\0"
    "resol\0count\0offset\0setTranscSetup\0"
    "freq\0uint8_t\0pulse\0boost\0setSoundSpeed\0"
    "uint32_t\0soundSpeed\0setSonarOffset\0x\0"
    "y\0z\0setFixBlackStripesState\0state\0"
    "setFixBlackStripesForwardSteps\0val\0"
    "setFixBlackStripesBackwardSteps\0"
    "addChart\0ChartParameters\0chartParams\0"
    "QVector<QVector<uint8_t> >\0data\0"
    "resolution\0rawDataRecieved\0RawData\0"
    "raw_data\0addDist\0dist\0addRangefinder\0"
    "distance\0addUsblSolution\0"
    "IDBinUsblSolution::UsblSolution\0"
    "addDopplerBeam\0IDBinDVL::BeamSolution*\0"
    "beams\0cnt\0addDVLSolution\0IDBinDVL::DVLSolution\0"
    "dvlSolution\0addAtt\0yaw\0pitch\0roll\0"
    "addPosition\0lat\0lon\0unix_time\0int32_t\0"
    "nanosec\0addPosition_CSV\0depth\0"
    "addPositionRTK\0Position\0position\0"
    "addDepth\0addGnssVelocity\0h_speed\0"
    "course\0addTemp\0temp_c\0mergeGnssTrack\0"
    "QList<Position>\0track\0resetDataset\0"
    "resetRenderBuffers\0resetDistProcessing\0"
    "setChannelOffset\0spatialProcessing\0"
    "usblProcessing\0beaconTrack\0"
    "QVector<QVector3D>\0beaconTrack1\0"
    "setScene3D\0GraphicsScene3dView*\0"
    "scene3dViewPtr\0setRefPosition\0epoch_index\0"
    "Epoch*\0ref_epoch\0setRefPositionByFirstValid\0"
    "getFirstEpochByValidPosition\0"
    "channelsNameList\0interpolateData\0"
    "fromStart\0onDistCompleted\0epIndx\0"
    "onLastBottomTrackEpochChanged\0"
    "BottomTrackParam\0btP\0boatLatitude\0"
    "boatLongitude\0distToContact\0angleToContact\0"
    "isActiveContactIndxValid\0isBoatCoordinateValid\0"
    "isLastDepthValid\0isSpeedValid\0speed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dataset[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      73,   14, // methods
      10,  638, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  379,    2, 0x06 /* Public */,
       5,    1,  382,    2, 0x06 /* Public */,
       6,    1,  385,    2, 0x06 /* Public */,
       7,    1,  388,    2, 0x06 /* Public */,
       8,    1,  391,    2, 0x06 /* Public */,
       9,    0,  394,    2, 0x06 /* Public */,
      10,    5,  395,    2, 0x06 /* Public */,
      17,    0,  406,    2, 0x06 /* Public */,
      18,    0,  407,    2, 0x06 /* Public */,
      19,    1,  408,    2, 0x06 /* Public */,
      22,    0,  411,    2, 0x06 /* Public */,
      23,    0,  412,    2, 0x06 /* Public */,
      24,    0,  413,    2, 0x06 /* Public */,
      25,    0,  414,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    1,  415,    2, 0x0a /* Public */,
      27,    0,  418,    2, 0x0a /* Public */,
      28,    0,  419,    2, 0x0a /* Public */,
      29,    0,  420,    2, 0x0a /* Public */,
      30,    0,  421,    2, 0x0a /* Public */,
      31,    0,  422,    2, 0x0a /* Public */,
      32,    0,  423,    2, 0x0a /* Public */,
      33,    0,  424,    2, 0x0a /* Public */,
      34,    0,  425,    2, 0x0a /* Public */,
      35,    0,  426,    2, 0x0a /* Public */,
      36,    0,  427,    2, 0x0a /* Public */,
      37,    3,  428,    2, 0x0a /* Public */,
      37,    2,  435,    2, 0x2a /* Public | MethodCloned */,
      41,    3,  440,    2, 0x0a /* Public */,
      41,    2,  447,    2, 0x2a /* Public | MethodCloned */,
      41,    1,  452,    2, 0x2a /* Public | MethodCloned */,
      45,    1,  455,    2, 0x0a /* Public */,
      46,    4,  458,    2, 0x0a /* Public */,
      51,    4,  467,    2, 0x0a /* Public */,
      56,    2,  476,    2, 0x0a /* Public */,
      59,    3,  481,    2, 0x0a /* Public */,
      63,    1,  488,    2, 0x0a /* Public */,
      65,    1,  491,    2, 0x0a /* Public */,
      67,    1,  494,    2, 0x0a /* Public */,
      68,    5,  497,    2, 0x0a /* Public */,
      74,    2,  508,    2, 0x0a /* Public */,
      77,    2,  513,    2, 0x0a /* Public */,
      79,    2,  518,    2, 0x0a /* Public */,
      81,    1,  523,    2, 0x0a /* Public */,
      83,    2,  526,    2, 0x0a /* Public */,
      87,    1,  531,    2, 0x0a /* Public */,
      90,    3,  534,    2, 0x0a /* Public */,
      94,    4,  541,    2, 0x0a /* Public */,
      94,    3,  550,    2, 0x2a /* Public | MethodCloned */,
      94,    2,  557,    2, 0x2a /* Public | MethodCloned */,
     100,    3,  562,    2, 0x0a /* Public */,
     102,    1,  569,    2, 0x0a /* Public */,
     105,    1,  572,    2, 0x0a /* Public */,
     106,    2,  575,    2, 0x0a /* Public */,
     109,    1,  580,    2, 0x0a /* Public */,
     111,    1,  583,    2, 0x0a /* Public */,
     114,    0,  586,    2, 0x0a /* Public */,
     115,    0,  587,    2, 0x0a /* Public */,
     116,    0,  588,    2, 0x0a /* Public */,
     117,    4,  589,    2, 0x0a /* Public */,
     118,    0,  598,    2, 0x0a /* Public */,
     119,    0,  599,    2, 0x0a /* Public */,
     120,    0,  600,    2, 0x0a /* Public */,
     122,    0,  601,    2, 0x0a /* Public */,
     123,    1,  602,    2, 0x0a /* Public */,
     126,    1,  605,    2, 0x0a /* Public */,
     126,    1,  608,    2, 0x0a /* Public */,
     126,    1,  611,    2, 0x0a /* Public */,
     130,    0,  614,    2, 0x0a /* Public */,
     131,    0,  615,    2, 0x0a /* Public */,
     132,    0,  616,    2, 0x0a /* Public */,
     133,    1,  617,    2, 0x0a /* Public */,
     135,    3,  620,    2, 0x0a /* Public */,
     137,    5,  627,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   38,   39,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   42,   43,   44,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   42,   43,
    QMetaType::Void, QMetaType::Float,   42,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 47, 0x80000000 | 47, 0x80000000 | 47,   12,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 47, 0x80000000 | 53, 0x80000000 | 53,   12,   52,   54,   55,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 57,   12,   58,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   60,   61,   62,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 69, 0x80000000 | 71, QMetaType::Float, QMetaType::Float,   12,   70,   72,   73,   50,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 75,   12,   76,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   78,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Float,   12,   80,
    QMetaType::Void, 0x80000000 | 82,   72,
    QMetaType::Void, 0x80000000 | 84, 0x80000000 | 47,   85,   86,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   91,   92,   93,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 57, 0x80000000 | 98,   95,   96,   97,   99,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 57,   95,   96,   97,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   95,   96,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int,   95,   96,  101,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void, QMetaType::Float,  101,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,  107,  108,
    QMetaType::Void, QMetaType::Float,  110,
    QMetaType::Void, 0x80000000 | 112,  113,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Float, QMetaType::Float, QMetaType::Float,   12,   60,   61,   62,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 121,
    0x80000000 | 121,
    QMetaType::Void, 0x80000000 | 124,  125,
    QMetaType::Void, QMetaType::Int,  127,
    QMetaType::Void, 0x80000000 | 128,  129,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Void,
    0x80000000 | 128,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::Bool,  134,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, QMetaType::Float,  136,   12,   78,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, 0x80000000 | 138, QMetaType::Bool, QMetaType::Bool,   12,   66,  139,   15,   16,

 // properties: name, type, flags
     140, QMetaType::Float, 0x00495001,
     141, QMetaType::Float, 0x00495001,
     142, QMetaType::Float, 0x00495001,
     143, QMetaType::Float, 0x00495001,
     144, QMetaType::Bool, 0x00495001,
     145, QMetaType::Bool, 0x00495001,
     146, QMetaType::Float, 0x00495001,
     101, QMetaType::Float, 0x00495001,
     147, QMetaType::Float, 0x00495001,
     148, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
      10,
      10,
      10,
      10,
      11,
      10,
      12,
      12,
      13,
      13,

       0        // eod
};

void Dataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dataset *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->epochAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 1: _t->positionAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 2: _t->chartAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 3: _t->attitudeAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 4: _t->bottomTrackAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 5: _t->dataUpdate(); break;
        case 6: _t->bottomTrackUpdated((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 7: _t->updatedLlaRef(); break;
        case 8: _t->channelsUpdated(); break;
        case 9: _t->redrawEpochs((*reinterpret_cast< const QSet<int>(*)>(_a[1]))); break;
        case 10: _t->lastPositionChanged(); break;
        case 11: _t->activeContactChanged(); break;
        case 12: _t->lastDepthChanged(); break;
        case 13: _t->speedChanged(); break;
        case 14: _t->onSonarPosCanCalc((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 15: { bool _r = _t->isValidActiveContactIndx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isValidBoatCoordinate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isValidLastDepth();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->isValidSpeed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { float _r = _t->getBoatLatitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: { float _r = _t->getBoatLongitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 21: { float _r = _t->getDistToContact();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 22: { float _r = _t->getAngleToContact();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 23: { float _r = _t->getLastDepth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: { float _r = _t->getSpeed();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->addEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->addEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->addEncoder((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 28: _t->addEncoder((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 29: _t->addEncoder((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->addTimestamp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setChartSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 32: _t->setTranscSetup((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 33: _t->setSoundSpeed((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 34: _t->setSonarOffset((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 35: _t->setFixBlackStripesState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->setFixBlackStripesForwardSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setFixBlackStripesBackwardSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->addChart((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< const ChartParameters(*)>(_a[2])),(*reinterpret_cast< const QVector<QVector<uint8_t> >(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 39: _t->rawDataRecieved((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< RawData(*)>(_a[2]))); break;
        case 40: _t->addDist((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->addRangefinder((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 42: _t->addUsblSolution((*reinterpret_cast< IDBinUsblSolution::UsblSolution(*)>(_a[1]))); break;
        case 43: _t->addDopplerBeam((*reinterpret_cast< IDBinDVL::BeamSolution*(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 44: _t->addDVLSolution((*reinterpret_cast< IDBinDVL::DVLSolution(*)>(_a[1]))); break;
        case 45: _t->addAtt((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 46: _t->addPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< int32_t(*)>(_a[4]))); break;
        case 47: _t->addPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 48: _t->addPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 49: _t->addPosition_CSV((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 50: _t->addPositionRTK((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 51: _t->addDepth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->addGnssVelocity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 53: _t->addTemp((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->mergeGnssTrack((*reinterpret_cast< QList<Position>(*)>(_a[1]))); break;
        case 55: _t->resetDataset(); break;
        case 56: _t->resetRenderBuffers(); break;
        case 57: _t->resetDistProcessing(); break;
        case 58: _t->setChannelOffset((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 59: _t->spatialProcessing(); break;
        case 60: _t->usblProcessing(); break;
        case 61: { QVector<QVector3D> _r = _t->beaconTrack();
            if (_a[0]) *reinterpret_cast< QVector<QVector3D>*>(_a[0]) = std::move(_r); }  break;
        case 62: { QVector<QVector3D> _r = _t->beaconTrack1();
            if (_a[0]) *reinterpret_cast< QVector<QVector3D>*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setScene3D((*reinterpret_cast< GraphicsScene3dView*(*)>(_a[1]))); break;
        case 64: _t->setRefPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->setRefPosition((*reinterpret_cast< Epoch*(*)>(_a[1]))); break;
        case 66: _t->setRefPosition((*reinterpret_cast< Position(*)>(_a[1]))); break;
        case 67: _t->setRefPositionByFirstValid(); break;
        case 68: { Epoch* _r = _t->getFirstEpochByValidPosition();
            if (_a[0]) *reinterpret_cast< Epoch**>(_a[0]) = std::move(_r); }  break;
        case 69: { QStringList _r = _t->channelsNameList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->interpolateData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->onDistCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const ChannelId(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 72: _t->onLastBottomTrackEpochChanged((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const BottomTrackParam(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dataset::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::epochAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::positionAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::chartAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::attitudeAdded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::bottomTrackAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::dataUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(const ChannelId & , int , int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::bottomTrackUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::updatedLlaRef)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::channelsUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Dataset::*)(const QSet<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::redrawEpochs)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::lastPositionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::activeContactChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::lastDepthChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Dataset::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dataset::speedChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Dataset *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getBoatLatitude(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getBoatLongitude(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getDistToContact(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getAngleToContact(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isValidActiveContactIndx(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isValidBoatCoordinate(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->isValidLastDepth(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getLastDepth(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->isValidSpeed(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Dataset::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Dataset.data,
    qt_meta_data_Dataset,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dataset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dataset.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
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
void Dataset::epochAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dataset::positionAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dataset::chartAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dataset::attitudeAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dataset::bottomTrackAdded(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dataset::dataUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Dataset::bottomTrackUpdated(const ChannelId & _t1, int _t2, int _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Dataset::updatedLlaRef()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Dataset::channelsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Dataset::redrawEpochs(const QSet<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Dataset::lastPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Dataset::activeContactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Dataset::lastDepthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Dataset::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
