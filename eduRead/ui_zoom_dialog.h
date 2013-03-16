/********************************************************************************
** Form generated from reading UI file 'zoom_dialog.ui'
**
** Created: Sun Jun 17 23:55:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOM_DIALOG_H
#define UI_ZOOM_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zoom_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *zoomOut_zoom_pushButton;
    QLabel *zoomPercentage_label;
    QPushButton *zoomIn_zoom_pushButton;
    QPushButton *cancel_zoom_pushButton;

    void setupUi(QDialog *zoom_Dialog)
    {
        if (zoom_Dialog->objectName().isEmpty())
            zoom_Dialog->setObjectName(QString::fromUtf8("zoom_Dialog"));
        zoom_Dialog->resize(343, 63);
        zoom_Dialog->setModal(true);
        horizontalLayout = new QHBoxLayout(zoom_Dialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        zoomOut_zoom_pushButton = new QPushButton(zoom_Dialog);
        zoomOut_zoom_pushButton->setObjectName(QString::fromUtf8("zoomOut_zoom_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoomOut_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomOut_zoom_pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(zoomOut_zoom_pushButton);

        zoomPercentage_label = new QLabel(zoom_Dialog);
        zoomPercentage_label->setObjectName(QString::fromUtf8("zoomPercentage_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(zoomPercentage_label->sizePolicy().hasHeightForWidth());
        zoomPercentage_label->setSizePolicy(sizePolicy1);
        zoomPercentage_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(zoomPercentage_label);

        zoomIn_zoom_pushButton = new QPushButton(zoom_Dialog);
        zoomIn_zoom_pushButton->setObjectName(QString::fromUtf8("zoomIn_zoom_pushButton"));
        sizePolicy.setHeightForWidth(zoomIn_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomIn_zoom_pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(zoomIn_zoom_pushButton);

        cancel_zoom_pushButton = new QPushButton(zoom_Dialog);
        cancel_zoom_pushButton->setObjectName(QString::fromUtf8("cancel_zoom_pushButton"));
        sizePolicy.setHeightForWidth(cancel_zoom_pushButton->sizePolicy().hasHeightForWidth());
        cancel_zoom_pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cancel_zoom_pushButton);


        retranslateUi(zoom_Dialog);

        QMetaObject::connectSlotsByName(zoom_Dialog);
    } // setupUi

    void retranslateUi(QDialog *zoom_Dialog)
    {
        zoom_Dialog->setWindowTitle(QApplication::translate("zoom_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        zoomOut_zoom_pushButton->setText(QApplication::translate("zoom_Dialog", "Zoom out", 0, QApplication::UnicodeUTF8));
        zoomPercentage_label->setText(QApplication::translate("zoom_Dialog", "100%", 0, QApplication::UnicodeUTF8));
        zoomIn_zoom_pushButton->setText(QApplication::translate("zoom_Dialog", "Zoom in", 0, QApplication::UnicodeUTF8));
        cancel_zoom_pushButton->setText(QApplication::translate("zoom_Dialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class zoom_Dialog: public Ui_zoom_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOM_DIALOG_H
