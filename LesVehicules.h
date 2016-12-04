#ifndef LESVEHICULES
#define LESVEHICULES

#include "LesVoitures.hpp"
#include "Voiture.hpp"
#include "lesvelos.h"
#include "velo.h"
#include "lesbus.h"
#include "bus.h"

class LesVehicules{
protected:
    LesVoitures lesVoitures;
    LesBus lesBus;
    LesVelos lesVelos;

public:
    LesVehicules():lesVoitures(), lesBus(), lesVelos(){}
    /*fonctions voitures*/
    void ajouter(const Voiture& v);

    void supprimer(const Voiture& v);

    /*fonctions velos*/
    void ajouter(const Velo& v);

    void supprimer(const Velo& v);

    /*fonctions bus*/
    void ajouter(const Bus& b);

    void supprimer(const Bus& b);

    /*fonction de suppression de vehicules par ID*/
    void supprimer(int id);

};

#endif // LESVEHICULES
