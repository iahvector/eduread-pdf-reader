/********************************************************************************
** Form generated from reading UI file 'zoom_widget.ui'
**
** Created: Sat Jun 9 10:27:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOM_WIDGET_H
#define UI_ZOOM_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zoom_widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *zoomOut_zoom_pushButton;
    QPushButton *back_zoom_pushButton;
    QLineEdit *zomeFactor_zoom_lineEdit;
    QPushButton *zoomIn_zoom_pushButton;

    void setupUi(QWidget *zoom_widget)
    {
        if (zoom_widget->objectName().isEmpty())
            zoom_widget->setObjectName(QString::fromUtf8("zoom_widget"));
        zoom_widget->resize(118, 272);
        gridLayout = new QGridLayout(zoom_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        zoomOut_zoom_pushButton = new QPushButton(zoom_widget);
        zoomOut_zoom_pushButton->setObjectName(QString::fromUtf8("zoomOut_zoom_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoomOut_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomOut_zoom_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(zoomOut_zoom_pushButton, 2, 1, 1, 1);

        back_zoom_pushButton = new QPushButton(zoom_widget);
        back_zoom_pushButton->setObjectName(QString::fromUtf8("back_zoom_pushButton"));
        sizePolicy.setHeightForWidth(back_zoom_pushButton->sizePolicy().hasHeightForWidth());
        back_zoom_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(back_zoom_pushButton, 3, 1, 1, 1);

        zomeFactor_zoom_lineEdit = new QLineEdit(zoom_widget);
        zomeFactor_zoom_lineEdit->setObjectName(QString::fromUtf8("zomeFactor_zoom_lineEdit"));

        gridLayout->addWidget(zomeFactor_zoom_lineEdit, 1, 1, 1, 1);

        zoomIn_zoom_pushButton = new QPushButton(zoom_widget);
        zoomIn_zoom_pushButton->setObjectName(QString::fromUtf8("zoomIn_zoom_pushButton"));
        sizePolicy.setHeightForWidth(zoomIn_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomIn_zoom_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(zoomIn_zoom_pushButton, 0, 1, 1, 1);


        retranslateUi(zoom_widget);

        QMetaObject::connectSlotsByName(zoom_widget);
    } // setupUi

    void retranslateUi(QWidget *zoom_widget)
    {
        zoom_widget->setWindowTitle(QApplication::translate("zoom_widget", "Form", 0, QApplication::UnicodeUTF8));
        zoomOut_zoom_pushButton->setText(QApplication::translate("zoom_widget", "Zoom out", 0, QApplication::UnicodeUTF8));
        back_zoom_pushButton->setText(QApplication::translate("zoom_widget", "Back", 0, QApplication::UnicodeUTF8));
        zoomIn_zoom_pushButton->setText(QApplication::translate("zoom_widget", "Zoom in", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class zoom_widget: public Ui_zoom_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOM_WIDGET_H
