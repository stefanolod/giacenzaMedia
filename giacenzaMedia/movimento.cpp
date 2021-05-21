#include "movimento.h"
#include "mesi.h"
#include <list>

Movimento::Movimento()
{
    this->periodo = 0;
    this->importo = 0.0;
    this->counter = 0;
}

void Movimento::setImporto(double importo){ this->importo = importo; }

void Movimento::setCounter(int counter){ this->counter = counter; }

double Movimento::getImporto(){ return this->importo; }

int Movimento::getPeriodo(){ return this->periodo; }

int Movimento::getGiorno(){ return this->giorno; }

int Movimento::getMese(){ return this->mese; }

int Movimento::getCounter(){ return this->counter; }

void Movimento::calcolaPeriodo(int giorno_mov_prec,
                              int giorno_mov_corrente,
                              int mese_mov_prec,
                              int mese_mov_corrente,
                              bool bisestile){
    Mesi m(bisestile);

    if(mese_mov_prec == mese_mov_corrente){             //Bisogna distinguere i casi in cui due movimenti siano dello stesso mese o mese diverso
        if( giorno_mov_corrente == giorno_mov_prec ){
            periodo = giorno_mov_corrente;
        }else{
            periodo = giorno_mov_corrente + giorno_mov_prec;
        }
    }else{
        periodo = (m.giorni_del_mese(mese_mov_prec) - giorno_mov_prec) + giorno_mov_corrente;

        for(int i = mese_mov_prec + 1; i < mese_mov_corrente ; ++i){
            periodo += m.giorni_del_mese(i);
        }
    }

    this->giorno = giorno_mov_corrente;
    this->mese = mese_mov_corrente;
}

