#include "LesVehicules.h"


void LesVehicules::ajouter(const Voiture& v){
    lesVoitures.ajouter(v);
}

/*
void LesVehicules::ajouter(Bus v){
    lesBus.ajouter(v);
}

void LesVehicules::ajouter(Velo v){
    lesVelos.ajouter(v);
}
*/

void LesVehicules::supprimer(const Voiture& v){
    lesVoitures.supprimer(v);
}

/*
void LesVehicules::supprimer(Bus v){
    lesBus.supprimer(v);
}

void LesVehicules::supprimer(Velo v){
    lesVelos.supprimer(v);
}
*/
