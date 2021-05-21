#include "risultato.h"
#include "ui_risultato.h"

risultato::risultato(QWidget *parent, double saldo, double giacenza) :
    QDialog(parent),
    ui(new Ui::risultato)
{
    ui->setupUi(this);
    ui->saldo_text->setPlainText( QString::number( saldo ) );
    ui->giacenza_text->setPlainText( QString::number( giacenza ) );
}

risultato::~risultato()
{
    delete ui;
    this->close();
}
