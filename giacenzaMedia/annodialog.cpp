#include "annodialog.h"
#include "ui_annodialog.h"
#include "ui_mainwindow.h"

annoDialog::annoDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::annoDialog){
    ui->setupUi(this);
    this->setWindowTitle("Giacenza Media");
}

annoDialog::~annoDialog()
{
    delete ui;
}

void annoDialog::on_ok_button_pressed()
{
    int anno = ui->anno_spinbox->text().toInt();
    int n_intestatari = ui->intestatari_spinbox->text().toInt();

    emit setArgPass( anno, n_intestatari );         //Passo questi argomenti alla finestra principale

    this->close();
}

