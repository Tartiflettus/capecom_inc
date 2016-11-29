#include <string>
#include "Vehicule.hpp"

int Vehicule::_idActu = 0;

Vehicule::Vehicule(int places, const QString& plaque, const QString& mod) :
    id(nextId()),
    nbPlaces(places),
    plaqueImmatriculation(plaque),
    modeleVehicule(mod)
{
}

Vehicule::Vehicule(int places) :
    nbPlaces(places)
{
}

int Vehicule::nextId(){
    return _idActu++;
}
