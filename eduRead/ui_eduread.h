/********************************************************************************
** Form generated from reading UI file 'eduread.ui'
**
** Created: Sat Mar 16 11:08:58 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUREAD_H
#define UI_EDUREAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eduRead
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *display_label;
    QWidget *options_widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *goToPage_options_pushButton;
    QPushButton *zoom_options_pushButton;
    QPushButton *search_options_pushButton;
    QPushButton *openPDF_options_pushButton;
    QSpacerItem *horizontalSpacer_optionsWidget;
    QPushButton *back_options_pushButton;
    QWidget *zoom_widget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *zoomOut_zoom_pushButton;
    QLabel *scale_zoom_label;
    QPushButton *zoomIn_zoom_pushButton;
    QSpacerItem *horizontalSpacer_zoom;
    QPushButton *back_zoom_pushButton;
    QWidget *default_widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *previous_pushButton;
    QLabel *currentPage_lable;
    QLabel *slash_label;
    QLabel *NoOfPages_Label;
    QPushButton *next_pushButton;
    QSpacerItem *horizontalSpacer_defaultWidget;
    QPushButton *options_pushButton;
    QPushButton *exit_pushButton;
    QWidget *goToPage_widget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *pageNum_goToPage_lineEdit;
    QPushButton *go_goToPage_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *back_goToPage_pushButton;
    QWidget *search_widget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *previous_search_pushButton;
    QLineEdit *searchTerm_search_lineEdit;
    QPushButton *next_search_pushButton;
    QSpacerItem *horizontalSpacer_search;
    QPushButton *back_search_pushButton;

    void setupUi(QMainWindow *eduRead)
    {
        if (eduRead->objectName().isEmpty())
            eduRead->setObjectName(QString::fromUtf8("eduRead"));
        eduRead->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eduRead->sizePolicy().hasHeightForWidth());
        eduRead->setSizePolicy(sizePolicy);
        eduRead->setMaximumSize(QSize(800, 480));
        eduRead->setFocusPolicy(Qt::NoFocus);
        eduRead->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(eduRead);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFocusPolicy(Qt::NoFocus);
        centralWidget->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setContextMenuPolicy(Qt::NoContextMenu);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 205));
        scrollAreaWidgetContents->setFocusPolicy(Qt::NoFocus);
        scrollAreaWidgetContents->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        display_label = new QLabel(scrollAreaWidgetContents);
        display_label->setObjectName(QString::fromUtf8("display_label"));
        display_label->setEnabled(true);
        display_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(display_label, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 5, 0, 1, 1);

        options_widget = new QWidget(centralWidget);
        options_widget->setObjectName(QString::fromUtf8("options_widget"));
        horizontalLayout_4 = new QHBoxLayout(options_widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        goToPage_options_pushButton = new QPushButton(options_widget);
        goToPage_options_pushButton->setObjectName(QString::fromUtf8("goToPage_options_pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(goToPage_options_pushButton->sizePolicy().hasHeightForWidth());
        goToPage_options_pushButton->setSizePolicy(sizePolicy1);
        goToPage_options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(goToPage_options_pushButton);

        zoom_options_pushButton = new QPushButton(options_widget);
        zoom_options_pushButton->setObjectName(QString::fromUtf8("zoom_options_pushButton"));
        sizePolicy1.setHeightForWidth(zoom_options_pushButton->sizePolicy().hasHeightForWidth());
        zoom_options_pushButton->setSizePolicy(sizePolicy1);
        zoom_options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(zoom_options_pushButton);

        search_options_pushButton = new QPushButton(options_widget);
        search_options_pushButton->setObjectName(QString::fromUtf8("search_options_pushButton"));
        sizePolicy1.setHeightForWidth(search_options_pushButton->sizePolicy().hasHeightForWidth());
        search_options_pushButton->setSizePolicy(sizePolicy1);
        search_options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(search_options_pushButton);

        openPDF_options_pushButton = new QPushButton(options_widget);
        openPDF_options_pushButton->setObjectName(QString::fromUtf8("openPDF_options_pushButton"));
        sizePolicy1.setHeightForWidth(openPDF_options_pushButton->sizePolicy().hasHeightForWidth());
        openPDF_options_pushButton->setSizePolicy(sizePolicy1);
        openPDF_options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(openPDF_options_pushButton);

        horizontalSpacer_optionsWidget = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_optionsWidget);

        back_options_pushButton = new QPushButton(options_widget);
        back_options_pushButton->setObjectName(QString::fromUtf8("back_options_pushButton"));
        sizePolicy1.setHeightForWidth(back_options_pushButton->sizePolicy().hasHeightForWidth());
        back_options_pushButton->setSizePolicy(sizePolicy1);
        back_options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(back_options_pushButton);


        gridLayout_2->addWidget(options_widget, 1, 0, 1, 1);

        zoom_widget = new QWidget(centralWidget);
        zoom_widget->setObjectName(QString::fromUtf8("zoom_widget"));
        horizontalLayout_6 = new QHBoxLayout(zoom_widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        zoomOut_zoom_pushButton = new QPushButton(zoom_widget);
        zoomOut_zoom_pushButton->setObjectName(QString::fromUtf8("zoomOut_zoom_pushButton"));
        sizePolicy1.setHeightForWidth(zoomOut_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomOut_zoom_pushButton->setSizePolicy(sizePolicy1);
        zoomOut_zoom_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_6->addWidget(zoomOut_zoom_pushButton);

        scale_zoom_label = new QLabel(zoom_widget);
        scale_zoom_label->setObjectName(QString::fromUtf8("scale_zoom_label"));

        horizontalLayout_6->addWidget(scale_zoom_label);

        zoomIn_zoom_pushButton = new QPushButton(zoom_widget);
        zoomIn_zoom_pushButton->setObjectName(QString::fromUtf8("zoomIn_zoom_pushButton"));
        sizePolicy1.setHeightForWidth(zoomIn_zoom_pushButton->sizePolicy().hasHeightForWidth());
        zoomIn_zoom_pushButton->setSizePolicy(sizePolicy1);
        zoomIn_zoom_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_6->addWidget(zoomIn_zoom_pushButton);

        horizontalSpacer_zoom = new QSpacerItem(462, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_zoom);

        back_zoom_pushButton = new QPushButton(zoom_widget);
        back_zoom_pushButton->setObjectName(QString::fromUtf8("back_zoom_pushButton"));
        sizePolicy1.setHeightForWidth(back_zoom_pushButton->sizePolicy().hasHeightForWidth());
        back_zoom_pushButton->setSizePolicy(sizePolicy1);
        back_zoom_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_6->addWidget(back_zoom_pushButton);


        gridLayout_2->addWidget(zoom_widget, 3, 0, 1, 1);

        default_widget = new QWidget(centralWidget);
        default_widget->setObjectName(QString::fromUtf8("default_widget"));
        horizontalLayout_3 = new QHBoxLayout(default_widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        previous_pushButton = new QPushButton(default_widget);
        previous_pushButton->setObjectName(QString::fromUtf8("previous_pushButton"));
        sizePolicy.setHeightForWidth(previous_pushButton->sizePolicy().hasHeightForWidth());
        previous_pushButton->setSizePolicy(sizePolicy);
        previous_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_3->addWidget(previous_pushButton);

        currentPage_lable = new QLabel(default_widget);
        currentPage_lable->setObjectName(QString::fromUtf8("currentPage_lable"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(currentPage_lable->sizePolicy().hasHeightForWidth());
        currentPage_lable->setSizePolicy(sizePolicy2);
        currentPage_lable->setWordWrap(true);

        horizontalLayout_3->addWidget(currentPage_lable);

        slash_label = new QLabel(default_widget);
        slash_label->setObjectName(QString::fromUtf8("slash_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(slash_label->sizePolicy().hasHeightForWidth());
        slash_label->setSizePolicy(sizePolicy3);
        slash_label->setWordWrap(true);

        horizontalLayout_3->addWidget(slash_label);

        NoOfPages_Label = new QLabel(default_widget);
        NoOfPages_Label->setObjectName(QString::fromUtf8("NoOfPages_Label"));
        sizePolicy2.setHeightForWidth(NoOfPages_Label->sizePolicy().hasHeightForWidth());
        NoOfPages_Label->setSizePolicy(sizePolicy2);
        NoOfPages_Label->setWordWrap(true);

        horizontalLayout_3->addWidget(NoOfPages_Label);

        next_pushButton = new QPushButton(default_widget);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        sizePolicy.setHeightForWidth(next_pushButton->sizePolicy().hasHeightForWidth());
        next_pushButton->setSizePolicy(sizePolicy);
        next_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_3->addWidget(next_pushButton);

        horizontalSpacer_defaultWidget = new QSpacerItem(182, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_defaultWidget);

        options_pushButton = new QPushButton(default_widget);
        options_pushButton->setObjectName(QString::fromUtf8("options_pushButton"));
        options_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_3->addWidget(options_pushButton);

        exit_pushButton = new QPushButton(default_widget);
        exit_pushButton->setObjectName(QString::fromUtf8("exit_pushButton"));
        exit_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_3->addWidget(exit_pushButton);


        gridLayout_2->addWidget(default_widget, 0, 0, 1, 1);

        goToPage_widget = new QWidget(centralWidget);
        goToPage_widget->setObjectName(QString::fromUtf8("goToPage_widget"));
        horizontalLayout_5 = new QHBoxLayout(goToPage_widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pageNum_goToPage_lineEdit = new QLineEdit(goToPage_widget);
        pageNum_goToPage_lineEdit->setObjectName(QString::fromUtf8("pageNum_goToPage_lineEdit"));
        sizePolicy1.setHeightForWidth(pageNum_goToPage_lineEdit->sizePolicy().hasHeightForWidth());
        pageNum_goToPage_lineEdit->setSizePolicy(sizePolicy1);
        pageNum_goToPage_lineEdit->setMinimumSize(QSize(0, 45));

        horizontalLayout_5->addWidget(pageNum_goToPage_lineEdit);

        go_goToPage_pushButton = new QPushButton(goToPage_widget);
        go_goToPage_pushButton->setObjectName(QString::fromUtf8("go_goToPage_pushButton"));
        go_goToPage_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_5->addWidget(go_goToPage_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        back_goToPage_pushButton = new QPushButton(goToPage_widget);
        back_goToPage_pushButton->setObjectName(QString::fromUtf8("back_goToPage_pushButton"));
        back_goToPage_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_5->addWidget(back_goToPage_pushButton);


        gridLayout_2->addWidget(goToPage_widget, 2, 0, 1, 1);

        search_widget = new QWidget(centralWidget);
        search_widget->setObjectName(QString::fromUtf8("search_widget"));
        horizontalLayout_7 = new QHBoxLayout(search_widget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        previous_search_pushButton = new QPushButton(search_widget);
        previous_search_pushButton->setObjectName(QString::fromUtf8("previous_search_pushButton"));
        sizePolicy1.setHeightForWidth(previous_search_pushButton->sizePolicy().hasHeightForWidth());
        previous_search_pushButton->setSizePolicy(sizePolicy1);
        previous_search_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_7->addWidget(previous_search_pushButton);

        searchTerm_search_lineEdit = new QLineEdit(search_widget);
        searchTerm_search_lineEdit->setObjectName(QString::fromUtf8("searchTerm_search_lineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchTerm_search_lineEdit->sizePolicy().hasHeightForWidth());
        searchTerm_search_lineEdit->setSizePolicy(sizePolicy4);
        searchTerm_search_lineEdit->setMinimumSize(QSize(0, 45));

        horizontalLayout_7->addWidget(searchTerm_search_lineEdit);

        next_search_pushButton = new QPushButton(search_widget);
        next_search_pushButton->setObjectName(QString::fromUtf8("next_search_pushButton"));
        sizePolicy1.setHeightForWidth(next_search_pushButton->sizePolicy().hasHeightForWidth());
        next_search_pushButton->setSizePolicy(sizePolicy1);
        next_search_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_7->addWidget(next_search_pushButton);

        horizontalSpacer_search = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_search);

        back_search_pushButton = new QPushButton(search_widget);
        back_search_pushButton->setObjectName(QString::fromUtf8("back_search_pushButton"));
        sizePolicy1.setHeightForWidth(back_search_pushButton->sizePolicy().hasHeightForWidth());
        back_search_pushButton->setSizePolicy(sizePolicy1);
        back_search_pushButton->setMinimumSize(QSize(0, 45));

        horizontalLayout_7->addWidget(back_search_pushButton);


        gridLayout_2->addWidget(search_widget, 4, 0, 1, 1);

        eduRead->setCentralWidget(centralWidget);

        retranslateUi(eduRead);

        QMetaObject::connectSlotsByName(eduRead);
    } // setupUi

    void retranslateUi(QMainWindow *eduRead)
    {
        eduRead->setWindowTitle(QApplication::translate("eduRead", "eduRead", 0, QApplication::UnicodeUTF8));
        display_label->setText(QString());
        goToPage_options_pushButton->setText(QApplication::translate("eduRead", "Go to page", 0, QApplication::UnicodeUTF8));
        zoom_options_pushButton->setText(QApplication::translate("eduRead", "Zoom", 0, QApplication::UnicodeUTF8));
        search_options_pushButton->setText(QApplication::translate("eduRead", "Search", 0, QApplication::UnicodeUTF8));
        openPDF_options_pushButton->setText(QApplication::translate("eduRead", "Open PDF", 0, QApplication::UnicodeUTF8));
        back_options_pushButton->setText(QApplication::translate("eduRead", "Back", 0, QApplication::UnicodeUTF8));
        zoomOut_zoom_pushButton->setText(QApplication::translate("eduRead", "Zoom out", 0, QApplication::UnicodeUTF8));
        scale_zoom_label->setText(QApplication::translate("eduRead", "100%", 0, QApplication::UnicodeUTF8));
        zoomIn_zoom_pushButton->setText(QApplication::translate("eduRead", "Zoom in", 0, QApplication::UnicodeUTF8));
        back_zoom_pushButton->setText(QApplication::translate("eduRead", "Back", 0, QApplication::UnicodeUTF8));
        previous_pushButton->setText(QApplication::translate("eduRead", "Previous", 0, QApplication::UnicodeUTF8));
        currentPage_lable->setText(QString());
        slash_label->setText(QApplication::translate("eduRead", "/", 0, QApplication::UnicodeUTF8));
        NoOfPages_Label->setText(QString());
        next_pushButton->setText(QApplication::translate("eduRead", "Next", 0, QApplication::UnicodeUTF8));
        options_pushButton->setText(QApplication::translate("eduRead", "Options", 0, QApplication::UnicodeUTF8));
        exit_pushButton->setText(QApplication::translate("eduRead", "Exit", 0, QApplication::UnicodeUTF8));
        pageNum_goToPage_lineEdit->setInputMask(QApplication::translate("eduRead", "000000; ", 0, QApplication::UnicodeUTF8));
        pageNum_goToPage_lineEdit->setPlaceholderText(QApplication::translate("eduRead", "Page Number", 0, QApplication::UnicodeUTF8));
        go_goToPage_pushButton->setText(QApplication::translate("eduRead", "Go", 0, QApplication::UnicodeUTF8));
        back_goToPage_pushButton->setText(QApplication::translate("eduRead", "Back", 0, QApplication::UnicodeUTF8));
        previous_search_pushButton->setText(QApplication::translate("eduRead", "Previous", 0, QApplication::UnicodeUTF8));
        searchTerm_search_lineEdit->setInputMask(QString());
        searchTerm_search_lineEdit->setPlaceholderText(QApplication::translate("eduRead", "Search", 0, QApplication::UnicodeUTF8));
        next_search_pushButton->setText(QApplication::translate("eduRead", "Next", 0, QApplication::UnicodeUTF8));
        back_search_pushButton->setText(QApplication::translate("eduRead", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class eduRead: public Ui_eduRead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUREAD_H
