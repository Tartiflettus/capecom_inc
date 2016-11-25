#ifndef LESVEHICULES
#define LESVEHICULES

#include "LesVoitures.h"

class LesVehicules{
protected:
    LesVoitures lesVoitures;
    //LesBus lesBus;
    //LesVelos lesVelos;

public:
    LesVehicules():lesVoitures()/*, lesBus(), lesVelos()*/{}

    void ajouter(Vehicule v);

    void supprimer(Vehicule v);

}

#endif // LESVEHICULES
