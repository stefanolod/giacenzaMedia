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
