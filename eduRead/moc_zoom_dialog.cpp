/****************************************************************************
** Meta object code from reading C++ file 'zoom_dialog.h'
**
** Created: Thu Jun 14 16:30:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zoom_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoom_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_zoom_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      29,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   12,   12,   12, 0x0a,
      60,   12,   12,   12, 0x0a,
      75,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_zoom_Dialog[] = {
    "zoom_Dialog\0\0zoomIn_signal()\0"
    "zoomOut_signal()\0zoomIn_slot()\0"
    "zoomOut_slot()\0scaleFactorChanged(float)\0"
};

void zoom_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        zoom_Dialog *_t = static_cast<zoom_Dialog *>(_o);
        switch (_id) {
        case 0: _t->zoomIn_signal(); break;
        case 1: _t->zoomOut_signal(); break;
        case 2: _t->zoomIn_slot(); break;
        case 3: _t->zoomOut_slot(); break;
        case 4: _t->scaleFactorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData zoom_Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject zoom_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_zoom_Dialog,
      qt_meta_data_zoom_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &zoom_Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *zoom_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *zoom_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_zoom_Dialog))
        return static_cast<void*>(const_cast< zoom_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int zoom_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void zoom_Dialog::zoomIn_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void zoom_Dialog::zoomOut_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
