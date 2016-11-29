#ifndef VOITURE
#define VOITURE

#include "Vehicule.hpp"
#include <QString>

class Voiture : public Vehicule {
public :

    Voiture(int places, const QString& plaque, const QString& mod):
        Vehicule(places, plaque, mod)
    {
    }

bool operator==(const Voiture& v){
        return v.id == id
                && v.modeleVehicule == modeleVehicule
                && v.nbPlaces == nbPlaces
                && v.plaqueImmatriculation == plaqueImmatriculation;

    }
};


#endif
