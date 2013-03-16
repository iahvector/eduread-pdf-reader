#include <QtGui/QApplication>
#include "eduread.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eduRead er;
    er.show();
    
    return a.exec();
}
