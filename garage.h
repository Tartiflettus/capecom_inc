#ifndef GARAGE_H
#define GARAGE_H


#include <list>
#include <iostream>
#include "LesVehicules.h"

class Voiture;
class Velo;

class Vue;


class Garage
{

public:

    enum casUt_t{ACCUEIL, AJOUTER_VEHICULE, SUPPRIMER_VEHICULE, nb_cas};
    enum vueUt_t{};

    Garage();

    void ajouterVue(Vue& v){
        lesVues.push_back(&v);
    }

    void supprimerVue(Vue* v){
        lesVues.remove(v);
    }

    void setCasUtilisation(casUt_t c){
        casUtilisation = c;
        maj();
    }

    casUt_t getCasUtilisation() const{
        return casUtilisation;
    }

    vueUt_t getVueActu() const{
        return vueActu;
    }

    void ajouterVehicule(){
        std::cout<< "Ajout de véhicule\n";
    }

    void ajouterVoiture(const Voiture& v){
        vehicules.ajouter(v);
        maj();
    }

    void ajouterVelo(const Velo& v){
        vehicules.ajouter(v);
    }

private:
    std::list<Vue*> lesVues;

    casUt_t casUtilisation;
    vueUt_t vueActu;

    LesVehicules vehicules;


    //@brief avertir les vues du changement
    void maj();


};

#endif // GARAGE_H
