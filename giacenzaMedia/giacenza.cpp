#include "giacenza.h"
#include "movimento.h"
#include "mesi.h"

Giacenza::Giacenza(){
    this->giacenza = 0.0;
    this->saldo = 0.0;
}

double Giacenza::getSaldo(){ return this->saldo; }

double Giacenza::getGiacenza(){ return this->giacenza; }

bool Giacenza::getBisestile(){
    return this->bisestile;
}

//in questa implementazione del metodo si deve per forza lavorare su due movimenti
//per conoscere il periodo di inizio e di fine che intercorre tra un movimento e l'altro.
void Giacenza::aggiungiMovimento(int giorno, int mese, double importo){
    Movimento mov_current;
    Movimento mov_prec = m.back();
    int counter = 0;

    if( m.empty() ){
        mov_current.calcolaPeriodo(1, giorno, 1, mese, this->bisestile);
        mov_current.setImporto(importo);
        mov_current.setCounter(1);
    }else{
        counter = m.back().getCounter() + 1;
        mov_current.calcolaPeriodo(mov_prec.getGiorno(), giorno, mov_prec.getMese(), mese, this->bisestile);
        mov_current.setImporto(importo);
        mov_current.setCounter(counter);
    }

    m.push_back(mov_current);
}

void Giacenza::calcola(){
    //Rappresenta il numeratore da dividere per 365 (o 366 se anno bisestile), 
    //per il calcolo della giacenza media, sarebbe la somma del saldo presente nel conto
    //in ogni giorno dell'anno che va poi diviso per 365(o 366).
    int num = 0;        

    for(Movimento movimento: m){
        this->saldo += movimento.getImporto();
        num += movimento.getImporto() * ((double) movimento.getPeriodo() );
    }

    if( bisestile ){
       this->giacenza = num/366.0;
    }else{
        this->giacenza = num/365.0;
    }

    //Se il conto è cointestato, il saldo e la giacenza va diviso per il numero di cointestati
    this->saldo /= this->n_intestatari;     
    this->giacenza /= this->n_intestatari;

    //Ovviamente se il saldo o la giacenza (o entrambi) risultano meno di un centesimo di euro
    //va segnato come un importo nullo.
    if( this->saldo < 0.01 ){
        this->saldo = 0;
    }

    if( this->giacenza < 0.01 ){
        this->giacenza = 0;
    }
}

std::list<Movimento> Giacenza::getList(){
    return m;
}

void Giacenza::distruggi_lista(){
    this->m.clear();
    this->giacenza = 0.0;
    this->saldo = 0.0;
}

//in questa implementazione del metodo si deve per forza lavorare su due movimenti
//per conoscere il periodo di inizio e di fine che intercorre tra un movimento e l'altro.
bool Giacenza::modifica( double importo, int counter, int giorno, int mese){
    if( m.size() == 1){                 //Controllo se la lista è vuota o piena
        m.back().setImporto( importo );
        m.back().calcolaPeriodo(1, giorno, 1, mese, this->bisestile);
    }else if( m.size() <= 0 ){
        return false;
    }else{
        for(std::list<Movimento>::iterator it = m.begin(); it != m.end(); ++it){
            if(it->getCounter() == counter){
                if( it == m.begin() ){
                    it->setImporto( importo );
                    it->calcolaPeriodo(1, giorno, 1, mese, this->bisestile);
                    break;
                 }else{
                    it->setImporto( importo );
                    it->calcolaPeriodo((--it)->getGiorno(), giorno, (--it)->getMese(), mese, this->bisestile);
                    break;
                 }
            }
        }
    }

    return true;
}

void Giacenza::calcolaBisestile( int anno ){
    if(anno%400==0){
        this->bisestile = true;
    }else if(anno%100!=0 && anno%4==0){
        this->bisestile = true;
    }else{
        this->bisestile = false;
    }
}

void Giacenza::setIntestatari(int intestatari){
    this->n_intestatari = intestatari;
}

void Giacenza::azzeraSaldoGiacenza(){
    this->saldo = 0.0;
    this->giacenza = 0.0;
}
