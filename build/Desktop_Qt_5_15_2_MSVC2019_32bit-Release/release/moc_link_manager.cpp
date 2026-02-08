/****************************************************************************
** Meta object code from reading C++ file 'link_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/link/link_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'link_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkManager_t {
    QByteArrayData data[68];
    char stringdata0[921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManager_t qt_meta_stringdata_LinkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LinkManager"
QT_MOC_LITERAL(1, 12, 17), // "appendModifyModel"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "uuid"
QT_MOC_LITERAL(4, 36, 16), // "connectionStatus"
QT_MOC_LITERAL(5, 53, 12), // "receivesData"
QT_MOC_LITERAL(6, 66, 11), // "ControlType"
QT_MOC_LITERAL(7, 78, 11), // "controlType"
QT_MOC_LITERAL(8, 90, 8), // "portName"
QT_MOC_LITERAL(9, 99, 8), // "baudrate"
QT_MOC_LITERAL(10, 108, 6), // "parity"
QT_MOC_LITERAL(11, 115, 8), // "LinkType"
QT_MOC_LITERAL(12, 124, 8), // "linkType"
QT_MOC_LITERAL(13, 133, 7), // "address"
QT_MOC_LITERAL(14, 141, 10), // "sourcePort"
QT_MOC_LITERAL(15, 152, 15), // "destinationPort"
QT_MOC_LITERAL(16, 168, 8), // "isPinned"
QT_MOC_LITERAL(17, 177, 7), // "isHided"
QT_MOC_LITERAL(18, 185, 14), // "isNotAvailable"
QT_MOC_LITERAL(19, 200, 18), // "autoSpeedSelection"
QT_MOC_LITERAL(20, 219, 16), // "isUpgradingState"
QT_MOC_LITERAL(21, 236, 11), // "deleteModel"
QT_MOC_LITERAL(22, 248, 10), // "frameReady"
QT_MOC_LITERAL(23, 259, 5), // "Link*"
QT_MOC_LITERAL(24, 265, 4), // "link"
QT_MOC_LITERAL(25, 270, 20), // "Parsers::FrameParser"
QT_MOC_LITERAL(26, 291, 5), // "frame"
QT_MOC_LITERAL(27, 297, 10), // "linkClosed"
QT_MOC_LITERAL(28, 308, 10), // "linkOpened"
QT_MOC_LITERAL(29, 319, 11), // "linkDeleted"
QT_MOC_LITERAL(30, 331, 16), // "sendDoRequestAll"
QT_MOC_LITERAL(31, 348, 29), // "onLinkConnectionStatusChanged"
QT_MOC_LITERAL(32, 378, 31), // "onUpgradingFirmwareStateChanged"
QT_MOC_LITERAL(33, 410, 21), // "onLinkBaudrateChanged"
QT_MOC_LITERAL(34, 432, 27), // "onLinkIsReceivesDataChanged"
QT_MOC_LITERAL(35, 460, 19), // "createAndStartTimer"
QT_MOC_LITERAL(36, 480, 9), // "stopTimer"
QT_MOC_LITERAL(37, 490, 14), // "onExpiredTimer"
QT_MOC_LITERAL(38, 505, 12), // "openAsSerial"
QT_MOC_LITERAL(39, 518, 13), // "LinkAttribute"
QT_MOC_LITERAL(40, 532, 9), // "attribute"
QT_MOC_LITERAL(41, 542, 9), // "openAsUdp"
QT_MOC_LITERAL(42, 552, 9), // "openAsTcp"
QT_MOC_LITERAL(43, 562, 9), // "closeLink"
QT_MOC_LITERAL(44, 572, 10), // "closeFLink"
QT_MOC_LITERAL(45, 583, 10), // "deleteLink"
QT_MOC_LITERAL(46, 594, 14), // "updateBaudrate"
QT_MOC_LITERAL(47, 609, 16), // "setRequestToSend"
QT_MOC_LITERAL(48, 626, 3), // "rts"
QT_MOC_LITERAL(49, 630, 20), // "setDataTerminalReady"
QT_MOC_LITERAL(50, 651, 3), // "dtr"
QT_MOC_LITERAL(51, 655, 9), // "setParity"
QT_MOC_LITERAL(52, 665, 12), // "setAttribute"
QT_MOC_LITERAL(53, 678, 13), // "updateAddress"
QT_MOC_LITERAL(54, 692, 24), // "updateAutoSpeedSelection"
QT_MOC_LITERAL(55, 717, 5), // "state"
QT_MOC_LITERAL(56, 723, 16), // "updateSourcePort"
QT_MOC_LITERAL(57, 740, 21), // "updateDestinationPort"
QT_MOC_LITERAL(58, 762, 17), // "updatePinnedState"
QT_MOC_LITERAL(59, 780, 17), // "updateControlType"
QT_MOC_LITERAL(60, 798, 10), // "frameInput"
QT_MOC_LITERAL(61, 809, 11), // "createAsUdp"
QT_MOC_LITERAL(62, 821, 11), // "createAsTcp"
QT_MOC_LITERAL(63, 833, 24), // "importPinnedLinksFromXML"
QT_MOC_LITERAL(64, 858, 10), // "openFLinks"
QT_MOC_LITERAL(65, 869, 23), // "createAndOpenAsUdpProxy"
QT_MOC_LITERAL(66, 893, 13), // "closeUdpProxy"
QT_MOC_LITERAL(67, 907, 13) // "getFirstOpend"

    },
    "LinkManager\0appendModifyModel\0\0uuid\0"
    "connectionStatus\0receivesData\0ControlType\0"
    "controlType\0portName\0baudrate\0parity\0"
    "LinkType\0linkType\0address\0sourcePort\0"
    "destinationPort\0isPinned\0isHided\0"
    "isNotAvailable\0autoSpeedSelection\0"
    "isUpgradingState\0deleteModel\0frameReady\0"
    "Link*\0link\0Parsers::FrameParser\0frame\0"
    "linkClosed\0linkOpened\0linkDeleted\0"
    "sendDoRequestAll\0onLinkConnectionStatusChanged\0"
    "onUpgradingFirmwareStateChanged\0"
    "onLinkBaudrateChanged\0onLinkIsReceivesDataChanged\0"
    "createAndStartTimer\0stopTimer\0"
    "onExpiredTimer\0openAsSerial\0LinkAttribute\0"
    "attribute\0openAsUdp\0openAsTcp\0closeLink\0"
    "closeFLink\0deleteLink\0updateBaudrate\0"
    "setRequestToSend\0rts\0setDataTerminalReady\0"
    "dtr\0setParity\0setAttribute\0updateAddress\0"
    "updateAutoSpeedSelection\0state\0"
    "updateSourcePort\0updateDestinationPort\0"
    "updatePinnedState\0updateControlType\0"
    "frameInput\0createAsUdp\0createAsTcp\0"
    "importPinnedLinksFromXML\0openFLinks\0"
    "createAndOpenAsUdpProxy\0closeUdpProxy\0"
    "getFirstOpend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   16,  224,    2, 0x06 /* Public */,
      21,    1,  257,    2, 0x06 /* Public */,
      22,    3,  260,    2, 0x06 /* Public */,
      27,    2,  267,    2, 0x06 /* Public */,
      28,    2,  272,    2, 0x06 /* Public */,
      29,    2,  277,    2, 0x06 /* Public */,
      30,    1,  282,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  285,    2, 0x0a /* Public */,
      32,    1,  288,    2, 0x0a /* Public */,
      33,    1,  291,    2, 0x0a /* Public */,
      34,    1,  294,    2, 0x0a /* Public */,
      35,    0,  297,    2, 0x0a /* Public */,
      36,    0,  298,    2, 0x0a /* Public */,
      37,    0,  299,    2, 0x0a /* Public */,
      38,    2,  300,    2, 0x0a /* Public */,
      38,    1,  305,    2, 0x2a /* Public | MethodCloned */,
      41,    5,  308,    2, 0x0a /* Public */,
      41,    4,  319,    2, 0x2a /* Public | MethodCloned */,
      42,    5,  328,    2, 0x0a /* Public */,
      42,    4,  339,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  348,    2, 0x0a /* Public */,
      44,    1,  351,    2, 0x0a /* Public */,
      45,    1,  354,    2, 0x0a /* Public */,
      46,    2,  357,    2, 0x0a /* Public */,
      47,    2,  362,    2, 0x0a /* Public */,
      49,    2,  367,    2, 0x0a /* Public */,
      51,    2,  372,    2, 0x0a /* Public */,
      52,    2,  377,    2, 0x0a /* Public */,
      53,    2,  382,    2, 0x0a /* Public */,
      54,    2,  387,    2, 0x0a /* Public */,
      56,    2,  392,    2, 0x0a /* Public */,
      57,    2,  397,    2, 0x0a /* Public */,
      58,    2,  402,    2, 0x0a /* Public */,
      59,    2,  407,    2, 0x0a /* Public */,
      60,    2,  412,    2, 0x0a /* Public */,
      61,    3,  417,    2, 0x0a /* Public */,
      62,    3,  424,    2, 0x0a /* Public */,
      63,    0,  431,    2, 0x0a /* Public */,
      64,    0,  432,    2, 0x0a /* Public */,
      65,    3,  433,    2, 0x0a /* Public */,
      66,    0,  440,    2, 0x0a /* Public */,
      67,    0,  441,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 6, QMetaType::QString, QMetaType::Int, QMetaType::Bool, 0x80000000 | 11, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    7,    8,    9,   10,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 23, 0x80000000 | 25,    3,   24,   26,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 23,    3,   24,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 23,    3,   24,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 23,    3,   24,
    QMetaType::Void, QMetaType::QUuid,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 39,    3,   40,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 39,    3,   13,   14,   15,   40,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   13,   14,   15,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int, 0x80000000 | 39,    3,   13,   14,   15,   40,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   13,   14,   15,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    3,    9,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    3,   48,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    3,   50,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    3,   10,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 39,    3,   40,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,    3,   13,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    3,   55,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    3,   14,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Int,    3,   15,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    3,   55,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 6,    3,    7,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25,   24,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::QUuid,

       0        // eod
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendModifyModel((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< ControlType(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< LinkType(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])),(*reinterpret_cast< bool(*)>(_a[14])),(*reinterpret_cast< bool(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16]))); break;
        case 1: _t->deleteModel((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 2: _t->frameReady((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< Parsers::FrameParser(*)>(_a[3]))); break;
        case 3: _t->linkClosed((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 4: _t->linkOpened((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 5: _t->linkDeleted((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2]))); break;
        case 6: _t->sendDoRequestAll((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 7: _t->onLinkConnectionStatusChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 8: _t->onUpgradingFirmwareStateChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 9: _t->onLinkBaudrateChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 10: _t->onLinkIsReceivesDataChanged((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 11: _t->createAndStartTimer(); break;
        case 12: _t->stopTimer(); break;
        case 13: _t->onExpiredTimer(); break;
        case 14: _t->openAsSerial((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 15: _t->openAsSerial((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 16: _t->openAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 17: _t->openAsUdp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->openAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< LinkAttribute(*)>(_a[5]))); break;
        case 19: _t->openAsTcp((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 20: _t->closeLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 21: _t->closeFLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 22: _t->deleteLink((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 23: _t->updateBaudrate((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->setRequestToSend((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->setDataTerminalReady((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->setParity((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->setAttribute((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< LinkAttribute(*)>(_a[2]))); break;
        case 28: _t->updateAddress((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->updateAutoSpeedSelection((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->updateSourcePort((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->updateDestinationPort((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->updatePinnedState((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->updateControlType((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< ControlType(*)>(_a[2]))); break;
        case 34: _t->frameInput((*reinterpret_cast< Link*(*)>(_a[1])),(*reinterpret_cast< Parsers::FrameParser(*)>(_a[2]))); break;
        case 35: _t->createAsUdp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->createAsTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->importPinnedLinksFromXML(); break;
        case 38: _t->openFLinks(); break;
        case 39: _t->createAndOpenAsUdpProxy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 40: _t->closeUdpProxy(); break;
        case 41: { QUuid _r = _t->getFirstOpend();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        case 34:
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
            using _t = void (LinkManager::*)(QUuid , bool , bool , ControlType , QString , int , bool , LinkType , QString , int , int , bool , bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::appendModifyModel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::deleteModel)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid , Link * , Parsers::FrameParser );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::frameReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid , Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkClosed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid , Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkOpened)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid , Link * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkDeleted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LinkManager::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::sendDoRequestAll)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LinkManager.data,
    qt_meta_data_LinkManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void LinkManager::appendModifyModel(QUuid _t1, bool _t2, bool _t3, ControlType _t4, QString _t5, int _t6, bool _t7, LinkType _t8, QString _t9, int _t10, int _t11, bool _t12, bool _t13, bool _t14, bool _t15, bool _t16)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t15))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t16))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkManager::deleteModel(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkManager::frameReady(QUuid _t1, Link * _t2, Parsers::FrameParser _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkManager::linkClosed(QUuid _t1, Link * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkManager::linkOpened(QUuid _t1, Link * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkManager::linkDeleted(QUuid _t1, Link * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LinkManager::sendDoRequestAll(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
