/****************************************************************************
** Meta object code from reading C++ file 'playaudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../playaudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playaudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayAudio_t {
    QByteArrayData data[20];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayAudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayAudio_t qt_meta_stringdata_PlayAudio = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PlayAudio"
QT_MOC_LITERAL(1, 10, 21), // "slot_preparePlayAudio"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "samplerate"
QT_MOC_LITERAL(4, 44, 6), // "prenum"
QT_MOC_LITERAL(5, 51, 8), // "bitwidth"
QT_MOC_LITERAL(6, 60, 9), // "soundmode"
QT_MOC_LITERAL(7, 70, 3), // "pts"
QT_MOC_LITERAL(8, 74, 14), // "slot_playAudio"
QT_MOC_LITERAL(9, 89, 16), // "preparePlayAudio"
QT_MOC_LITERAL(10, 106, 10), // "sampleRate"
QT_MOC_LITERAL(11, 117, 12), // "channelCount"
QT_MOC_LITERAL(12, 130, 10), // "sampleSize"
QT_MOC_LITERAL(13, 141, 21), // "slot_GetOneAudioFrame"
QT_MOC_LITERAL(14, 163, 14), // "unsigned char*"
QT_MOC_LITERAL(15, 178, 4), // "buff"
QT_MOC_LITERAL(16, 183, 3), // "len"
QT_MOC_LITERAL(17, 187, 21), // "slot_audioStateChange"
QT_MOC_LITERAL(18, 209, 13), // "QAudio::State"
QT_MOC_LITERAL(19, 223, 5) // "state"

    },
    "PlayAudio\0slot_preparePlayAudio\0\0"
    "samplerate\0prenum\0bitwidth\0soundmode\0"
    "pts\0slot_playAudio\0preparePlayAudio\0"
    "sampleRate\0channelCount\0sampleSize\0"
    "slot_GetOneAudioFrame\0unsigned char*\0"
    "buff\0len\0slot_audioStateChange\0"
    "QAudio::State\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayAudio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    3,   51,    2, 0x0a /* Public */,
      13,    3,   58,    2, 0x0a /* Public */,
      17,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Long,    3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::Long,   15,   16,    7,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void PlayAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayAudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_preparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 1: _t->slot_playAudio(); break;
        case 2: _t->preparePlayAudio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->slot_GetOneAudioFrame((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 4: _t->slot_audioStateChange((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayAudio::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PlayAudio.data,
    qt_meta_data_PlayAudio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlayAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayAudio.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
