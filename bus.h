#ifndef BUS_H
#define BUS_H

#include "Vehicule.hpp"

class Bus : public Vehicule {
public :
    Bus(int places, const QString& plaque, const QString& mod):
        Vehicule(places, plaque, mod)
    {
    }

};

#endif // BUS_H
