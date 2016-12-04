#include "humain.h"

int Humain::_idActu = 0;


int Humain::nextId(){
    return _idActu++;
}

