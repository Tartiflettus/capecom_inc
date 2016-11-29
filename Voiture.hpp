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

    //Voiture();


<<<<<<< HEAD
bool operator==(const Voiture& v){
        return v.id == id
                && v.modeleVehicule == modeleVehicule
                && v.nbPlaces == nbPlaces
                && v.plaqueImmatriculation == plaqueImmatriculation;
=======
    bool operator==(const Voiture& v){
        return v.id == id;
>>>>>>> 45f754159d76922a9f0e60b0847986f5db25d367
    }
};


#endif
