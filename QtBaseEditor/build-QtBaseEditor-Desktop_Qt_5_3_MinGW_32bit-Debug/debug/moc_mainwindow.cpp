/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtBaseEditor/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 19),
QT_MOC_LITERAL(4, 53, 20),
QT_MOC_LITERAL(5, 74, 18),
QT_MOC_LITERAL(6, 93, 22),
QT_MOC_LITERAL(7, 116, 4),
QT_MOC_LITERAL(8, 121, 22),
QT_MOC_LITERAL(9, 144, 26),
QT_MOC_LITERAL(10, 171, 27),
QT_MOC_LITERAL(11, 199, 17),
QT_MOC_LITERAL(12, 217, 16),
QT_MOC_LITERAL(13, 234, 10),
QT_MOC_LITERAL(14, 245, 28),
QT_MOC_LITERAL(15, 274, 29),
QT_MOC_LITERAL(16, 304, 13)
    },
    "MainWindow\0on_renameAll_clicked\0\0"
    "on_delDescr_clicked\0on_saveDescr_clicked\0"
    "on_addFace_clicked\0on_inputX_valueChanged\0"
    "arg1\0on_inputY_valueChanged\0"
    "on_inputWidth_valueChanged\0"
    "on_inputHeight_valueChanged\0"
    "on_showPr_clicked\0on_delIm_clicked\0"
    "deleteFace\0reactionBaseSelectionChanged\0"
    "reactionFacesSelectionChanged\0"
    "runViolaJones"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_renameAll_clicked(); break;
        case 1: _t->on_delDescr_clicked(); break;
        case 2: _t->on_saveDescr_clicked(); break;
        case 3: _t->on_addFace_clicked(); break;
        case 4: _t->on_inputX_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_inputY_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_inputWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_inputHeight_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_showPr_clicked(); break;
        case 9: _t->on_delIm_clicked(); break;
        case 10: _t->deleteFace(); break;
        case 11: _t->reactionBaseSelectionChanged(); break;
        case 12: _t->reactionFacesSelectionChanged(); break;
        case 13: _t->runViolaJones(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
