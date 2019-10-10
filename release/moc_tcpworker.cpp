/****************************************************************************
** Meta object code from reading C++ file 'tcpworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcpworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpWorker_t {
    QByteArrayData data[46];
    char stringdata0[605];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpWorker_t qt_meta_stringdata_TcpWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpWorker"
QT_MOC_LITERAL(1, 10, 15), // "signal_sendH264"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "char*"
QT_MOC_LITERAL(4, 33, 8), // "vH264Arr"
QT_MOC_LITERAL(5, 42, 6), // "arrLen"
QT_MOC_LITERAL(6, 49, 3), // "pts"
QT_MOC_LITERAL(7, 53, 18), // "signal_sendPcmALaw"
QT_MOC_LITERAL(8, 72, 10), // "PcmALawArr"
QT_MOC_LITERAL(9, 83, 27), // "signal_sendPreparePlayAudio"
QT_MOC_LITERAL(10, 111, 10), // "samplerate"
QT_MOC_LITERAL(11, 122, 6), // "prenum"
QT_MOC_LITERAL(12, 129, 8), // "bitwidth"
QT_MOC_LITERAL(13, 138, 9), // "soundmode"
QT_MOC_LITERAL(14, 148, 14), // "signal_sendMsg"
QT_MOC_LITERAL(15, 163, 8), // "MsgInfo*"
QT_MOC_LITERAL(16, 172, 4), // "info"
QT_MOC_LITERAL(17, 177, 27), // "signal_writeMediaVideoQueue"
QT_MOC_LITERAL(18, 205, 4), // "data"
QT_MOC_LITERAL(19, 210, 3), // "len"
QT_MOC_LITERAL(20, 214, 21), // "QueueVideoInputInfo_T"
QT_MOC_LITERAL(21, 236, 5), // "param"
QT_MOC_LITERAL(22, 242, 14), // "Enum_MediaType"
QT_MOC_LITERAL(23, 257, 9), // "mediaType"
QT_MOC_LITERAL(24, 267, 27), // "signal_writeMediaAudioQueue"
QT_MOC_LITERAL(25, 295, 21), // "QueueAudioInputInfo_T"
QT_MOC_LITERAL(26, 317, 21), // "signal_readMediaQueue"
QT_MOC_LITERAL(27, 339, 21), // "signal_waitTcpConnect"
QT_MOC_LITERAL(28, 361, 3), // "str"
QT_MOC_LITERAL(29, 365, 14), // "signal_endWait"
QT_MOC_LITERAL(30, 380, 19), // "signal_workFinished"
QT_MOC_LITERAL(31, 400, 13), // "slot_readData"
QT_MOC_LITERAL(32, 414, 20), // "slot_tcpDisconnected"
QT_MOC_LITERAL(33, 435, 17), // "slot_tcpConnected"
QT_MOC_LITERAL(34, 453, 20), // "slot_timerConnectSer"
QT_MOC_LITERAL(35, 474, 26), // "slot_tcpSendAuthentication"
QT_MOC_LITERAL(36, 501, 3), // "did"
QT_MOC_LITERAL(37, 505, 4), // "name"
QT_MOC_LITERAL(38, 510, 3), // "pwd"
QT_MOC_LITERAL(39, 514, 25), // "slot_tcpRecAuthentication"
QT_MOC_LITERAL(40, 540, 12), // "slot_destory"
QT_MOC_LITERAL(41, 553, 18), // "creatNewTcpConnect"
QT_MOC_LITERAL(42, 572, 2), // "ip"
QT_MOC_LITERAL(43, 575, 4), // "port"
QT_MOC_LITERAL(44, 580, 12), // "startParsing"
QT_MOC_LITERAL(45, 593, 11) // "stopParsing"

    },
    "TcpWorker\0signal_sendH264\0\0char*\0"
    "vH264Arr\0arrLen\0pts\0signal_sendPcmALaw\0"
    "PcmALawArr\0signal_sendPreparePlayAudio\0"
    "samplerate\0prenum\0bitwidth\0soundmode\0"
    "signal_sendMsg\0MsgInfo*\0info\0"
    "signal_writeMediaVideoQueue\0data\0len\0"
    "QueueVideoInputInfo_T\0param\0Enum_MediaType\0"
    "mediaType\0signal_writeMediaAudioQueue\0"
    "QueueAudioInputInfo_T\0signal_readMediaQueue\0"
    "signal_waitTcpConnect\0str\0signal_endWait\0"
    "signal_workFinished\0slot_readData\0"
    "slot_tcpDisconnected\0slot_tcpConnected\0"
    "slot_timerConnectSer\0slot_tcpSendAuthentication\0"
    "did\0name\0pwd\0slot_tcpRecAuthentication\0"
    "slot_destory\0creatNewTcpConnect\0ip\0"
    "port\0startParsing\0stopParsing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  114,    2, 0x06 /* Public */,
       7,    3,  121,    2, 0x06 /* Public */,
       9,    5,  128,    2, 0x06 /* Public */,
      14,    1,  139,    2, 0x06 /* Public */,
      17,    4,  142,    2, 0x06 /* Public */,
      24,    4,  151,    2, 0x06 /* Public */,
      26,    0,  160,    2, 0x06 /* Public */,
      27,    1,  161,    2, 0x06 /* Public */,
      29,    0,  164,    2, 0x06 /* Public */,
      30,    0,  165,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  166,    2, 0x0a /* Public */,
      32,    0,  167,    2, 0x0a /* Public */,
      33,    0,  168,    2, 0x0a /* Public */,
      34,    0,  169,    2, 0x0a /* Public */,
      35,    3,  170,    2, 0x0a /* Public */,
      39,    3,  177,    2, 0x0a /* Public */,
      40,    0,  184,    2, 0x0a /* Public */,
      41,    2,  185,    2, 0x0a /* Public */,
      44,    0,  190,    2, 0x0a /* Public */,
      45,    0,  191,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    8,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long,   10,   11,   12,   13,    6,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22,   18,   19,   21,   23,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 25, 0x80000000 | 22,   18,   19,   21,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   37,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   42,   43,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TcpWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_sendH264((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 1: _t->signal_sendPcmALaw((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 2: _t->signal_sendPreparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 3: _t->signal_sendMsg((*reinterpret_cast< MsgInfo*(*)>(_a[1]))); break;
        case 4: _t->signal_writeMediaVideoQueue((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QueueVideoInputInfo_T(*)>(_a[3])),(*reinterpret_cast< Enum_MediaType(*)>(_a[4]))); break;
        case 5: _t->signal_writeMediaAudioQueue((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QueueAudioInputInfo_T(*)>(_a[3])),(*reinterpret_cast< Enum_MediaType(*)>(_a[4]))); break;
        case 6: _t->signal_readMediaQueue(); break;
        case 7: _t->signal_waitTcpConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->signal_endWait(); break;
        case 9: _t->signal_workFinished(); break;
        case 10: _t->slot_readData(); break;
        case 11: _t->slot_tcpDisconnected(); break;
        case 12: _t->slot_tcpConnected(); break;
        case 13: _t->slot_timerConnectSer(); break;
        case 14: _t->slot_tcpSendAuthentication((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 15: _t->slot_tcpRecAuthentication((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->slot_destory(); break;
        case 17: _t->creatNewTcpConnect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->startParsing(); break;
        case 19: _t->stopParsing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpWorker::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_sendH264)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_sendPcmALaw)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(int , int , int , int , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_sendPreparePlayAudio)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(MsgInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_sendMsg)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(char * , int , QueueVideoInputInfo_T , Enum_MediaType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_writeMediaVideoQueue)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(char * , int , QueueAudioInputInfo_T , Enum_MediaType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_writeMediaAudioQueue)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_readMediaQueue)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_waitTcpConnect)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_endWait)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TcpWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpWorker::signal_workFinished)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TcpWorker.data,
    qt_meta_data_TcpWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void TcpWorker::signal_sendH264(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpWorker::signal_sendPcmALaw(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpWorker::signal_sendPreparePlayAudio(int _t1, int _t2, int _t3, int _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpWorker::signal_sendMsg(MsgInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TcpWorker::signal_writeMediaVideoQueue(char * _t1, int _t2, QueueVideoInputInfo_T _t3, Enum_MediaType _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TcpWorker::signal_writeMediaAudioQueue(char * _t1, int _t2, QueueAudioInputInfo_T _t3, Enum_MediaType _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TcpWorker::signal_readMediaQueue()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TcpWorker::signal_waitTcpConnect(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TcpWorker::signal_endWait()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TcpWorker::signal_workFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
