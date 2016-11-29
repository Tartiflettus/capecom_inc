#ifndef VELO_H
#define VELO_H

#include "Vehicule.hpp"

class Velo : public Vehicule{
private:
    Velo(int places):
        Vehicule(places){

    }
};

#endif // VELO_H
