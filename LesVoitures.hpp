#ifndef LES_VOITURES
#define LES_VOITURES
#include <string>
#include <iostream>
#include <list>
#include "Voiture.hpp"

class LesVoitures {
    protected :

    std::list<Voiture> lesVoitures;

    public :

    LesVoitures();
    void ajouter(const Voiture& v){
        lesVoitures.push_back(v);
    }

    void supprimer(const Voiture& v){
        lesVoitures.remove(v);
    }
};


#endif
