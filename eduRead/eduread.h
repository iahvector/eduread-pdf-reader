#ifndef EDUREAD_H
#define EDUREAD_H

#include <QMainWindow>
#include <poppler/qt4/poppler-qt4.h>

namespace Ui {
class eduRead;
}

class eduRead : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit eduRead(QWidget *parent = 0);
    ~eduRead();

public slots:
    void goToPage();
    void nextPage();
    void previousPage();
    void openPDF();
    void zoomIn();
    void zoomOut();

private:
    void setPage(int);

    Ui::eduRead *ui;
    Poppler::Document *pdfDoc;
    QImage image;
    int currentPage;
    float scaleFactor;


};

#endif // EDUREAD_H
