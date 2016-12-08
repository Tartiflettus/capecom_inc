#include "LesVehicules.h"


void LesVehicules::ajouter(Voiture *v){
    lesVoitures.ajouter(v);
}

void LesVehicules::ajouter(Bus *v){
    lesBus.ajouter(v);
}

void LesVehicules::ajouter(Velo* v){
    lesVelos.ajouter(v);
}

void LesVehicules::supprimer(Voiture* v){
    lesVoitures.supprimer(v);
}

void LesVehicules::supprimer(Bus *v){
    lesBus.supprimer(v);
}

void LesVehicules::supprimer(Velo *v){
    lesVelos.supprimer(v);
}

void LesVehicules::supprimer(int id){

    for(auto& elem : lesVoitures){
        if(elem->identifiant() == id){
            lesVoitures.supprimer(elem);
            return;
        }
    }

    for(auto& elem : lesBus){
        if(elem->identifiant() == id){
            lesBus.supprimer(elem);
            return;
        }
    }


    for(auto& elem : lesVelos){
        if(elem->identifiant() == id){
            lesVelos.supprimer(elem);
            return;
        }
    }

}

