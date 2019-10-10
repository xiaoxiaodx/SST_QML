/****************************************************************************
** Meta object code from reading C++ file 'mediadataprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mediadataprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediadataprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaDataProcess_t {
    QByteArrayData data[26];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaDataProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaDataProcess_t qt_meta_stringdata_MediaDataProcess = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MediaDataProcess"
QT_MOC_LITERAL(1, 17, 14), // "signal_sendImg"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "QImage*"
QT_MOC_LITERAL(4, 41, 4), // "pImg"
QT_MOC_LITERAL(5, 46, 16), // "signal_playAudio"
QT_MOC_LITERAL(6, 63, 14), // "unsigned char*"
QT_MOC_LITERAL(7, 78, 4), // "buff"
QT_MOC_LITERAL(8, 83, 3), // "len"
QT_MOC_LITERAL(9, 87, 23), // "signal_preparePlayAudio"
QT_MOC_LITERAL(10, 111, 10), // "samplerate"
QT_MOC_LITERAL(11, 122, 6), // "prenum"
QT_MOC_LITERAL(12, 129, 8), // "bitwidth"
QT_MOC_LITERAL(13, 138, 9), // "soundmode"
QT_MOC_LITERAL(14, 148, 3), // "pts"
QT_MOC_LITERAL(15, 152, 22), // "slot_loopReadQueueData"
QT_MOC_LITERAL(16, 175, 13), // "slot_stopRead"
QT_MOC_LITERAL(17, 189, 24), // "slot_writeQueueVideoData"
QT_MOC_LITERAL(18, 214, 5), // "char*"
QT_MOC_LITERAL(19, 220, 4), // "data"
QT_MOC_LITERAL(20, 225, 21), // "QueueVideoInputInfo_T"
QT_MOC_LITERAL(21, 247, 5), // "param"
QT_MOC_LITERAL(22, 253, 14), // "Enum_MediaType"
QT_MOC_LITERAL(23, 268, 9), // "mediaType"
QT_MOC_LITERAL(24, 278, 24), // "slot_writeQueueAudioData"
QT_MOC_LITERAL(25, 303, 21) // "QueueAudioInputInfo_T"

    },
    "MediaDataProcess\0signal_sendImg\0\0"
    "QImage*\0pImg\0signal_playAudio\0"
    "unsigned char*\0buff\0len\0signal_preparePlayAudio\0"
    "samplerate\0prenum\0bitwidth\0soundmode\0"
    "pts\0slot_loopReadQueueData\0slot_stopRead\0"
    "slot_writeQueueVideoData\0char*\0data\0"
    "QueueVideoInputInfo_T\0param\0Enum_MediaType\0"
    "mediaType\0slot_writeQueueAudioData\0"
    "QueueAudioInputInfo_T"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaDataProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    2,   52,    2, 0x06 /* Public */,
       9,    5,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   68,    2, 0x0a /* Public */,
      16,    0,   69,    2, 0x0a /* Public */,
      17,    4,   70,    2, 0x0a /* Public */,
      24,    4,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long,   10,   11,   12,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, 0x80000000 | 20, 0x80000000 | 22,   19,    8,   21,   23,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, 0x80000000 | 25, 0x80000000 | 22,   19,    8,   21,   23,

       0        // eod
};

void MediaDataProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaDataProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_sendImg((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->signal_playAudio((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->signal_preparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 3: _t->slot_loopReadQueueData(); break;
        case 4: _t->slot_stopRead(); break;
        case 5: _t->slot_writeQueueVideoData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QueueVideoInputInfo_T(*)>(_a[3])),(*reinterpret_cast< Enum_MediaType(*)>(_a[4]))); break;
        case 6: _t->slot_writeQueueAudioData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QueueAudioInputInfo_T(*)>(_a[3])),(*reinterpret_cast< Enum_MediaType(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaDataProcess::*)(QImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDataProcess::signal_sendImg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaDataProcess::*)(unsigned char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDataProcess::signal_playAudio)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaDataProcess::*)(int , int , int , int , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDataProcess::signal_preparePlayAudio)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MediaDataProcess::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MediaDataProcess.data,
    qt_meta_data_MediaDataProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaDataProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaDataProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaDataProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediaDataProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MediaDataProcess::signal_sendImg(QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MediaDataProcess::signal_playAudio(unsigned char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MediaDataProcess::signal_preparePlayAudio(int _t1, int _t2, int _t3, int _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
