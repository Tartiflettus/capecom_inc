#ifndef LESVEHICULES
#define LESVEHICULES

#include "LesVoitures.hpp"

class LesVehicules{
protected:
    LesVoitures lesVoitures;
    //LesBus lesBus;
    //LesVelos lesVelos;

public:
    LesVehicules():lesVoitures()/*, lesBus(), lesVelos()*/{}

    void ajouter(Voiture v);

    void supprimer(Voiture v);

};

#endif // LESVEHICULES
