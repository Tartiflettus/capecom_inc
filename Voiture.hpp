#ifndef VOITURE
#define VOITURE

#include "Vehicule.hpp"

class Voiture : public Vehicule {
public :
    Voiture(int places, const QString& plaque, const QString& mod):
        Vehicule(places, plaque, mod)
    {
    }

    //Voiture();


    bool operator==(const Voiture& v){
        return v.id == id;
    }

};

#endif
