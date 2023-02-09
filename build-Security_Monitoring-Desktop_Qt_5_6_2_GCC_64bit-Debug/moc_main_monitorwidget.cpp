/****************************************************************************
** Meta object code from reading C++ file 'main_monitorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/view/main_monitorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_monitorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main_MonitorWidget_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_MonitorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_MonitorWidget_t qt_meta_stringdata_Main_MonitorWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Main_MonitorWidget"
QT_MOC_LITERAL(1, 19, 10), // "receiveImg"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "img"
QT_MOC_LITERAL(4, 35, 8), // "ToSingle"
QT_MOC_LITERAL(5, 44, 6) // "ToFour"

    },
    "Main_MonitorWidget\0receiveImg\0\0img\0"
    "ToSingle\0ToFour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_MonitorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main_MonitorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_MonitorWidget *_t = static_cast<Main_MonitorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->ToSingle(); break;
        case 2: _t->ToFour(); break;
        default: ;
        }
    }
}

const QMetaObject Main_MonitorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Main_MonitorWidget.data,
      qt_meta_data_Main_MonitorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Main_MonitorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_MonitorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Main_MonitorWidget.stringdata0))
        return static_cast<void*>(const_cast< Main_MonitorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Main_MonitorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
