#ifndef VELO_H
#define VELO_H

#include <QString>
#include "Vehicule.hpp"

class Velo : public Vehicule{
public:
    Velo(int places, const QString& mod):
        Vehicule(places, mod)
    {
    }

};

#endif // VELO_H
