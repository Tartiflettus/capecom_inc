#ifndef GARAGE_H
#define GARAGE_H

#include <stdio.h>
#include <time.h>
#include <list>
#include <iostream>
#include "LesVehicules.h"
#include "leslocations.h"




class Voiture;
class Velo;
class Bus;
class Vue;
class Location;

class Garage
{
public:
    using iteratorVoiture=LesVehicules::iteratorVoiture;
    using iteratorBus=LesVehicules::iteratorBus;
    using iteratorVelo=LesVehicules::iteratorVelo;

    enum casUt_t{ACCUEIL, AJOUTER_VEHICULE, SUPPRIMER_VEHICULE, SUPPRIMER_LOCATION, AJOUTER_LOCATION, nb_cas};

    enum vueUt_t{};

    Garage();

    void ajouterVue(Vue& v){
        lesVues.push_back(&v);
    }

    void supprimerVue(Vue* v){
        lesVues.remove(v);
    }

    void setCasUtilisation(const casUt_t c){
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
    }

    void ajouterVoiture(const Voiture& v){
        vehicules.ajouter(v);
        maj();
    }

    void ajouterVelo(const Velo& v){
        vehicules.ajouter(v);
        maj();
    }

    void ajouterBus(const Bus& b){
        vehicules.ajouter(b);
        maj();
    }

    void supprimerVehicule(const int id){
        vehicules.supprimer(id);
        maj();
    }

    void ajouterLocation(const Location& loc){
        lesLocations.ajouter(loc);
        maj();
    }

    void supprimerLocation(int id){
        for(auto& elem : lesLocations){
            if(elem.identifiant() == id){
                lesLocations.supprimer(elem);
                return;
            }
        }
    }

    void setPlageHoraire(const int annee, const int mois, const int jour, const int heure, const int min){
        plageActu.setDate(annee, mois, jour, heure,  min);
    }


    iteratorVoiture beginVoiture(){
        return vehicules.beginVoiture();
    }
    iteratorVoiture endVoiture(){
        return vehicules.endVoiture();
    }

    iteratorBus beginBus(){
        return vehicules.beginBus();
    }
    iteratorBus endBus(){
        return vehicules.endBus();
    }

    iteratorVelo beginVelo(){
        return vehicules.beginVelo();
    }
    iteratorVelo endVelo(){
        return vehicules.endVelo();
    }

private:
    std::list<Vue*> lesVues;

    casUt_t casUtilisation;
    vueUt_t vueActu;

    LesVehicules vehicules;
    LesLocations lesLocations;

    Location locationActu;
    PlageHoraire plageActu;
    Client clientActu;

    //@brief avertir les vues du changement
    void maj();


};

#endif // GARAGE_H
