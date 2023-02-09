/****************************************************************************
** Meta object code from reading C++ file 'main_replaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/view/main_replaywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_replaywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main_ReplayWidget_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_ReplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_ReplayWidget_t qt_meta_stringdata_Main_ReplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Main_ReplayWidget"
QT_MOC_LITERAL(1, 18, 11), // "click_video"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 48, 4), // "item"
QT_MOC_LITERAL(5, 53, 7), // "tovideo"
QT_MOC_LITERAL(6, 61, 7), // "toimage"
QT_MOC_LITERAL(7, 69, 4), // "next"
QT_MOC_LITERAL(8, 74, 8), // "previous"
QT_MOC_LITERAL(9, 83, 14), // "calendar_query"
QT_MOC_LITERAL(10, 98, 10), // "receiveimg"
QT_MOC_LITERAL(11, 109, 3), // "img"
QT_MOC_LITERAL(12, 113, 11) // "click_image"

    },
    "Main_ReplayWidget\0click_video\0\0"
    "QListWidgetItem*\0item\0tovideo\0toimage\0"
    "next\0previous\0calendar_query\0receiveimg\0"
    "img\0click_image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_ReplayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      12,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   11,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Main_ReplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_ReplayWidget *_t = static_cast<Main_ReplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->click_video((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->tovideo(); break;
        case 2: _t->toimage(); break;
        case 3: _t->next(); break;
        case 4: _t->previous(); break;
        case 5: _t->calendar_query(); break;
        case 6: _t->receiveimg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 7: _t->click_image((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Main_ReplayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Main_ReplayWidget.data,
      qt_meta_data_Main_ReplayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Main_ReplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_ReplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Main_ReplayWidget.stringdata0))
        return static_cast<void*>(const_cast< Main_ReplayWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Main_ReplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
