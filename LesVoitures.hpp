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
    using iterator=std::list<Voiture>::iterator;

    LesVoitures(){};

    void ajouter(const Voiture& v){
        lesVoitures.push_back(v);
    }

    void supprimer(const Voiture& v){
        lesVoitures.remove(v);
    }

    void supprimer(const int id){
        lesVoitures.remove_if(lesVoitures.begin(), lesVoitures.end(), [id](const Voiture& v){return id == v.identifiant();});
    }

    iterator begin(){
        return lesVoitures.begin();
    }

    iterator end(){
        return lesVoitures.end();
    }

};


#endif
