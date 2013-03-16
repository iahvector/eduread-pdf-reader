/****************************************************************************
** Meta object code from reading C++ file 'eduread.h'
**
** Created: Sat Mar 16 11:08:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eduread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eduread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_eduRead[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      20,    8,    8,    8, 0x0a,
      31,    8,    8,    8, 0x0a,
      46,    8,    8,    8, 0x0a,
      56,    8,    8,    8, 0x0a,
      65,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_eduRead[] = {
    "eduRead\0\0goToPage()\0nextPage()\0"
    "previousPage()\0openPDF()\0zoomIn()\0"
    "zoomOut()\0"
};

void eduRead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        eduRead *_t = static_cast<eduRead *>(_o);
        switch (_id) {
        case 0: _t->goToPage(); break;
        case 1: _t->nextPage(); break;
        case 2: _t->previousPage(); break;
        case 3: _t->openPDF(); break;
        case 4: _t->zoomIn(); break;
        case 5: _t->zoomOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData eduRead::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject eduRead::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_eduRead,
      qt_meta_data_eduRead, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &eduRead::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *eduRead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *eduRead::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_eduRead))
        return static_cast<void*>(const_cast< eduRead*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int eduRead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
