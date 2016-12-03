#ifndef VOITURE
#define VOITURE

#include "Vehicule.hpp"

class Voiture : public Vehicule {
public :
    Voiture(int places, const QString& plaque, const QString& mod):
        Vehicule(places, plaque, mod)
    {
    }

<<<<<<< HEAD
    //Voiture();


    bool operator==(const Voiture& v){
        return v.id == id;
    }

=======
>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98
};

#endif
