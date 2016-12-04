#ifndef LOCATION_H
#define LOCATION_H

#include "plagehoraire.h"
#include "client.h"
#include "Vehicule.hpp"

class Location {
protected:
    int id;
    struct tm plage;
    Client client;
    Vehicule v;

    /// @brief constructeur de location prenant une plage horaire, un client, une véhicule
    Location(PlageHoraire plage, Client client, Vehicule v);
public:
    Location(): id(nextId())
    {}

    bool operator == (const Location& loc){
        return loc.id == id;
    }
private:


    static int _idActu;
    static int nextId(){
        return _idActu++;
    }
};

#endif // LOCATION_H
