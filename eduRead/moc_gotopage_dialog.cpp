/****************************************************************************
** Meta object code from reading C++ file 'gotopage_dialog.h'
**
** Created: Thu Jun 14 16:30:23 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gotopage_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gotopage_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_goToPage_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_goToPage_Dialog[] = {
    "goToPage_Dialog\0\0goToPage_signal(int)\0"
    "goToPage_slot()\0"
};

void goToPage_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        goToPage_Dialog *_t = static_cast<goToPage_Dialog *>(_o);
        switch (_id) {
        case 0: _t->goToPage_signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->goToPage_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData goToPage_Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject goToPage_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_goToPage_Dialog,
      qt_meta_data_goToPage_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &goToPage_Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *goToPage_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *goToPage_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_goToPage_Dialog))
        return static_cast<void*>(const_cast< goToPage_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int goToPage_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void goToPage_Dialog::goToPage_signal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
