#ifndef MESI_H
#define MESI_H


class Mesi{
public:
    Mesi(bool bisestile);

    int giorni_del_mese(int mese);

    bool getBisestile();

    static bool getBisestile(int anno);

    int getAnno();

private:
    int mesi[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int anno;
};

#endif // MESI_H
