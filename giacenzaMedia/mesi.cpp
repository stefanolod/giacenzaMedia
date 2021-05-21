#include "mesi.h"

Mesi::Mesi(bool bisestile){
    if( bisestile ){
        mesi[1] = 29;
    }
}

bool Mesi::getBisestile(){
    if( mesi[1] == 29 ){
        return true;
    }else{
        return false;
    }
}

int Mesi::getAnno(){ return anno; }

int Mesi::giorni_del_mese(int mese){   //Mi indica i numeri dei giorni in base al mese, sfruttando l'array preimpostato
    return mesi[mese-1];
}
