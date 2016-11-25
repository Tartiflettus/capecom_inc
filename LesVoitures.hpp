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
    void ajouter_voiture(Voiture v){
        lesVoitures.push_back(v);
    }

    void supprimer_voiture(Voiture v){
        lesVoitures.remove(v);
    }
}


#endif
