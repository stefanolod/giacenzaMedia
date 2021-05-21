#include "mainwindow.h"
#include "annodialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    annoDialog ad;
    MainWindow w;

    QObject::connect(&ad, SIGNAL(setArgPass(int,int)), &w, SLOT(setArgPass(int,int)));
    ad.exec();

    return a.exec();
}
