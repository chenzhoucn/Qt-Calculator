#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow w2;
    w.setWindowTitle("No Tension");
//      w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    w2.show();
    return a.exec();
}
