/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../KlimaYazilim/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "updatee"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 21), // "on_klimaAcBtn_clicked"
QT_MOC_LITERAL(4, 42, 24), // "on_klimaKapatBtn_clicked"
QT_MOC_LITERAL(5, 67, 21), // "on_kademe1Btn_clicked"
QT_MOC_LITERAL(6, 89, 21), // "on_kademe2Btn_clicked"
QT_MOC_LITERAL(7, 111, 21), // "on_kademe3Btn_clicked"
QT_MOC_LITERAL(8, 133, 23), // "on_MainWindow_destroyed"
QT_MOC_LITERAL(9, 157, 29), // "on_zamanCalistirBtn_2_clicked"
QT_MOC_LITERAL(10, 187, 27), // "on_sicaklikArtirBtn_clicked"
QT_MOC_LITERAL(11, 215, 27), // "on_sicaklikAzaltBtn_clicked"
QT_MOC_LITERAL(12, 243, 24), // "on_zamanArtirBtn_clicked"
QT_MOC_LITERAL(13, 268, 24), // "on_zamanAzaltBtn_clicked"
QT_MOC_LITERAL(14, 293, 27) // "on_zamanCalistirBtn_clicked"

    },
    "MainWindow\0updatee\0\0on_klimaAcBtn_clicked\0"
    "on_klimaKapatBtn_clicked\0on_kademe1Btn_clicked\0"
    "on_kademe2Btn_clicked\0on_kademe3Btn_clicked\0"
    "on_MainWindow_destroyed\0"
    "on_zamanCalistirBtn_2_clicked\0"
    "on_sicaklikArtirBtn_clicked\0"
    "on_sicaklikAzaltBtn_clicked\0"
    "on_zamanArtirBtn_clicked\0"
    "on_zamanAzaltBtn_clicked\0"
    "on_zamanCalistirBtn_clicked"
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
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatee(); break;
        case 1: _t->on_klimaAcBtn_clicked(); break;
        case 2: _t->on_klimaKapatBtn_clicked(); break;
        case 3: _t->on_kademe1Btn_clicked(); break;
        case 4: _t->on_kademe2Btn_clicked(); break;
        case 5: _t->on_kademe3Btn_clicked(); break;
        case 6: _t->on_MainWindow_destroyed(); break;
        case 7: _t->on_zamanCalistirBtn_2_clicked(); break;
        case 8: _t->on_sicaklikArtirBtn_clicked(); break;
        case 9: _t->on_sicaklikAzaltBtn_clicked(); break;
        case 10: _t->on_zamanArtirBtn_clicked(); break;
        case 11: _t->on_zamanAzaltBtn_clicked(); break;
        case 12: _t->on_zamanCalistirBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
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
QT_END_MOC_NAMESPACE
