#include "eduread.h"
#include "ui_eduread.h"
#include "poppler/qt4/poppler-qt4.h"
#include "QDir"
#include "QScrollArea"
#include "QScrollBar"
#include "QFileDialog"

eduRead::eduRead(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eduRead)
{
    ui->setupUi(this);

    //Remove window frame
    this->setWindowFlags(Qt::FramelessWindowHint);

    //Hide accessory widget
    ui->options_widget->setHidden(1);
    ui->goToPage_widget->setHidden(1);
    ui->search_widget->setHidden(1);
    ui->zoom_widget->setHidden(1);

    //Disable options buttons until a pdf is opened
    ui->goToPage_options_pushButton->setDisabled(1);
    ui->zoom_options_pushButton->setDisabled(1);
    ui->search_options_pushButton->setDisabled(1);
    ui->next_pushButton->setDisabled(1);
    ui->previous_pushButton->setDisabled(1);

    //Connect default widget -> next button
    QObject::connect(ui->next_pushButton, SIGNAL(clicked()), this, SLOT(nextPage()));
    //Connect default widget -> previous button
    QObject::connect(ui->previous_pushButton, SIGNAL(clicked()), this, SLOT(previousPage()));
    //Connect default widget -> options button
    QObject::connect(ui->options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(show()));
    QObject::connect(ui->options_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(hide()));
    //Connect default widget -> exit button
    QObject::connect(ui->exit_pushButton, SIGNAL(clicked()), this, SLOT(close()));

    //Connect Options widget -> back nutton
    QObject::connect(ui->back_options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(hide()));
    QObject::connect(ui->back_options_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));
    //Connect options widget -> open pdf button
    QObject::connect(ui->openPDF_options_pushButton, SIGNAL(clicked()), this, SLOT(openPDF()));
    QObject::connect(ui->openPDF_options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(hide()));
    QObject::connect(ui->openPDF_options_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));
    //Connect options widget ->go to page button
    QObject::connect(ui->goToPage_options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(hide()));
    QObject::connect(ui->goToPage_options_pushButton, SIGNAL(clicked()), ui->goToPage_widget, SLOT(show()));
    //Connect options widget -> zoom button
    QObject::connect(ui->zoom_options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(hide()));
    QObject::connect(ui->zoom_options_pushButton, SIGNAL(clicked()), ui->zoom_widget, SLOT(show()));
    //Connect options widget -> search button
    QObject::connect(ui->search_options_pushButton, SIGNAL(clicked()), ui->options_widget, SLOT(hide()));
    QObject::connect(ui->search_options_pushButton, SIGNAL(clicked()), ui->search_widget, SLOT(show()));

    //Connect go to page widget -> back button
    QObject::connect(ui->back_goToPage_pushButton, SIGNAL(clicked()), ui->goToPage_widget, SLOT(hide()));
    QObject::connect(ui->back_goToPage_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));
    //Connect go to page widget -> go button
    QObject::connect(ui->go_goToPage_pushButton, SIGNAL(clicked()), this, SLOT(goToPage()));
    QObject::connect(ui->go_goToPage_pushButton, SIGNAL(clicked()), ui->pageNum_goToPage_lineEdit, SLOT(clear()));
    QObject::connect(ui->go_goToPage_pushButton, SIGNAL(clicked()), ui->goToPage_widget, SLOT(hide()));
    QObject::connect(ui->go_goToPage_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));

    //Connect zoom widget -> back button
    QObject::connect(ui->back_zoom_pushButton, SIGNAL(clicked()), ui->zoom_widget, SLOT(hide()));
    QObject::connect(ui->back_zoom_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));
    //Connect zoom widget -> zoom in button
    QObject::connect(ui->zoomIn_zoom_pushButton, SIGNAL(clicked()), this, SLOT(zoomIn()));
    //Connect zoom widget -> zoom out button
    QObject::connect(ui->zoomOut_zoom_pushButton, SIGNAL(clicked()), this, SLOT(zoomOut()));

    //connect search widget -> back button
    QObject::connect(ui->back_search_pushButton, SIGNAL(clicked()), ui->search_widget, SLOT(hide()));
    QObject::connect(ui->back_search_pushButton, SIGNAL(clicked()), ui->default_widget, SLOT(show()));

    //Call openPDF on start up
    openPDF();
}

