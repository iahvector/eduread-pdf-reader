/********************************************************************************
** Form generated from reading UI file 'options_dialog.ui'
**
** Created: Sun Jun 17 23:55:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_DIALOG_H
#define UI_OPTIONS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_options_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *back_pushButton;
    QPushButton *search_pushButton;
    QPushButton *zoom_pushButton;
    QPushButton *goToPage_pushButton;
    QPushButton *openPDF_pushButton;

    void setupUi(QDialog *options_Dialog)
    {
        if (options_Dialog->objectName().isEmpty())
            options_Dialog->setObjectName(QString::fromUtf8("options_Dialog"));
        options_Dialog->resize(495, 65);
        options_Dialog->setModal(true);
        horizontalLayout = new QHBoxLayout(options_Dialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        back_pushButton = new QPushButton(options_Dialog);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back_pushButton->sizePolicy().hasHeightForWidth());
        back_pushButton->setSizePolicy(sizePolicy);
        back_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(back_pushButton);

        search_pushButton = new QPushButton(options_Dialog);
        search_pushButton->setObjectName(QString::fromUtf8("search_pushButton"));
        search_pushButton->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search_pushButton->sizePolicy().hasHeightForWidth());
        search_pushButton->setSizePolicy(sizePolicy1);
        search_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(search_pushButton);

        zoom_pushButton = new QPushButton(options_Dialog);
        zoom_pushButton->setObjectName(QString::fromUtf8("zoom_pushButton"));
        zoom_pushButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoom_pushButton->setSizePolicy(sizePolicy1);
        zoom_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(zoom_pushButton);

        goToPage_pushButton = new QPushButton(options_Dialog);
        goToPage_pushButton->setObjectName(QString::fromUtf8("goToPage_pushButton"));
        goToPage_pushButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(goToPage_pushButton->sizePolicy().hasHeightForWidth());
        goToPage_pushButton->setSizePolicy(sizePolicy1);
        goToPage_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(goToPage_pushButton);

        openPDF_pushButton = new QPushButton(options_Dialog);
        openPDF_pushButton->setObjectName(QString::fromUtf8("openPDF_pushButton"));
        sizePolicy1.setHeightForWidth(openPDF_pushButton->sizePolicy().hasHeightForWidth());
        openPDF_pushButton->setSizePolicy(sizePolicy1);
        openPDF_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(openPDF_pushButton);


        retranslateUi(options_Dialog);

        QMetaObject::connectSlotsByName(options_Dialog);
    } // setupUi

    void retranslateUi(QDialog *options_Dialog)
    {
        options_Dialog->setWindowTitle(QApplication::translate("options_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        back_pushButton->setText(QApplication::translate("options_Dialog", "Back", 0, QApplication::UnicodeUTF8));
        search_pushButton->setText(QApplication::translate("options_Dialog", "Search", 0, QApplication::UnicodeUTF8));
        zoom_pushButton->setText(QApplication::translate("options_Dialog", "Zoom", 0, QApplication::UnicodeUTF8));
        goToPage_pushButton->setText(QApplication::translate("options_Dialog", "Go to page", 0, QApplication::UnicodeUTF8));
        openPDF_pushButton->setText(QApplication::translate("options_Dialog", "Open PDF", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class options_Dialog: public Ui_options_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_DIALOG_H
