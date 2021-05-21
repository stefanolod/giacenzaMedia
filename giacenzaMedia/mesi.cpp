#include "mesi.h"

Mesi::Mesi(bool bisestile){
    //Se l'anno è bisestile, modifica la cella relativa a febbraio dell'array dei mesi, con 29
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

//Mi indica i numeri dei giorni in base al mese, sfruttando l'array preimpostato
int Mesi::giorni_del_mese(int mese){   
    return mesi[mese-1];
}