eduRead::~eduRead()
{
    delete pdfDoc;
    delete ui;
}

void eduRead::openPDF()
{
    //Get file path using file dialog
    QString filePath = QFileDialog::getOpenFileName(this, "Open file", QDir::homePath(), "PDF Files (*.pdf)");
    //Check that a file is passed
    if(!filePath.isNull())
    {
        //Set current page as the first page in the document
        currentPage= 0;
        //Set viewing scale to 100%
        scaleFactor= 1;
        //Load file
        pdfDoc = Poppler::Document::load(filePath);
        //Check if file is loaded successfully
        if(pdfDoc)
        {
            //View first page
            setPage(currentPage);

            //Set current page label, No. of pages label & scale label
            ui->currentPage_lable->setText(QString::number(currentPage+1));
            ui->NoOfPages_Label->setText(QString::number(pdfDoc->numPages()));
            ui->scale_zoom_label->setText("100%");

            //Enable the diabled options buttons
            ui->zoom_options_pushButton->setEnabled(1);
            ui->goToPage_options_pushButton->setEnabled(1);
            ui->search_options_pushButton->setEnabled(1);
            ui->next_pushButton->setEnabled(1);
            ui->previous_pushButton->setEnabled(1);
        }
        //If file is not valid, show error
        else ui->display_label->setText("ERROR: File is not a valid pdf file!");
    }
}

void eduRead::setPage(int pageNumber)
{
    //Check that page number is in valid range
    if(pageNumber >= 0 && pageNumber <pdfDoc->numPages())
    {
        //Convert pdf page to image with the desired scale factor
        image = pdfDoc->page(pageNumber)->renderToImage(scaleFactor * physicalDpiX(), scaleFactor * physicalDpiY());

        //Display the page image using the display label
        ui->display_label->setPixmap(QPixmap::fromImage(image));

        //Set currentPage to the new page number
        currentPage=pageNumber;

        //Reset scroll bars
        ui->scrollArea->verticalScrollBar()->setValue(0);
        ui->scrollArea->horizontalScrollBar()->setValue(0);

        //Set current page label
        ui->currentPage_lable->setText(QString::number(currentPage+1));
    }
    else ui->display_label->setText("ERROR: Page number is out of range!");
}

void eduRead::nextPage()
{
    //Set page to the next page
    setPage(currentPage+1);
}

void eduRead::previousPage()
{
    //Set page to the previous page
    setPage(currentPage-1);
}

void eduRead::goToPage()
{
    //Get the new page number from line edit
    int pageNum = ui->pageNum_goToPage_lineEdit->text().toInt();
    //Set page to the number entered
    setPage(pageNum-1);
}

void eduRead::zoomIn()
{
    if(scaleFactor < 4)
    {
        //Increase scale factor by 0.25 == 25%
        scaleFactor += 0.25;
        //Convert pdf page to image with the new scale factor
        image = pdfDoc->page(currentPage)->renderToImage(scaleFactor * physicalDpiX(), scaleFactor * physicalDpiY());
        //Display the page image using the display label
        ui->display_label->setPixmap(QPixmap::fromImage(image));
        //Set the scale label to the new scale factor
        ui->scale_zoom_label->setText(QString::number(scaleFactor*100)+"%");
    }
}

void eduRead::zoomOut()
{
    if(scaleFactor > 0.25)
    {
        //Decrease scale factor by 0.25 == 25%
        scaleFactor -= 0.25;
        ////Convert pdf page to image with the new scale factor
        image = pdfDoc->page(currentPage)->renderToImage(scaleFactor * physicalDpiX(), scaleFactor * physicalDpiY());
        //Display the page image using the display label
        ui->display_label->setPixmap(QPixmap::fromImage(image));
        //Set the scale label to the new scale factor
        ui->scale_zoom_label->setText(QString::number(scaleFactor*100)+"%");
    }
}
