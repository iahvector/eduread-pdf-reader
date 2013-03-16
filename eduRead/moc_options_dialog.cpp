/****************************************************************************
** Meta object code from reading C++ file 'options_dialog.h'
**
** Created: Thu Jun 14 16:30:22 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_options_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      33,   15,   15,   15, 0x05,
      49,   15,   15,   15, 0x05,
      66,   15,   15,   15, 0x05,
      99,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   15,   15,   15, 0x0a,
     135,   15,   15,   15, 0x0a,
     149,   15,   15,   15, 0x0a,
     164,   15,   15,   15, 0x0a,
     195,   15,   15,   15, 0x0a,
     214,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_options_Dialog[] = {
    "options_Dialog\0\0openPDF_signal()\0"
    "zoomIn_signal()\0zoomOut_signal()\0"
    "scaleFactorChanged_signal(float)\0"
    "goToPage_signal(int)\0openPDF_slot()\0"
    "zoomIn_slot()\0zoomOut_slot()\0"
    "scaleFactorChanged_slot(float)\0"
    "goToPage_slot(int)\0enableZoomSearchGoToPage()\0"
};

void options_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        options_Dialog *_t = static_cast<options_Dialog *>(_o);
        switch (_id) {
        case 0: _t->openPDF_signal(); break;
        case 1: _t->zoomIn_signal(); break;
        case 2: _t->zoomOut_signal(); break;
        case 3: _t->scaleFactorChanged_signal((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->goToPage_signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->openPDF_slot(); break;
        case 6: _t->zoomIn_slot(); break;
        case 7: _t->zoomOut_slot(); break;
        case 8: _t->scaleFactorChanged_slot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->goToPage_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->enableZoomSearchGoToPage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData options_Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject options_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_options_Dialog,
      qt_meta_data_options_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &options_Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *options_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *options_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_options_Dialog))
        return static_cast<void*>(const_cast< options_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int options_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void options_Dialog::openPDF_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void options_Dialog::zoomIn_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void options_Dialog::zoomOut_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void options_Dialog::scaleFactorChanged_signal(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void options_Dialog::goToPage_signal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
