#ifndef VOITURE
#define VOITURE

#include "Vehicule.hpp"

class Voiture : public Vehicule {
public :
	Voiture();

    bool operator==(const Voiture& v){
        return v.id == id
                && v.modeleVehicule == modeleVehicule
                && v.nbPlaces == nbPlaces
                && v.plaqueImmatriculation == plaqueImmatriculation;
    }
};

#endif
