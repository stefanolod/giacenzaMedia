#ifndef GIACENZA_H
#define GIACENZA_H

#include "movimento.h"

class Giacenza{
public:
    Giacenza();

    double getSaldo();

    double getGiacenza();

    bool getBisestile();

    void setIntestatari(int intestatari);

    void calcolaBisestile(int anno);

    void aggiungiMovimento(int giorno, int mese, double importo);

    void calcola();

    void azzeraSaldoGiacenza();

    std::list<Movimento> getList();

    void distruggi_lista();     //Molto semplicemente azzera il saldo e la giacenza e cancella la lista

    bool modifica(double importo, int counter, int giorno, int mese);
private:
    double saldo;
    double giacenza;
    bool bisestile;
    int n_intestatari;
    std::list<Movimento> m;
};

#endif // GIACENZA_H
