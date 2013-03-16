#include "selectpage_widget.h"
#include "ui_selectpage_widget.h"

selectPage_widget::selectPage_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectPage_widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Popup);
    QObject::connect(ui->cancel_goToPage_pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

selectPage_widget::~selectPage_widget()
{
    delete ui;
}
