/****************************************************************************
** Meta object code from reading C++ file 'mp4record.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mp4record.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mp4record.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mp4Record_t {
    QByteArrayData data[9];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mp4Record_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mp4Record_t qt_meta_stringdata_Mp4Record = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Mp4Record"
QT_MOC_LITERAL(1, 10, 16), // "slot_startRecord"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "slot_endRecord"
QT_MOC_LITERAL(4, 43, 13), // "slot_writePcm"
QT_MOC_LITERAL(5, 57, 5), // "char*"
QT_MOC_LITERAL(6, 63, 4), // "data"
QT_MOC_LITERAL(7, 68, 4), // "nLen"
QT_MOC_LITERAL(8, 73, 14) // "slot_writeH264"

    },
    "Mp4Record\0slot_startRecord\0\0slot_endRecord\0"
    "slot_writePcm\0char*\0data\0nLen\0"
    "slot_writeH264"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mp4Record[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    2,   36,    2, 0x0a /* Public */,
       8,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,

       0        // eod
};

void Mp4Record::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mp4Record *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_startRecord(); break;
        case 1: _t->slot_endRecord(); break;
        case 2: _t->slot_writePcm((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slot_writeH264((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mp4Record::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Mp4Record.data,
    qt_meta_data_Mp4Record,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mp4Record::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mp4Record::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mp4Record.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mp4Record::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
