#ifndef LOCATION_H
#define LOCATION_H

#include "plagehoraire.h"
#include "client.h"
#include "Vehicule.hpp"
#include <QDate>

class Location {
protected:
    int id;
    QDate debut;
    QDate fin;
    Client client;
    Vehicule *vehicule;


public:
    /// @brief constructeur de location prenant une plage horaire, un client, une véhicule
    Location(const QDate& d, const QDate& f, const Client& c, Vehicule& v):
        id(nextId()), debut(d), fin(f), client(c), vehicule(&v)
    {
    }

    Location(): id(nextId()), vehicule(nullptr)
    {
    }

    int identifiant() const{
        return id;
    }

    QDate getDebut() const{
        return debut;
    }

    QDate getFin() const{
        return fin;
    }

    QString getModele()const{
        return vehicule->modele();
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
