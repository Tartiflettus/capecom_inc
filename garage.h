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
        std::cout<< "voiture ajoutée\n";
        maj();
    }

    void ajouterVelo(const Velo& v){
        vehicules.ajouter(v);
        std::cout<< "vélo ajouté\n";
        maj();
    }

    void ajouterBus(const Bus& b){
        vehicules.ajouter(b);
        std::cout<< "bus ajouté\n";
        maj();
    }

    void ajouterLocation(const Location& loc){
        lesLocations.ajouter(loc);
        std::cout<< "location ajoutée\n";
        maj();
    }

    void setPlageHoraire(const int& annee, const int& mois, const int& jour, const int& heure, const int& min){
        plage.setDate(annee, mois, jour, heure,  min);
    }

private:
    std::list<Vue*> lesVues;

    casUt_t casUtilisation;
    vueUt_t vueActu;

    LesVehicules vehicules;
    LesLocations lesLocations;

    Location location_actu;
    PlageHoraire plage_actu;
    Client client_actu;

    //@brief avertir les vues du changement
    void maj();


};

#endif // GARAGE_H
