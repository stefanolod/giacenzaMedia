#include "mainwindow.h"
#include "annodialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //ad è una finestra che serve a far scegliere all'utente, l'anno di riferimento
    //e il numero di cointestatari del conto necessiari per la corretta esecuzione del software
    annoDialog ad;
    MainWindow w;
    
    //essendo che i sopracitati valori servono nella classe della finestra principale,
    //le due classi vanno "messe in contatto" e in condizioni di interagire.
    QObject::connect(&ad, SIGNAL(setArgPass(int,int)), &w, SLOT(setArgPass(int,int)));
    ad.exec();

    return a.exec();
}
