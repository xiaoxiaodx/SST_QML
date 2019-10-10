/****************************************************************************
** Meta object code from reading C++ file 'ffmpegcodec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ffmpegcodec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffmpegcodec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FfmpegCodec_t {
    QByteArrayData data[41];
    char stringdata0[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FfmpegCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FfmpegCodec_t qt_meta_stringdata_FfmpegCodec = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FfmpegCodec"
QT_MOC_LITERAL(1, 12, 14), // "signal_sendImg"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "QImage*"
QT_MOC_LITERAL(4, 36, 3), // "img"
QT_MOC_LITERAL(5, 40, 16), // "signal_sendAudio"
QT_MOC_LITERAL(6, 57, 14), // "unsigned char*"
QT_MOC_LITERAL(7, 72, 4), // "buff"
QT_MOC_LITERAL(8, 77, 3), // "len"
QT_MOC_LITERAL(9, 81, 23), // "signal_preparePlayAudio"
QT_MOC_LITERAL(10, 105, 10), // "samplerate"
QT_MOC_LITERAL(11, 116, 6), // "prenum"
QT_MOC_LITERAL(12, 123, 8), // "bitwidth"
QT_MOC_LITERAL(13, 132, 9), // "soundmode"
QT_MOC_LITERAL(14, 142, 3), // "pts"
QT_MOC_LITERAL(15, 146, 11), // "resetSample"
QT_MOC_LITERAL(16, 158, 7), // "int64_t"
QT_MOC_LITERAL(17, 166, 12), // "srcCh_layout"
QT_MOC_LITERAL(18, 179, 12), // "dstCh_layout"
QT_MOC_LITERAL(19, 192, 13), // "srcSampleRate"
QT_MOC_LITERAL(20, 206, 13), // "desSampleRate"
QT_MOC_LITERAL(21, 220, 14), // "AVSampleFormat"
QT_MOC_LITERAL(22, 235, 13), // "srcSample_fmt"
QT_MOC_LITERAL(23, 249, 13), // "dstSample_fmt"
QT_MOC_LITERAL(24, 263, 13), // "srcNb_samples"
QT_MOC_LITERAL(25, 277, 22), // "vNakedStreamDecodeInit"
QT_MOC_LITERAL(26, 300, 9), // "AVCodecID"
QT_MOC_LITERAL(27, 310, 7), // "codecId"
QT_MOC_LITERAL(28, 318, 22), // "aNakedStreamDecodeInit"
QT_MOC_LITERAL(29, 341, 10), // "sample_fmt"
QT_MOC_LITERAL(30, 352, 11), // "sample_rate"
QT_MOC_LITERAL(31, 364, 8), // "channels"
QT_MOC_LITERAL(32, 373, 12), // "decodeAFrame"
QT_MOC_LITERAL(33, 386, 8), // "uint8_t*"
QT_MOC_LITERAL(34, 395, 6), // "inbuff"
QT_MOC_LITERAL(35, 402, 9), // "inbufflen"
QT_MOC_LITERAL(36, 412, 11), // "QByteArray&"
QT_MOC_LITERAL(37, 424, 6), // "outArr"
QT_MOC_LITERAL(38, 431, 12), // "decodeVFrame"
QT_MOC_LITERAL(39, 444, 7), // "bufflen"
QT_MOC_LITERAL(40, 452, 10) // "finishWork"

    },
    "FfmpegCodec\0signal_sendImg\0\0QImage*\0"
    "img\0signal_sendAudio\0unsigned char*\0"
    "buff\0len\0signal_preparePlayAudio\0"
    "samplerate\0prenum\0bitwidth\0soundmode\0"
    "pts\0resetSample\0int64_t\0srcCh_layout\0"
    "dstCh_layout\0srcSampleRate\0desSampleRate\0"
    "AVSampleFormat\0srcSample_fmt\0dstSample_fmt\0"
    "srcNb_samples\0vNakedStreamDecodeInit\0"
    "AVCodecID\0codecId\0aNakedStreamDecodeInit\0"
    "sample_fmt\0sample_rate\0channels\0"
    "decodeAFrame\0uint8_t*\0inbuff\0inbufflen\0"
    "QByteArray&\0outArr\0decodeVFrame\0bufflen\0"
    "finishWork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FfmpegCodec[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       9,    5,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    7,   78,    2, 0x0a /* Public */,
      25,    1,   93,    2, 0x0a /* Public */,
      28,    4,   96,    2, 0x0a /* Public */,
      32,    3,  105,    2, 0x0a /* Public */,
      38,    2,  112,    2, 0x0a /* Public */,
      40,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long,   10,   11,   12,   13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Int, QMetaType::Int, 0x80000000 | 21, 0x80000000 | 21, QMetaType::Int,   17,   18,   19,   20,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 21, QMetaType::Int, QMetaType::Int,   27,   29,   30,   31,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Int, 0x80000000 | 36,   34,   35,   37,
    0x80000000 | 3, 0x80000000 | 33, QMetaType::Int,    7,   39,
    QMetaType::Void,

       0        // eod
};

void FfmpegCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FfmpegCodec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_sendImg((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->signal_sendAudio((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->signal_preparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 3: _t->resetSample((*reinterpret_cast< int64_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< AVSampleFormat(*)>(_a[5])),(*reinterpret_cast< AVSampleFormat(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 4: _t->vNakedStreamDecodeInit((*reinterpret_cast< AVCodecID(*)>(_a[1]))); break;
        case 5: _t->aNakedStreamDecodeInit((*reinterpret_cast< AVCodecID(*)>(_a[1])),(*reinterpret_cast< AVSampleFormat(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->decodeAFrame((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 7: { QImage* _r = _t->decodeVFrame((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->finishWork(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FfmpegCodec::*)(QImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FfmpegCodec::signal_sendImg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FfmpegCodec::*)(unsigned char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FfmpegCodec::signal_sendAudio)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FfmpegCodec::*)(int , int , int , int , long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FfmpegCodec::signal_preparePlayAudio)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FfmpegCodec::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FfmpegCodec.data,
    qt_meta_data_FfmpegCodec,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FfmpegCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FfmpegCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FfmpegCodec.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FfmpegCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FfmpegCodec::signal_sendImg(QImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FfmpegCodec::signal_sendAudio(unsigned char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FfmpegCodec::signal_preparePlayAudio(int _t1, int _t2, int _t3, int _t4, long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
