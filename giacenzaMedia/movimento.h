#ifndef MOVIMENTO_H
#define MOVIMENTO_H
#include <list>

class Movimento{
public:
    Movimento();

    void setImporto(double importo);

    void setCounter(int counter);

    int getPeriodo();

    int getGiorno();

    int getMese();

    int getCounter();

    double getImporto();

    //Avendo i dati inizio e fine del periodo tra il penultimo e ultimo Movimento,
    //con questo metodo calcolo il numero dei girno che cadono in quel periodo
    void calcolaPeriodo(int giorno_mov_prec, int giorno_mov_corrente,
                       int mese_mov_prec, int mese_mov_corrente, bool bisestile);

private:
    double importo;
    int periodo;
    int giorno;
    int mese;
    int counter;
};

#endif // MOVIMENTO_H
