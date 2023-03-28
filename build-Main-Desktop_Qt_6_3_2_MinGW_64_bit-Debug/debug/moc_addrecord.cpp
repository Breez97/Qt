/****************************************************************************
** Meta object code from reading C++ file 'addrecord.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Main/addrecord.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addrecord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addrecord_t {
    uint offsetsAndSizes[14];
    char stringdata0[10];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[32];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_addrecord_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_addrecord_t qt_meta_stringdata_addrecord = {
    {
        QT_MOC_LITERAL(0, 9),  // "addrecord"
        QT_MOC_LITERAL(10, 13),  // "refresh_table"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(47, 21),  // "on_toolButton_clicked"
        QT_MOC_LITERAL(69, 31),  // "on_comboBox_currentIndexChanged"
        QT_MOC_LITERAL(101, 5)   // "index"
    },
    "addrecord",
    "refresh_table",
    "",
    "on_pushButton_clicked",
    "on_toolButton_clicked",
    "on_comboBox_currentIndexChanged",
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addrecord[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void addrecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addrecord *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh_table(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (addrecord::*)();
            if (_t _q_method = &addrecord::refresh_table; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject addrecord::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_addrecord.offsetsAndSizes,
    qt_meta_data_addrecord,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_addrecord_t
, QtPrivate::TypeAndForceComplete<addrecord, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *addrecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addrecord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addrecord.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int addrecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void addrecord::refresh_table()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
