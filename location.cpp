#include "location.h"
#include "Vehicule.hpp"

int Location::_idActu = 0;


Location::Location(const QDate& d, const QDate& f, const Client& c, Vehicule& v):
    id(nextId()), debut(d), fin(f), client(c), vehicule(&v)
{
}

Location::Location(): id(nextId()), vehicule(nullptr)
{
}



int Location::identifiant() const{
    return id;
}

QDate Location::getDebut() const{
    return debut;
}

QDate Location::getFin() const{
    return fin;
}

QString Location::getModele()const{
    return vehicule->modele();
}

