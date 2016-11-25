#ifndef GARAGE_H
#define GARAGE_H


#include <list>
#include <iostream>
//#include "LesVehicules.hpp"

class Vue;


class Garage
{
private:
    std::list<Vue*> lesVues;

    int casUtilisation;
    int vueActu;

    //LesVehicules lesVehicules;


    //@brief avertir les vues du changement
    void maj();

public:

    enum {ACCUEIL, AJOUTER_VEHICULE};


    Garage();

    void ajouter_vue(Vue& v){
        lesVues.push_back(&v);
    }

    void setCasUtilisation(int c){
        casUtilisation = c;
        maj();
    }

    int get_cas_utilisation() const{
        return casUtilisation;
    }

    int get_vue_actu() const{
        return vueActu;
    }

    void ajouterVehicule(){
        std::cout<< "Ajout de véhicule\n";
    }

};

#endif // GARAGE_H
