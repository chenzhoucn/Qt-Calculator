#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("No Tension");
//      w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
