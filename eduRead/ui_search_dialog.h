/********************************************************************************
** Form generated from reading UI file 'search_dialog.ui'
**
** Created: Sun Jun 17 23:55:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_DIALOG_H
#define UI_SEARCH_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_search_Dialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *findPrevious_search_pushButton;
    QPushButton *findNext_search_pushButton;
    QLineEdit *searchTerm_search_lineEdit;
    QPushButton *cancel_search_pushButton;

    void setupUi(QDialog *search_Dialog)
    {
        if (search_Dialog->objectName().isEmpty())
            search_Dialog->setObjectName(QString::fromUtf8("search_Dialog"));
        search_Dialog->resize(299, 96);
        search_Dialog->setModal(true);
        gridLayout = new QGridLayout(search_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        findPrevious_search_pushButton = new QPushButton(search_Dialog);
        findPrevious_search_pushButton->setObjectName(QString::fromUtf8("findPrevious_search_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findPrevious_search_pushButton->sizePolicy().hasHeightForWidth());
        findPrevious_search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(findPrevious_search_pushButton, 1, 1, 1, 1);

        findNext_search_pushButton = new QPushButton(search_Dialog);
        findNext_search_pushButton->setObjectName(QString::fromUtf8("findNext_search_pushButton"));
        sizePolicy.setHeightForWidth(findNext_search_pushButton->sizePolicy().hasHeightForWidth());
        findNext_search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(findNext_search_pushButton, 1, 0, 1, 1);

        searchTerm_search_lineEdit = new QLineEdit(search_Dialog);
        searchTerm_search_lineEdit->setObjectName(QString::fromUtf8("searchTerm_search_lineEdit"));

        gridLayout->addWidget(searchTerm_search_lineEdit, 0, 0, 1, 3);

        cancel_search_pushButton = new QPushButton(search_Dialog);
        cancel_search_pushButton->setObjectName(QString::fromUtf8("cancel_search_pushButton"));
        sizePolicy.setHeightForWidth(cancel_search_pushButton->sizePolicy().hasHeightForWidth());
        cancel_search_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cancel_search_pushButton, 1, 2, 1, 1);


        retranslateUi(search_Dialog);

        QMetaObject::connectSlotsByName(search_Dialog);
    } // setupUi

    void retranslateUi(QDialog *search_Dialog)
    {
        search_Dialog->setWindowTitle(QApplication::translate("search_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        findPrevious_search_pushButton->setText(QApplication::translate("search_Dialog", "Previous", 0, QApplication::UnicodeUTF8));
        findNext_search_pushButton->setText(QApplication::translate("search_Dialog", "Next", 0, QApplication::UnicodeUTF8));
        searchTerm_search_lineEdit->setPlaceholderText(QApplication::translate("search_Dialog", "Search", 0, QApplication::UnicodeUTF8));
        cancel_search_pushButton->setText(QApplication::translate("search_Dialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class search_Dialog: public Ui_search_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_DIALOG_H
