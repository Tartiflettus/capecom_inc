#ifndef LESVEHICULES
#define LESVEHICULES

#include "LesVoitures.hpp"
#include "Voiture.hpp"

class LesVehicules{
protected:
    LesVoitures lesVoitures;
    //LesBus lesBus;
    //LesVelos lesVelos;

public:
    LesVehicules():lesVoitures()/*, lesBus(), lesVelos()*/{}

    void ajouter(const Voiture& v);

    void supprimer(const Voiture& v);

};

#endif // LESVEHICULES
