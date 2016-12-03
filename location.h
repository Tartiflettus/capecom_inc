#ifndef LOCATION_H
#define LOCATION_H
#include "plagehoraire.h"
#include "client.h"
#include "Vehicule.hpp"

class Location {
protected:
    int id;
    PlageHoraire plage;
    Client client;
    Vehicule v;
    /// @brief constructeur de location prenant une plage horaire, un client, une véhicule
    Location(PlageHoraire plage, Client client, Vehicule v);

private:
    Location();

    static int _idActu;
    static int nextId();
};

#endif // LOCATION_H
