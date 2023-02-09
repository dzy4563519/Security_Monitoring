/****************************************************************************
** Meta object code from reading C++ file 'play_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/view/play_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'play_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Play_Widget_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Play_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Play_Widget_t qt_meta_stringdata_Play_Widget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Play_Widget"
QT_MOC_LITERAL(1, 12, 10), // "receiveimg"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "img"
QT_MOC_LITERAL(4, 28, 13), // "continue_stop"
QT_MOC_LITERAL(5, 42, 11), // "screenshots"
QT_MOC_LITERAL(6, 54, 11) // "trancetomp4"

    },
    "Play_Widget\0receiveimg\0\0img\0continue_stop\0"
    "screenshots\0trancetomp4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Play_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Play_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Play_Widget *_t = static_cast<Play_Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveimg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->continue_stop(); break;
        case 2: _t->screenshots(); break;
        case 3: _t->trancetomp4(); break;
        default: ;
        }
    }
}

const QMetaObject Play_Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Play_Widget.data,
      qt_meta_data_Play_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Play_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Play_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Play_Widget.stringdata0))
        return static_cast<void*>(const_cast< Play_Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Play_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
