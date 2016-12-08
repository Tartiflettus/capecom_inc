#include <string>
#include "Vehicule.hpp"
#include "location.h"

int Vehicule::_idActu = 0;

Vehicule::Vehicule(int places, const QString& plaque, const QString& mod) :
    id(nextId()),
    nbPlaces(places),
    plaqueImmatriculation(plaque),
    modeleVehicule(mod),
    locations()
{
}

Vehicule::Vehicule(int places) :
    id(nextId()),
    nbPlaces(places)
{
}

int Vehicule::nextId(){
    return _idActu++;
}


Vehicule::iterator Vehicule::begin(){
    return locations.begin();
}

Vehicule::iterator Vehicule::end(){
    return locations.end();
}
