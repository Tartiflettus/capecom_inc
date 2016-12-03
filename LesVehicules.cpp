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

