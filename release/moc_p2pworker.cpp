/****************************************************************************
** Meta object code from reading C++ file 'p2pworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p2p/p2pworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'p2pworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_P2pWorker_t {
    QByteArrayData data[18];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_P2pWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_P2pWorker_t qt_meta_stringdata_P2pWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "P2pWorker"
QT_MOC_LITERAL(1, 10, 15), // "signal_sendH264"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "char*"
QT_MOC_LITERAL(4, 33, 8), // "vH264Arr"
QT_MOC_LITERAL(5, 42, 6), // "arrLen"
QT_MOC_LITERAL(6, 49, 3), // "pts"
QT_MOC_LITERAL(7, 53, 18), // "signal_sendPcmALaw"
QT_MOC_LITERAL(8, 72, 10), // "PcmALawArr"
QT_MOC_LITERAL(9, 83, 14), // "signal_loopEnd"
QT_MOC_LITERAL(10, 98, 14), // "signal_sendMsg"
QT_MOC_LITERAL(11, 113, 8), // "MsgInfo*"
QT_MOC_LITERAL(12, 122, 4), // "info"
QT_MOC_LITERAL(13, 127, 15), // "slot_connectDev"
QT_MOC_LITERAL(14, 143, 9), // "deviceDid"
QT_MOC_LITERAL(15, 153, 4), // "name"
QT_MOC_LITERAL(16, 158, 3), // "pwd"
QT_MOC_LITERAL(17, 162, 18) // "slot_startLoopRead"

    },
    "P2pWorker\0signal_sendH264\0\0char*\0"
    "vH264Arr\0arrLen\0pts\0signal_sendPcmALaw\0"
    "PcmALawArr\0signal_loopEnd\0signal_sendMsg\0"
    "MsgInfo*\0info\0slot_connectDev\0deviceDid\0"
    "name\0pwd\0slot_startLoopRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_P2pWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    3,   51,    2, 0x06 /* Public */,
       9,    0,   58,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    3,   62,    2, 0x0a /* Public */,
      17,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    8,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void,

       0        // eod
};

void P2pWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<P2pWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_sendH264((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 1: _t->signal_sendPcmALaw((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 2: _t->signal_loopEnd(); break;
        case 3: _t->signal_sendMsg((*reinterpret_cast< MsgInfo*(*)>(_a[1]))); break;
        case 4: _t->slot_connectDev((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->slot_startLoopRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (P2pWorker::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&P2pWorker::signal_sendH264)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (P2pWorker::*)(char * , int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&P2pWorker::signal_sendPcmALaw)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (P2pWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&P2pWorker::signal_loopEnd)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (P2pWorker::*)(MsgInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&P2pWorker::signal_sendMsg)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject P2pWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_P2pWorker.data,
    qt_meta_data_P2pWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *P2pWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *P2pWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_P2pWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int P2pWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void P2pWorker::signal_sendH264(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void P2pWorker::signal_sendPcmALaw(char * _t1, int _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void P2pWorker::signal_loopEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void P2pWorker::signal_sendMsg(MsgInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
