/********************************************************************************
** Form generated from reading UI file 'selectpage_widget.ui'
**
** Created: Fri Jun 8 14:49:34 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPAGE_WIDGET_H
#define UI_SELECTPAGE_WIDGET_H

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

class Ui_selectPage_widget
{
public:
    QGridLayout *gridLayout;
    QLabel *goToPage_label;
    QPushButton *go_goToPage_pushButton;
    QPushButton *cancel_goToPage_pushButton;
    QLineEdit *pageNum_goToPage_lineEdit;

    void setupUi(QWidget *selectPage_widget)
    {
        if (selectPage_widget->objectName().isEmpty())
            selectPage_widget->setObjectName(QString::fromUtf8("selectPage_widget"));
        selectPage_widget->resize(216, 126);
        gridLayout = new QGridLayout(selectPage_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        goToPage_label = new QLabel(selectPage_widget);
        goToPage_label->setObjectName(QString::fromUtf8("goToPage_label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(goToPage_label->sizePolicy().hasHeightForWidth());
        goToPage_label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(goToPage_label, 0, 0, 1, 1);

        go_goToPage_pushButton = new QPushButton(selectPage_widget);
        go_goToPage_pushButton->setObjectName(QString::fromUtf8("go_goToPage_pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(go_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        go_goToPage_pushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(go_goToPage_pushButton, 3, 0, 1, 1);

        cancel_goToPage_pushButton = new QPushButton(selectPage_widget);
        cancel_goToPage_pushButton->setObjectName(QString::fromUtf8("cancel_goToPage_pushButton"));
        sizePolicy1.setHeightForWidth(cancel_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        cancel_goToPage_pushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cancel_goToPage_pushButton, 3, 1, 1, 1);

        pageNum_goToPage_lineEdit = new QLineEdit(selectPage_widget);
        pageNum_goToPage_lineEdit->setObjectName(QString::fromUtf8("pageNum_goToPage_lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pageNum_goToPage_lineEdit->sizePolicy().hasHeightForWidth());
        pageNum_goToPage_lineEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pageNum_goToPage_lineEdit, 1, 0, 1, 2);


        retranslateUi(selectPage_widget);

        QMetaObject::connectSlotsByName(selectPage_widget);
    } // setupUi

    void retranslateUi(QWidget *selectPage_widget)
    {
        selectPage_widget->setWindowTitle(QApplication::translate("selectPage_widget", "Form", 0, QApplication::UnicodeUTF8));
        goToPage_label->setText(QApplication::translate("selectPage_widget", "Go to page:", 0, QApplication::UnicodeUTF8));
        go_goToPage_pushButton->setText(QApplication::translate("selectPage_widget", "Go", 0, QApplication::UnicodeUTF8));
        cancel_goToPage_pushButton->setText(QApplication::translate("selectPage_widget", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class selectPage_widget: public Ui_selectPage_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPAGE_WIDGET_H
