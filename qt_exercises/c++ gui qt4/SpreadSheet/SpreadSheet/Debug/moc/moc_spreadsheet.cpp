/****************************************************************************
** Meta object code from reading C++ file 'spreadsheet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../spreadsheet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spreadsheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Spreadsheet_t {
    QByteArrayData data[18];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spreadsheet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spreadsheet_t qt_meta_stringdata_Spreadsheet = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Spreadsheet"
QT_MOC_LITERAL(1, 12, 8), // "modified"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "cut"
QT_MOC_LITERAL(4, 26, 4), // "copy"
QT_MOC_LITERAL(5, 31, 5), // "paste"
QT_MOC_LITERAL(6, 37, 3), // "del"
QT_MOC_LITERAL(7, 41, 16), // "selectCurrentRow"
QT_MOC_LITERAL(8, 58, 19), // "selectCurrentColumn"
QT_MOC_LITERAL(9, 78, 11), // "recalculate"
QT_MOC_LITERAL(10, 90, 18), // "setAutoRecalculate"
QT_MOC_LITERAL(11, 109, 6), // "recalc"
QT_MOC_LITERAL(12, 116, 8), // "findNext"
QT_MOC_LITERAL(13, 125, 3), // "str"
QT_MOC_LITERAL(14, 129, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(15, 149, 2), // "cs"
QT_MOC_LITERAL(16, 152, 12), // "findPrevious"
QT_MOC_LITERAL(17, 165, 16) // "somethingChanged"

    },
    "Spreadsheet\0modified\0\0cut\0copy\0paste\0"
    "del\0selectCurrentRow\0selectCurrentColumn\0"
    "recalculate\0setAutoRecalculate\0recalc\0"
    "findNext\0str\0Qt::CaseSensitivity\0cs\0"
    "findPrevious\0somethingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spreadsheet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      12,    2,   85,    2, 0x0a /* Public */,
      16,    2,   90,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Void,

       0        // eod
};

void Spreadsheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Spreadsheet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->cut(); break;
        case 2: _t->copy(); break;
        case 3: _t->paste(); break;
        case 4: _t->del(); break;
        case 5: _t->selectCurrentRow(); break;
        case 6: _t->selectCurrentColumn(); break;
        case 7: _t->recalculate(); break;
        case 8: _t->setAutoRecalculate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->findNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 10: _t->findPrevious((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 11: _t->somethingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Spreadsheet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Spreadsheet::modified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Spreadsheet::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_Spreadsheet.data,
    qt_meta_data_Spreadsheet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Spreadsheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spreadsheet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Spreadsheet.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int Spreadsheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Spreadsheet::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
