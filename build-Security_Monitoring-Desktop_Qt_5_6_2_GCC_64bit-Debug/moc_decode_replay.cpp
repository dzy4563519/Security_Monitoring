/****************************************************************************
** Meta object code from reading C++ file 'decode_replay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ffmpeg/decode_replay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decode_replay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Decode_Replay_t {
    QByteArrayData data[6];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Decode_Replay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Decode_Replay_t qt_meta_stringdata_Decode_Replay = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Decode_Replay"
QT_MOC_LITERAL(1, 14, 8), // "sendImg2"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "img"
QT_MOC_LITERAL(4, 28, 8), // "setSpeed"
QT_MOC_LITERAL(5, 37, 5) // "speed"

    },
    "Decode_Replay\0sendImg2\0\0img\0setSpeed\0"
    "speed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Decode_Replay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Decode_Replay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Decode_Replay *_t = static_cast<Decode_Replay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendImg2((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->setSpeed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Decode_Replay::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Decode_Replay::sendImg2)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Decode_Replay::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Decode_Replay.data,
      qt_meta_data_Decode_Replay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Decode_Replay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Decode_Replay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Decode_Replay.stringdata0))
        return static_cast<void*>(const_cast< Decode_Replay*>(this));
    return QThread::qt_metacast(_clname);
}

int Decode_Replay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Decode_Replay::sendImg2(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
