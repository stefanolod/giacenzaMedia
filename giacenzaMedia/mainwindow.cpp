#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mesi.h"
#include "risultato.h"
#include <QMessageBox>
#include <QObject>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    ui->modifica_button->hide();
    this->setWindowTitle("Giacenza Media");
}

MainWindow::~MainWindow(){
    delete ui;
}


//Questo metodo da tutti i valori necessari al metodo della classe "Giacenza" per aggiungere il 
//movimento relativo ai dati selezionati, inoltre aggiunge il movimento al combobox in modo da poterlo scegliere
void MainWindow::on_continua_button_pressed(){
    if( g.getList().empty() ){
        ui->modifica_button->show();
    }
    if(ui->importo_text->text().isEmpty()){
        QMessageBox::warning(this, "Errore", "Non c'è alcun movimento di denaro se l'importo è nullo!");
    }else{
        int giorno = ui->giorni_spinbox->text().toInt();
        int mese = ui->mesi_spinbox->text().toInt();
        double importo = ui->importo_text->text().toDouble();

        ui->lista_comboBox->addItem(" "  + QString::number( g.getList().back().getCounter() ) );
        ui->importo_text->clear();

        g.aggiungiMovimento(giorno, mese, importo);
    }
}

//Regola lo spinbox dei giorni in base al mese selezionato dallo spinbox dei mesi
void MainWindow::on_mesi_spinbox_valueChanged(int arg1){    
    if( arg1 == 2){
        if( g.getBisestile() ){
            ui->giorni_spinbox->setMaximum(29);
        }else{
            ui->giorni_spinbox->setMaximum(28);
        }
    }else if( arg1 == 4 || arg1 == 6 || arg1 == 9 || arg1 == 11){
        ui->giorni_spinbox->setMaximum(30);
    }else{
        ui->giorni_spinbox->setMaximum(31);
    }
}

//Raccoglie tutti i dati necessari per il calcolo del saldo e la giacenza media 
//gestita dalla classe "Giacenza"
void MainWindow::on_calcola_button_pressed(){
    //Se si forma un momento vuoto tra l'ultimo movimento e la fine dell'anno, questo va coperto
    if( !g.getList().empty() ){         
        if( g.getList().back().getGiorno() != 31 && g.getList().back().getMese() != 12){
            g.aggiungiMovimento(31, 12, 0.0);
        }

        g.calcola();

        risultato r(nullptr, g.getSaldo(), g.getGiacenza());
        r.exec();

        g.azzeraSaldoGiacenza();
    }else{
        QMessageBox::warning(this, "Errore", "Inserisci prima i movimenti con i valori richiesti e poi posso calcolare!");
    }
}

void MainWindow::on_actionNuovo_triggered(){
    g.distruggi_lista();

    ui->lista_comboBox->clear();
    ui->giorni_spinbox->setValue(1);
    ui->mesi_spinbox->setValue(1);
    ui->giorni_spinbox->setMaximum(31);
}

//Questo è lo slot che assegna i valori dati dalla finestra annoDialog e trattati 
//come necessità richiede
void MainWindow::setArgPass(int anno, int n_intestatari){
    g.calcolaBisestile( anno);
    g.setIntestatari( n_intestatari );

    this->setWindowTitle( "Giacenza Media: " + QString::number( anno ) +
                          " (" + QString::number( n_intestatari ) + ")");
    this->show();
}

//Questa funzione mostra i valori del movimento selezionato
void MainWindow::on_lista_comboBox_highlighted(const QString &arg1){
    int counter = arg1.toInt();

    for(Movimento i: g.getList()){
        if(i.getCounter() == counter){
            ui->importo_text->setText( QString::number( i.getImporto() ) );
            ui->giorni_spinbox->setValue( i.getGiorno() );
            ui->mesi_spinbox->setValue( i.getMese() );

            break;
        }
    }
}

//Raccoglie i dati e il passa alla classe "Giacenza" 
//per poter modificare il movimento selezionato
void MainWindow::on_modifica_button_pressed(){
    double importo = ui->importo_text->text().toDouble();
    int counter = ui->lista_comboBox->currentText().toInt();
    int giorno = ui->giorni_spinbox->text().toInt();
    int mese = ui->mesi_spinbox->text().toInt();

    if ( g.modifica( importo, counter, giorno, mese ) ){
        QMessageBox::information(nullptr, "Modifica", "Movimento modificato!");
    }else{
         QMessageBox::warning(nullptr, "Modifica", "Movimento non modificato!");
    }

    ui->importo_text->clear();
    ui->giorni_spinbox->setValue( 1 );
    ui->mesi_spinbox->setValue( 1 );
}
