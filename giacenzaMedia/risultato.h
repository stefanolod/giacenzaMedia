#ifndef RISULTATO_H
#define RISULTATO_H

#include <QDialog>

namespace Ui {
class risultato;
}

class risultato : public QDialog{
    Q_OBJECT

public:
    explicit risultato(QWidget *parent = nullptr, double saldo = 0.0, double giacenza = 0.0 );
    ~risultato();

private:
    Ui::risultato *ui;
};

#endif // RISULTATO_H
