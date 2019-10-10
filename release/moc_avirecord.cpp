/****************************************************************************
** Meta object code from reading C++ file 'avirecord.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../avirecord.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avirecord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AviRecord_t {
    QByteArrayData data[12];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AviRecord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AviRecord_t qt_meta_stringdata_AviRecord = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AviRecord"
QT_MOC_LITERAL(1, 10, 15), // "slot_writeAudio"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "char*"
QT_MOC_LITERAL(4, 33, 4), // "buff"
QT_MOC_LITERAL(5, 38, 3), // "len"
QT_MOC_LITERAL(6, 42, 8), // "tempTime"
QT_MOC_LITERAL(7, 51, 15), // "slot_writeVedio"
QT_MOC_LITERAL(8, 67, 14), // "slot_endRecord"
QT_MOC_LITERAL(9, 82, 16), // "slot_startRecord"
QT_MOC_LITERAL(10, 99, 3), // "did"
QT_MOC_LITERAL(11, 103, 3) // "pts"

    },
    "AviRecord\0slot_writeAudio\0\0char*\0buff\0"
    "len\0tempTime\0slot_writeVedio\0"
    "slot_endRecord\0slot_startRecord\0did\0"
    "pts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AviRecord[] = {

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
       8,    0,   48,    2, 0x0a /* Public */,
       9,    2,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,   10,   11,

       0        // eod
};

void AviRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AviRecord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_writeAudio((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 1: _t->slot_writeVedio((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 2: _t->slot_endRecord(); break;
        case 3: _t->slot_startRecord((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AviRecord::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AviRecord.data,
    qt_meta_data_AviRecord,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AviRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AviRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AviRecord.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AviRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
