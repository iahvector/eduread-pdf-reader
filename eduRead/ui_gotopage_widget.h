/********************************************************************************
** Form generated from reading UI file 'gotopage_widget.ui'
**
** Created: Sat Jun 9 10:27:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOPAGE_WIDGET_H
#define UI_GOTOPAGE_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goToPage_widget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *pageNum_goToPage_lineEdit;
    QPushButton *go_goToPage_pushButton;
    QPushButton *cancel_goToPage_pushButton;
    QLabel *goToPage_label;

    void setupUi(QWidget *goToPage_widget)
    {
        if (goToPage_widget->objectName().isEmpty())
            goToPage_widget->setObjectName(QString::fromUtf8("goToPage_widget"));
        goToPage_widget->resize(225, 144);
        gridLayout = new QGridLayout(goToPage_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pageNum_goToPage_lineEdit = new QLineEdit(goToPage_widget);
        pageNum_goToPage_lineEdit->setObjectName(QString::fromUtf8("pageNum_goToPage_lineEdit"));

        gridLayout->addWidget(pageNum_goToPage_lineEdit, 1, 0, 1, 2);

        go_goToPage_pushButton = new QPushButton(goToPage_widget);
        go_goToPage_pushButton->setObjectName(QString::fromUtf8("go_goToPage_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(go_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        go_goToPage_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(go_goToPage_pushButton, 2, 0, 1, 1);

        cancel_goToPage_pushButton = new QPushButton(goToPage_widget);
        cancel_goToPage_pushButton->setObjectName(QString::fromUtf8("cancel_goToPage_pushButton"));
        sizePolicy.setHeightForWidth(cancel_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        cancel_goToPage_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cancel_goToPage_pushButton, 2, 1, 1, 1);

        goToPage_label = new QLabel(goToPage_widget);
        goToPage_label->setObjectName(QString::fromUtf8("goToPage_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(goToPage_label->sizePolicy().hasHeightForWidth());
        goToPage_label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(goToPage_label, 0, 0, 1, 2);


        retranslateUi(goToPage_widget);

        QMetaObject::connectSlotsByName(goToPage_widget);
    } // setupUi

    void retranslateUi(QWidget *goToPage_widget)
    {
        goToPage_widget->setWindowTitle(QApplication::translate("goToPage_widget", "Form", 0, QApplication::UnicodeUTF8));
        go_goToPage_pushButton->setText(QApplication::translate("goToPage_widget", "Go", 0, QApplication::UnicodeUTF8));
        cancel_goToPage_pushButton->setText(QApplication::translate("goToPage_widget", "Cancel", 0, QApplication::UnicodeUTF8));
        goToPage_label->setText(QApplication::translate("goToPage_widget", "Go to Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class goToPage_widget: public Ui_goToPage_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOPAGE_WIDGET_H
