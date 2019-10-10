/****************************************************************************
** Meta object code from reading C++ file 'XVideo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../XVideo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XVideo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XVideo_t {
    QByteArrayData data[55];
    char stringdata0[715];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XVideo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XVideo_t qt_meta_stringdata_XVideo = {
    {
QT_MOC_LITERAL(0, 0, 6), // "XVideo"
QT_MOC_LITERAL(1, 7, 17), // "signal_connentSer"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 2), // "ip"
QT_MOC_LITERAL(4, 29, 4), // "port"
QT_MOC_LITERAL(5, 34, 28), // "signal_tcpSendAuthentication"
QT_MOC_LITERAL(6, 63, 3), // "did"
QT_MOC_LITERAL(7, 67, 4), // "name"
QT_MOC_LITERAL(8, 72, 3), // "pwd"
QT_MOC_LITERAL(9, 76, 18), // "signal_loginStatus"
QT_MOC_LITERAL(10, 95, 3), // "msg"
QT_MOC_LITERAL(11, 99, 18), // "signal_waitingLoad"
QT_MOC_LITERAL(12, 118, 7), // "msgload"
QT_MOC_LITERAL(13, 126, 14), // "signal_endLoad"
QT_MOC_LITERAL(14, 141, 20), // "signal_stopPlayAudio"
QT_MOC_LITERAL(15, 162, 21), // "signal_startPlayAudio"
QT_MOC_LITERAL(16, 184, 21), // "signal_destoryTcpWork"
QT_MOC_LITERAL(17, 206, 17), // "signals_p2pDowork"
QT_MOC_LITERAL(18, 224, 13), // "signal_update"
QT_MOC_LITERAL(19, 238, 16), // "signal_playAudio"
QT_MOC_LITERAL(20, 255, 14), // "unsigned char*"
QT_MOC_LITERAL(21, 270, 4), // "buff"
QT_MOC_LITERAL(22, 275, 3), // "len"
QT_MOC_LITERAL(23, 279, 3), // "pts"
QT_MOC_LITERAL(24, 283, 23), // "signal_preparePlayAudio"
QT_MOC_LITERAL(25, 307, 10), // "samplerate"
QT_MOC_LITERAL(26, 318, 6), // "prenum"
QT_MOC_LITERAL(27, 325, 8), // "bitwidth"
QT_MOC_LITERAL(28, 334, 9), // "soundmode"
QT_MOC_LITERAL(29, 344, 21), // "signal_recordAviAudio"
QT_MOC_LITERAL(30, 366, 5), // "char*"
QT_MOC_LITERAL(31, 372, 8), // "tempTime"
QT_MOC_LITERAL(32, 381, 21), // "signal_recordAviVedio"
QT_MOC_LITERAL(33, 403, 21), // "signal_startRecordAvi"
QT_MOC_LITERAL(34, 425, 19), // "signal_endRecordAvi"
QT_MOC_LITERAL(35, 445, 24), // "slot_trasfer_waitingLoad"
QT_MOC_LITERAL(36, 470, 20), // "slot_trasfer_endLoad"
QT_MOC_LITERAL(37, 491, 17), // "slot_sendToastMsg"
QT_MOC_LITERAL(38, 509, 8), // "MsgInfo*"
QT_MOC_LITERAL(39, 518, 11), // "slot_recMsg"
QT_MOC_LITERAL(40, 530, 12), // "slot_recH264"
QT_MOC_LITERAL(41, 543, 4), // "time"
QT_MOC_LITERAL(42, 548, 15), // "slot_recPcmALaw"
QT_MOC_LITERAL(43, 564, 17), // "slot_reconnectP2p"
QT_MOC_LITERAL(44, 582, 12), // "slot_timeout"
QT_MOC_LITERAL(45, 595, 12), // "sendWaitLoad"
QT_MOC_LITERAL(46, 608, 5), // "bool&"
QT_MOC_LITERAL(47, 614, 9), // "isWaiting"
QT_MOC_LITERAL(48, 624, 18), // "sendAuthentication"
QT_MOC_LITERAL(49, 643, 13), // "connectServer"
QT_MOC_LITERAL(50, 657, 12), // "funPlayAudio"
QT_MOC_LITERAL(51, 670, 6), // "isPlay"
QT_MOC_LITERAL(52, 677, 14), // "funRecordVedio"
QT_MOC_LITERAL(53, 692, 8), // "isRecord"
QT_MOC_LITERAL(54, 701, 13) // "funScreenShot"

    },
    "XVideo\0signal_connentSer\0\0ip\0port\0"
    "signal_tcpSendAuthentication\0did\0name\0"
    "pwd\0signal_loginStatus\0msg\0"
    "signal_waitingLoad\0msgload\0signal_endLoad\0"
    "signal_stopPlayAudio\0signal_startPlayAudio\0"
    "signal_destoryTcpWork\0signals_p2pDowork\0"
    "signal_update\0signal_playAudio\0"
    "unsigned char*\0buff\0len\0pts\0"
    "signal_preparePlayAudio\0samplerate\0"
    "prenum\0bitwidth\0soundmode\0"
    "signal_recordAviAudio\0char*\0tempTime\0"
    "signal_recordAviVedio\0signal_startRecordAvi\0"
    "signal_endRecordAvi\0slot_trasfer_waitingLoad\0"
    "slot_trasfer_endLoad\0slot_sendToastMsg\0"
    "MsgInfo*\0slot_recMsg\0slot_recH264\0"
    "time\0slot_recPcmALaw\0slot_reconnectP2p\0"
    "slot_timeout\0sendWaitLoad\0bool&\0"
    "isWaiting\0sendAuthentication\0connectServer\0"
    "funPlayAudio\0isPlay\0funRecordVedio\0"
    "isRecord\0funScreenShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XVideo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  164,    2, 0x06 /* Public */,
       5,    3,  169,    2, 0x06 /* Public */,
       9,    1,  176,    2, 0x06 /* Public */,
      11,    1,  179,    2, 0x06 /* Public */,
      13,    0,  182,    2, 0x06 /* Public */,
      14,    0,  183,    2, 0x06 /* Public */,
      15,    0,  184,    2, 0x06 /* Public */,
      16,    0,  185,    2, 0x06 /* Public */,
      17,    0,  186,    2, 0x06 /* Public */,
      18,    0,  187,    2, 0x06 /* Public */,
      19,    3,  188,    2, 0x06 /* Public */,
      24,    5,  195,    2, 0x06 /* Public */,
      29,    3,  206,    2, 0x06 /* Public */,
      32,    3,  213,    2, 0x06 /* Public */,
      33,    1,  220,    2, 0x06 /* Public */,
      34,    0,  223,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    1,  224,    2, 0x0a /* Public */,
      36,    0,  227,    2, 0x0a /* Public */,
      37,    1,  228,    2, 0x0a /* Public */,
      39,    1,  231,    2, 0x0a /* Public */,
      40,    3,  234,    2, 0x0a /* Public */,
      42,    3,  241,    2, 0x0a /* Public */,
      43,    0,  248,    2, 0x0a /* Public */,
      44,    0,  249,    2, 0x0a /* Public */,
      45,    1,  250,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      48,    3,  253,    2, 0x02 /* Public */,
      49,    2,  260,    2, 0x02 /* Public */,
      50,    1,  265,    2, 0x02 /* Public */,
      52,    1,  268,    2, 0x02 /* Public */,
      54,    0,  271,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int, QMetaType::Long,   21,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long,   25,   26,   27,   28,   23,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int, QMetaType::LongLong,   21,   22,   31,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int, QMetaType::LongLong,   21,   22,   31,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   10,
    QMetaType::Void, 0x80000000 | 38,   10,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int, QMetaType::ULongLong,   21,   22,   41,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int, QMetaType::ULongLong,   21,   22,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,

       0        // eod
};

void XVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XVideo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_connentSer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signal_tcpSendAuthentication((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->signal_loginStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->signal_waitingLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->signal_endLoad(); break;
        case 5: _t->signal_stopPlayAudio(); break;
        case 6: _t->signal_startPlayAudio(); break;
        case 7: _t->signal_destoryTcpWork(); break;
        case 8: _t->signals_p2pDowork(); break;
        case 9: _t->signal_update(); break;
        case 10: _t->signal_playAudio((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 11: _t->signal_preparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 12: _t->signal_recordAviAudio((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 13: _t->signal_recordAviVedio((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 14: _t->signal_startRecordAvi((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->signal_endRecordAvi(); break;
        case 16: _t->slot_trasfer_waitingLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->slot_trasfer_endLoad(); break;
        case 18: _t->slot_sendToastMsg((*reinterpret_cast< MsgInfo*(*)>(_a[1]))); break;
        case 19: _t->slot_recMsg((*reinterpret_cast< MsgInfo*(*)>(_a[1]))); break;
        case 20: _t->slot_recH264((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 21: _t->slot_recPcmALaw((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 22: _t->slot_reconnectP2p(); break;
        case 23: _t->slot_timeout(); break;
        case 24: _t->sendWaitLoad((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->sendAuthentication((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 26: _t->connectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->funPlayAudio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->funRecordVedio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->funScreenShot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XVideo::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_connentSer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_tcpSendAuthentication)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_loginStatus)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_waitingLoad)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_endLoad)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_stopPlayAudio)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_startPlayAudio)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_destoryTcpWork)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signals_p2pDowork)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_update)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(unsigned char * , int , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_playAudio)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(int , int , int , int , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_preparePlayAudio)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_recordAviAudio)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_recordAviVedio)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (XVideo::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_startRecordAvi)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (XVideo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XVideo::signal_endRecordAvi)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XVideo::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_XVideo.data,
    qt_meta_data_XVideo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XVideo.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int XVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void XVideo::signal_connentSer(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XVideo::signal_tcpSendAuthentication(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XVideo::signal_loginStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XVideo::signal_waitingLoad(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XVideo::signal_endLoad()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void XVideo::signal_stopPlayAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void XVideo::signal_startPlayAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void XVideo::signal_destoryTcpWork()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void XVideo::signals_p2pDowork()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void XVideo::signal_update()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void XVideo::signal_playAudio(unsigned char * _t1, int _t2, long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void XVideo::signal_preparePlayAudio(int _t1, int _t2, int _t3, int _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void XVideo::signal_recordAviAudio(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void XVideo::signal_recordAviVedio(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void XVideo::signal_startRecordAvi(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void XVideo::signal_endRecordAvi()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
