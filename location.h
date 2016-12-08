#ifndef LOCATION_H
#define LOCATION_H

#include "plagehoraire.h"
#include "client.h"

#include <QDate>


class Vehicule;


class Location {
protected:
    int id;
    QDate debut;
    QDate fin;
    Client client;
    Vehicule *vehicule;


public:
    /// @brief constructeur de location prenant une plage horaire, un client, une véhicule
    Location(const QDate& d, const QDate& f, const Client& c, Vehicule& v);

    Location();


    int identifiant() const;

    QDate getDebut() const;

    QDate getFin() const;

    QString getModele()const;

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
