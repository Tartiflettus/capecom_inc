#include "LesVehicules.h"


void LesVehicules::ajouter(const Voiture& v){
    lesVoitures.ajouter(v);
}

void LesVehicules::ajouter(const Bus& v){
    lesBus.ajouter(v);
}

void LesVehicules::ajouter(const Velo& v){
    lesVelos.ajouter(v);
}

void LesVehicules::supprimer(const Voiture& v){
    lesVoitures.supprimer(v);
}

void LesVehicules::supprimer(const Bus& v){
    lesBus.supprimer(v);
}

void LesVehicules::supprimer(const Velo& v){
    lesVelos.supprimer(v);
}

void LesVehicules::supprimer(int id){

    for(auto& elem : lesVoitures){
        if(elem.identifiant() == id){
            lesVoitures.supprimer(elem);
            return;
        }
    }

    for(auto& elem : lesBus){
        if(elem.identifiant() == id){
            lesBus.supprimer(elem);
            return;
        }
    }


    for(auto& elem : lesVelos){
        if(elem.identifiant() == id){
            lesVelos.supprimer(elem);
            return;
        }
    }

}

