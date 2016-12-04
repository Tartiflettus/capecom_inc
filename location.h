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
    Vehicule *vehicule;


public:
    /// @brief constructeur de location prenant une plage horaire, un client, une véhicule
    Location(const PlageHoraire& p, const Client& c, Vehicule& v):
        id(nextId()), plage(p), client(c), vehicule(&v)
    {
    }

    Location(): id(nextId()), vehicule(nullptr)
    {
    }

    int identifiant(){
        return id;
    }

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
