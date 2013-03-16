/********************************************************************************
** Form generated from reading UI file 'search_widget.ui'
**
** Created: Sat Jun 9 10:27:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_WIDGET_H
#define UI_SEARCH_WIDGET_H

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

class Ui_search_widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *next__search_pushButton;
    QPushButton *previous_search_pushButton;
    QPushButton *back_search_pushButton;
    QLineEdit *searchTerm_search_lineEdit;

    void setupUi(QWidget *search_widget)
    {
        if (search_widget->objectName().isEmpty())
            search_widget->setObjectName(QString::fromUtf8("search_widget"));
        search_widget->resize(328, 121);
        gridLayout = new QGridLayout(search_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        next__search_pushButton = new QPushButton(search_widget);
        next__search_pushButton->setObjectName(QString::fromUtf8("next__search_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(next__search_pushButton->sizePolicy().hasHeightForWidth());
        next__search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(next__search_pushButton, 1, 0, 1, 1);

        previous_search_pushButton = new QPushButton(search_widget);
        previous_search_pushButton->setObjectName(QString::fromUtf8("previous_search_pushButton"));
        sizePolicy.setHeightForWidth(previous_search_pushButton->sizePolicy().hasHeightForWidth());
        previous_search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(previous_search_pushButton, 1, 1, 1, 1);

        back_search_pushButton = new QPushButton(search_widget);
        back_search_pushButton->setObjectName(QString::fromUtf8("back_search_pushButton"));
        sizePolicy.setHeightForWidth(back_search_pushButton->sizePolicy().hasHeightForWidth());
        back_search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(back_search_pushButton, 1, 2, 1, 1);

        searchTerm_search_lineEdit = new QLineEdit(search_widget);
        searchTerm_search_lineEdit->setObjectName(QString::fromUtf8("searchTerm_search_lineEdit"));

        gridLayout->addWidget(searchTerm_search_lineEdit, 0, 0, 1, 3);


        retranslateUi(search_widget);

        QMetaObject::connectSlotsByName(search_widget);
    } // setupUi

    void retranslateUi(QWidget *search_widget)
    {
        search_widget->setWindowTitle(QApplication::translate("search_widget", "Form", 0, QApplication::UnicodeUTF8));
        next__search_pushButton->setText(QApplication::translate("search_widget", "Next", 0, QApplication::UnicodeUTF8));
        previous_search_pushButton->setText(QApplication::translate("search_widget", "Previous", 0, QApplication::UnicodeUTF8));
        back_search_pushButton->setText(QApplication::translate("search_widget", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class search_widget: public Ui_search_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_WIDGET_H
