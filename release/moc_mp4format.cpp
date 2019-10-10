/****************************************************************************
** Meta object code from reading C++ file 'mp4format.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VideoManagement/mp4format.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mp4format.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mp4Format_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mp4Format_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mp4Format_t qt_meta_stringdata_Mp4Format = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Mp4Format"
QT_MOC_LITERAL(1, 10, 22), // "slot_write_audio_frame"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "char*"
QT_MOC_LITERAL(4, 40, 4), // "data"
QT_MOC_LITERAL(5, 45, 7), // "bufflen"
QT_MOC_LITERAL(6, 53, 8), // "tempTime"
QT_MOC_LITERAL(7, 62, 22), // "slot_write_video_frame"
QT_MOC_LITERAL(8, 85, 14), // "slot_createMp4"
QT_MOC_LITERAL(9, 100, 11), // "filenameStr"
QT_MOC_LITERAL(10, 112, 13) // "slot_closeMp4"

    },
    "Mp4Format\0slot_write_audio_frame\0\0"
    "char*\0data\0bufflen\0tempTime\0"
    "slot_write_video_frame\0slot_createMp4\0"
    "filenameStr\0slot_closeMp4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mp4Format[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       7,    3,   41,    2, 0x0a /* Public */,
       8,    2,   48,    2, 0x0a /* Public */,
      10,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Int, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    9,    6,
    QMetaType::Void,

       0        // eod
};

void Mp4Format::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mp4Format *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->slot_write_audio_frame((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->slot_write_video_frame((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->slot_createMp4((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 3: _t->slot_closeMp4(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mp4Format::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Mp4Format.data,
    qt_meta_data_Mp4Format,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mp4Format::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mp4Format::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mp4Format.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mp4Format::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
