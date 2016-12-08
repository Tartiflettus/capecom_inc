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
    using iteratorVoiture=LesVoitures::iterator;
    using iteratorBus=LesBus::iterator;
    using iteratorVelo=LesVelos::iterator;

    LesVehicules():lesVoitures(), lesBus(), lesVelos(){}
    /*fonctions voitures*/
    void ajouter(Voiture *v);

    void supprimer(Voiture *v);

    /*fonctions velos*/
    void ajouter(Velo *v);

    void supprimer(Velo *v);

    /*fonctions bus*/
    void ajouter(Bus *b);

    void supprimer(Bus *b);

    /*fonction de suppression de vehicules par ID*/
    void supprimer(int id);

    iteratorVoiture beginVoiture(){
        return lesVoitures.begin();
    }
    iteratorVoiture endVoiture(){
        return lesVoitures.end();
    }

    iteratorBus beginBus(){
        return lesBus.begin();
    }
    iteratorBus endBus(){
        return lesBus.end();
    }

    iteratorVelo beginVelo(){
        return lesVelos.begin();
    }
    iteratorVelo endVelo(){
        return lesVelos.end();
    }

};

#endif // LESVEHICULES
