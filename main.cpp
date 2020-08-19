#include "mainwindow.h"
#include <QApplication>

#include "TDMDetailDataForm.h"
#include "TDMTrendChartForm.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
    TDMTrendChartForm w;
    w.show();

    return a.exec();
}
