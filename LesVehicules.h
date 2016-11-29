#ifndef LESVEHICULES
#define LESVEHICULES

#include "LesVoitures.hpp"
#include "Voiture.hpp"
#include "lesvelos.h"
#include "velo.h"

class LesVehicules{
protected:
    LesVoitures lesVoitures;
    //LesBus lesBus;
    LesVelos lesVelos;

public:
    LesVehicules():lesVoitures(), /*lesBus(),*/ lesVelos(){}
    /*fonctions voitures*/
    void ajouter(const Voiture& v);

    void supprimer(const Voiture& v);

    /*fonctions velos*/
    void ajouter(const Velo& v);

    void supprimer(const Velo& v);

};

#endif // LESVEHICULES
