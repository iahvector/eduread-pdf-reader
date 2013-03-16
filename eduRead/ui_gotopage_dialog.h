/********************************************************************************
** Form generated from reading UI file 'gotopage_dialog.ui'
**
** Created: Sun Jun 17 23:55:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOPAGE_DIALOG_H
#define UI_GOTOPAGE_DIALOG_H

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

class Ui_goToPage_Dialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *pageNum_goToPage_lineEdit;
    QPushButton *go_goToPage_pushButton;
    QPushButton *cancel_goToPage_pushButton;

    void setupUi(QDialog *goToPage_Dialog)
    {
        if (goToPage_Dialog->objectName().isEmpty())
            goToPage_Dialog->setObjectName(QString::fromUtf8("goToPage_Dialog"));
        goToPage_Dialog->resize(204, 96);
        goToPage_Dialog->setModal(true);
        gridLayout = new QGridLayout(goToPage_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pageNum_goToPage_lineEdit = new QLineEdit(goToPage_Dialog);
        pageNum_goToPage_lineEdit->setObjectName(QString::fromUtf8("pageNum_goToPage_lineEdit"));
        pageNum_goToPage_lineEdit->setCursorPosition(0);

        gridLayout->addWidget(pageNum_goToPage_lineEdit, 0, 0, 1, 2);

        go_goToPage_pushButton = new QPushButton(goToPage_Dialog);
        go_goToPage_pushButton->setObjectName(QString::fromUtf8("go_goToPage_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(go_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        go_goToPage_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(go_goToPage_pushButton, 1, 0, 1, 1);

        cancel_goToPage_pushButton = new QPushButton(goToPage_Dialog);
        cancel_goToPage_pushButton->setObjectName(QString::fromUtf8("cancel_goToPage_pushButton"));
        sizePolicy.setHeightForWidth(cancel_goToPage_pushButton->sizePolicy().hasHeightForWidth());
        cancel_goToPage_pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cancel_goToPage_pushButton, 1, 1, 1, 1);


        retranslateUi(goToPage_Dialog);

        QMetaObject::connectSlotsByName(goToPage_Dialog);
    } // setupUi

    void retranslateUi(QDialog *goToPage_Dialog)
    {
        goToPage_Dialog->setWindowTitle(QApplication::translate("goToPage_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pageNum_goToPage_lineEdit->setInputMask(QApplication::translate("goToPage_Dialog", "000000; ", 0, QApplication::UnicodeUTF8));
        pageNum_goToPage_lineEdit->setPlaceholderText(QApplication::translate("goToPage_Dialog", "Go to page", 0, QApplication::UnicodeUTF8));
        go_goToPage_pushButton->setText(QApplication::translate("goToPage_Dialog", "Go", 0, QApplication::UnicodeUTF8));
        cancel_goToPage_pushButton->setText(QApplication::translate("goToPage_Dialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class goToPage_Dialog: public Ui_goToPage_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOPAGE_DIALOG_H
