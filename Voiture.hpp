#ifndef VOITURE
#define VOITURE

#include "Vehicule.hpp"

class Voiture : public Vehicule {
public :
	Voiture();
<<<<<<< HEAD
};

=======

    bool operator==(const Voiture& v){
        return v.id == id
                && v.modeleVehicule == modeleVehicule
                && v.nbPlaces == nbPlaces
                && v.plaqueImmatriculation == plaqueImmatriculation;
    }
};

>>>>>>> e702ab8e6b98dff54c1dbfd06db59cc2c071f583
#endif
