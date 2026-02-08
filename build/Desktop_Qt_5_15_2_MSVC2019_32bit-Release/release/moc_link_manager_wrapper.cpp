/****************************************************************************
** Meta object code from reading C++ file 'link_manager_wrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/link/link_manager_wrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'link_manager_wrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkManagerWrapper_t {
    QByteArrayData data[70];
    char stringdata0[977];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManagerWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManagerWrapper_t qt_meta_stringdata_LinkManagerWrapper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LinkManagerWrapper"
QT_MOC_LITERAL(1, 19, 12), // "modelChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "sendOpenAsSerial"
QT_MOC_LITERAL(4, 50, 4), // "uuid"
QT_MOC_LITERAL(5, 55, 13), // "LinkAttribute"
QT_MOC_LITERAL(6, 69, 9), // "attribute"
QT_MOC_LITERAL(7, 79, 15), // "sendCreateAsUdp"
QT_MOC_LITERAL(8, 95, 7), // "address"
QT_MOC_LITERAL(9, 103, 10), // "sourcePort"
QT_MOC_LITERAL(10, 114, 15), // "destinationPort"
QT_MOC_LITERAL(11, 130, 13), // "sendOpenAsUdp"
QT_MOC_LITERAL(12, 144, 15), // "sendCreateAsTcp"
QT_MOC_LITERAL(13, 160, 13), // "sendOpenAsTcp"
QT_MOC_LITERAL(14, 174, 13), // "sendCloseLink"
QT_MOC_LITERAL(15, 188, 14), // "sendFCloseLink"
QT_MOC_LITERAL(16, 203, 14), // "sendDeleteLink"
QT_MOC_LITERAL(17, 218, 18), // "sendUpdateBaudrate"
QT_MOC_LITERAL(18, 237, 8), // "baudrate"
QT_MOC_LITERAL(19, 246, 20), // "sendSetRequestToSend"
QT_MOC_LITERAL(20, 267, 3), // "rts"
QT_MOC_LITERAL(21, 271, 24), // "sendSetDataTerminalReady"
QT_MOC_LITERAL(22, 296, 3), // "dtr"
QT_MOC_LITERAL(23, 300, 13), // "sendSetPatity"
QT_MOC_LITERAL(24, 314, 6), // "parity"
QT_MOC_LITERAL(25, 321, 15), // "sendSetAttribut"
QT_MOC_LITERAL(26, 337, 17), // "sendUpdateAddress"
QT_MOC_LITERAL(27, 355, 22), // "sendAutoSpeedSelection"
QT_MOC_LITERAL(28, 378, 5), // "state"
QT_MOC_LITERAL(29, 384, 20), // "sendUpdateSourcePort"
QT_MOC_LITERAL(30, 405, 25), // "sendUpdateDestinationPort"
QT_MOC_LITERAL(31, 431, 21), // "sendUpdatePinnedState"
QT_MOC_LITERAL(32, 453, 21), // "sendUpdateControlType"
QT_MOC_LITERAL(33, 475, 11), // "controlType"
QT_MOC_LITERAL(34, 487, 13), // "sendStopTimer"
QT_MOC_LITERAL(35, 501, 14), // "sendOpenFLinks"
QT_MOC_LITERAL(36, 516, 27), // "sendCreateAndOpenAsUdpProxy"
QT_MOC_LITERAL(37, 544, 17), // "sendCloseUdpProxy"
QT_MOC_LITERAL(38, 562, 12), // "openAsSerial"
QT_MOC_LITERAL(39, 575, 11), // "createAsUdp"
QT_MOC_LITERAL(40, 587, 9), // "openAsUdp"
QT_MOC_LITERAL(41, 597, 11), // "createAsTcp"
QT_MOC_LITERAL(42, 609, 9), // "openAsTcp"
QT_MOC_LITERAL(43, 619, 9), // "closeLink"
QT_MOC_LITERAL(44, 629, 10), // "closeFLink"
QT_MOC_LITERAL(45, 640, 10), // "deleteLink"
QT_MOC_LITERAL(46, 651, 14), // "updateBaudrate"
QT_MOC_LITERAL(47, 666, 16), // "setRequestToSend"
QT_MOC_LITERAL(48, 683, 20), // "setDataTerminalReady"
QT_MOC_LITERAL(49, 704, 9), // "setParity"
QT_MOC_LITERAL(50, 714, 12), // "setAttribute"
QT_MOC_LITERAL(51, 727, 21), // "appendModifyModelData"
QT_MOC_LITERAL(52, 749, 16), // "connectionStatus"
QT_MOC_LITERAL(53, 766, 12), // "receivesData"
QT_MOC_LITERAL(54, 779, 11), // "ControlType"
QT_MOC_LITERAL(55, 791, 8), // "portName"
QT_MOC_LITERAL(56, 800, 8), // "LinkType"
QT_MOC_LITERAL(57, 809, 8), // "linkType"
QT_MOC_LITERAL(58, 818, 8), // "isPinned"
QT_MOC_LITERAL(59, 827, 7), // "isHided"
QT_MOC_LITERAL(60, 835, 14), // "isNotAvailable"
QT_MOC_LITERAL(61, 850, 18), // "autoSpeedSelection"
QT_MOC_LITERAL(62, 869, 16), // "isUpgradingState"
QT_MOC_LITERAL(63, 886, 15), // "deleteModelData"
QT_MOC_LITERAL(64, 902, 14), // "getFirstOpened"
QT_MOC_LITERAL(65, 917, 10), // "getLinkPtr"
QT_MOC_LITERAL(66, 928, 5), // "Link*"
QT_MOC_LITERAL(67, 934, 13), // "linkListModel"
QT_MOC_LITERAL(68, 948, 14), // "LinkListModel*"
QT_MOC_LITERAL(69, 963, 13) // "baudrateModel"

    },
    "LinkManagerWrapper\0modelChanged\0\0"
    "sendOpenAsSerial\0uuid\0LinkAttribute\0"
    "attribute\0sendCreateAsUdp\0address\0"
    "sourcePort\0destinationPort\0sendOpenAsUdp\0"
    "sendCreateAsTcp\0sendOpenAsTcp\0"
    "sendCloseLink\0sendFCloseLink\0"
    "sendDeleteLink\0sendUpdateBaudrate\0"
    "baudrate\0sendSetRequestToSend\0rts\0"
    "sendSetDataTerminalReady\0dtr\0sendSetPatity\0"
    "parity\0sendSetAttribut\0sendUpdateAddress\0"
    "sendAutoSpeedSelection\0state\0"
    "sendUpdateSourcePort\0sendUpdateDestinationPort\0"
    "sendUpdatePinnedState\0sendUpdateControlType\0"
    "controlType\0sendStopTimer\0sendOpenFLinks\0"
    "sendCreateAndOpenAsUdpProxy\0"
    "sendCloseUdpProxy\0openAsSerial\0"
    "createAsUdp\0openAsUdp\0createAsTcp\0"
    "openAsTcp\0closeLink\0closeFLink\0"
    "deleteLink\0updateBaudrate\0setRequestToSend\0"
    "setDataTerminalReady\0setParity\0"
    "setAttribute\0appendModifyModelData\0"
    "connectionStatus\0receivesData\0ControlType\0"
    "portName\0LinkType\0linkType\0isPinned\0"
    "isHided\0isNotAvailable\0autoSpeedSelection\0"
    "isUpgradingState\0deleteModelData\0"
    "getFirstOpened\0getLinkPtr\0Link*\0"
    "linkListModel\0LinkListModel*\0baudrateModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManagerWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       2,  522, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x06 /* Public */,
       3,    2,  250,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x26 /* Public | MethodCloned */,
       7,    3,  258,    2, 0x06 /* Public */,
      11,    5,  265,    2, 0x06 /* Public */,
      11,    4,  276,    2, 0x26 /* Public | MethodCloned */,
      12,    3,  285,    2, 0x06 /* Public */,
      13,    5,  292,    2, 0x06 /* Public */,
      13,    4,  303,    2, 0x26 /* Public | MethodCloned */,
      14,    1,  312,    2, 0x06 /* Public */,
      15,    1,  315,    2, 0x06 /* Public */,
      16,    1,  318,    2, 0x06 /* Public */,
      17,    2,  321,    2, 0x06 /* Public */,
      19,    2,  326,    2, 0x06 /* Public */,
      21,    2,  331,    2, 0x06 /* Public */,
      23,    2,  336,    2, 0x06 /* Public */,
      25,    2,  341,    2, 0x06 /* Public */,
      26,    2,  346,    2, 0x06 /* Public */,
      27,    2,  351,    2, 0x06 /* Public */,
      29,    2,  356,    2, 0x06 /* Public */,
      30,    2,  361,    2, 0x06 /* Public */,
      31,    2,  366,    2, 0x06 /* Public */,
      32,    2,  371,    2, 0x06 /* Public */,
      34,    0,  376,    2, 0x06 /* Public */,
      35,    0,  377,    2, 0x06 /* Public */,
      36,    3,  378,    2, 0x06 /* Public */,
      37,    0,  385,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      38,    2,  386,    2, 0x0a /* Public */,
      38,    1,  391,    2, 0x2a /* Public | MethodCloned */,
      39,    3,  394,    2, 0x0a /* Public */,
      40,    5,  401,    2, 0x0a /* Public */,
      40,    4,  412,    2, 0x2a /* Public | MethodCloned */,
      41,    3,  421,    2, 0x0a /* Public */,
      42,    5,  428,    2, 0x0a /* Public */,
      42,    4,  439,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  448,    2, 0x0a /* Public */,
      44,    1,  451,    2, 0x0a /* Public */,
      45,    1,  454,    2, 0x0a /* Public */,
      46,    2,  457,    2, 0x0a /* Public */,
      47,    2,  462,    2, 0x0a /* Public */,
      48,    2,  467,    2, 0x0a /* Public */,
      49,    2,  472,    2, 0x0a /* Public */,
      50,    2,  477,    2, 0x0a /* Public */,
      51,   16,  482,    2, 0x0a /* Public */,
      63,    1,  515,    2, 0x0a /* Public */,
      64,    0,  518,    2, 0x0a /* Public */,
      65,    1,  519,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    4,    8,    9,   10,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    4,    8,    9,   10,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    4,   18,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   20,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   22,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   24,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,    4,    8,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   28,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    4,    9,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    4,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   28,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    4,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    4,    8,    9,   10,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    4,    8,    9,   10,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    4,   18,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   20,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   22,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,   24,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 54, QMetaType::QString, QMetaType::Int, QMetaType::Bool, 0x80000000 | 56, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    4,   52,   53,   33,   55,   18,   24,   57,    8,    9,   10,   58,   59,   60,   61,   62,
    QMetaType::Void, QMetaType::QUuid,    4,
    QMetaType::QUuid,
    0x80000000 | 66, QMetaType::QUuid,    4,

 // properties: name, type, flags
      67, 0x80000000 | 68, 0x00495009,
      69, QMetaType::QVariant, 0x00095401,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void LinkManagerWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkManagerWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->sendOpenAsSerial((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 2: _t->sendOpenAsSerial((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 3: _t->sendCreateAsUdp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->sendOpenAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 5: _t->sendOpenAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->sendCreateAsTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->sendOpenAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 8: _t->sendOpenAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->sendCloseLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 10: _t->sendFCloseLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 11: _t->sendDeleteLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 12: _t->sendUpdateBaudrate((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->sendSetRequestToSend((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->sendSetDataTerminalReady((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->sendSetPatity((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->sendSetAttribut((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 17: _t->sendUpdateAddress((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->sendAutoSpeedSelection((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->sendUpdateSourcePort((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->sendUpdateDestinationPort((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->sendUpdatePinnedState((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->sendUpdateControlType((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->sendStopTimer(); break;
        case 24: _t->sendOpenFLinks(); break;
        case 25: _t->sendCreateAndOpenAsUdpProxy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->sendCloseUdpProxy(); break;
        case 27: _t->openAsSerial((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 28: _t->openAsSerial((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 29: _t->createAsUdp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->openAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 31: _t->openAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 32: _t->createAsTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->openAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 34: _t->openAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 35: _t->closeLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 36: _t->closeFLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 37: _t->deleteLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 38: _t->updateBaudrate((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->setRequestToSend((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->setDataTerminalReady((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setParity((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->setAttribute((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 43: _t->appendModifyModelData((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< ControlType(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< LinkType(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])),(*reinterpret_cast< bool(*)>(_a[14])),(*reinterpret_cast< bool(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16]))); break;
        case 44: _t->deleteModelData((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 45: { QUuid _r = _t->getFirstOpened();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 46: { Link* _r = _t->getLinkPtr((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Link**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , LinkAttribute );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendOpenAsSerial)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendCreateAsUdp)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , QString , int , int , LinkAttribute );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendOpenAsUdp)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendCreateAsTcp)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , QString , int , int , LinkAttribute );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendOpenAsTcp)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendCloseLink)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendFCloseLink)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendDeleteLink)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdateBaudrate)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendSetRequestToSend)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendSetDataTerminalReady)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendSetPatity)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , LinkAttribute );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendSetAttribut)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdateAddress)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendAutoSpeedSelection)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdateSourcePort)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdateDestinationPort)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdatePinnedState)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QUuid , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendUpdateControlType)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendStopTimer)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendOpenFLinks)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendCreateAndOpenAsUdpProxy)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (LinkManagerWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManagerWrapper::sendCloseUdpProxy)) {
                *result = 26;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkManagerWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LinkListModel**>(_v) = _t->getModelPtr(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->baudrateModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LinkManagerWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LinkManagerWrapper.data,
    qt_meta_data_LinkManagerWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkManagerWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManagerWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManagerWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkManagerWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LinkManagerWrapper::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LinkManagerWrapper::sendOpenAsSerial(QUuid _t1, LinkAttribute _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void LinkManagerWrapper::sendCreateAsUdp(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkManagerWrapper::sendOpenAsUdp(QUuid _t1, QString _t2, int _t3, int _t4, LinkAttribute _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void LinkManagerWrapper::sendCreateAsTcp(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LinkManagerWrapper::sendOpenAsTcp(QUuid _t1, QString _t2, int _t3, int _t4, LinkAttribute _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 9
void LinkManagerWrapper::sendCloseLink(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LinkManagerWrapper::sendFCloseLink(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LinkManagerWrapper::sendDeleteLink(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LinkManagerWrapper::sendUpdateBaudrate(QUuid _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LinkManagerWrapper::sendSetRequestToSend(QUuid _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LinkManagerWrapper::sendSetDataTerminalReady(QUuid _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void LinkManagerWrapper::sendSetPatity(QUuid _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void LinkManagerWrapper::sendSetAttribut(QUuid _t1, LinkAttribute _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void LinkManagerWrapper::sendUpdateAddress(QUuid _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void LinkManagerWrapper::sendAutoSpeedSelection(QUuid _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void LinkManagerWrapper::sendUpdateSourcePort(QUuid _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void LinkManagerWrapper::sendUpdateDestinationPort(QUuid _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void LinkManagerWrapper::sendUpdatePinnedState(QUuid _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void LinkManagerWrapper::sendUpdateControlType(QUuid _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void LinkManagerWrapper::sendStopTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void LinkManagerWrapper::sendOpenFLinks()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void LinkManagerWrapper::sendCreateAndOpenAsUdpProxy(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void LinkManagerWrapper::sendCloseUdpProxy()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
