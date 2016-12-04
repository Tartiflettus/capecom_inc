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

    LesVoitures(){};

    void ajouter(const Voiture& v){
        lesVoitures.push_back(v);
        std::cout<< "voiture ajoutée\n";
    }

    void supprimer(const Voiture& v){
        lesVoitures.remove(v);
    }

    using iterator=std::list<Voiture>::iterator;

    iterator begin(){
        return lesVoitures.begin();
    }

    iterator end(){
        return lesVoitures.end();
    }
   
};


#endif
