/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pic18f/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "pushButtonLED3OnClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "pushButtonLED3OffClicked"
QT_MOC_LITERAL(4, 61, 23), // "pushButtonLED4OnClicked"
QT_MOC_LITERAL(5, 85, 24), // "pushButtonLED4OffClicked"
QT_MOC_LITERAL(6, 110, 27), // "pushButtonLED3ToggleClicked"
QT_MOC_LITERAL(7, 138, 31), // "on_pushButtonLED4Toggle_clicked"
QT_MOC_LITERAL(8, 170, 20), // "pushButtonPotClicked"
QT_MOC_LITERAL(9, 191, 27), // "slineEditPotEditingFinished"
QT_MOC_LITERAL(10, 219, 33), // "on_pushButtonLED4Toggle_2_cli..."
QT_MOC_LITERAL(11, 253, 7), // "checked"
QT_MOC_LITERAL(12, 261, 33), // "on_pushButtonLED4Toggle_3_cli..."
QT_MOC_LITERAL(13, 295, 33), // "on_pushButtonLED4Toggle_4_cli..."
QT_MOC_LITERAL(14, 329, 33) // "on_pushButtonLED4Toggle_5_cli..."

    },
    "MainWindow\0pushButtonLED3OnClicked\0\0"
    "pushButtonLED3OffClicked\0"
    "pushButtonLED4OnClicked\0"
    "pushButtonLED4OffClicked\0"
    "pushButtonLED3ToggleClicked\0"
    "on_pushButtonLED4Toggle_clicked\0"
    "pushButtonPotClicked\0slineEditPotEditingFinished\0"
    "on_pushButtonLED4Toggle_2_clicked\0"
    "checked\0on_pushButtonLED4Toggle_3_clicked\0"
    "on_pushButtonLED4Toggle_4_clicked\0"
    "on_pushButtonLED4Toggle_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
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
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushButtonLED3OnClicked(); break;
        case 1: _t->pushButtonLED3OffClicked(); break;
        case 2: _t->pushButtonLED4OnClicked(); break;
        case 3: _t->pushButtonLED4OffClicked(); break;
        case 4: _t->pushButtonLED3ToggleClicked(); break;
        case 5: _t->on_pushButtonLED4Toggle_clicked(); break;
        case 6: _t->pushButtonPotClicked(); break;
        case 7: _t->slineEditPotEditingFinished(); break;

        case 9: _t->on_pushButtonLED4Toggle_2_clicked(); break;
        case 10: _t->on_pushButtonLED4Toggle_3_clicked(); break;
        case 11: _t->on_pushButtonLED4Toggle_4_clicked(); break;
        case 12: _t->on_pushButtonLED4Toggle_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
