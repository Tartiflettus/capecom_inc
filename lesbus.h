#ifndef LESBUS_H
#define LESBUS_H

#include "bus.h"

class LesBus {
protected :

    std::list<Bus> lesBus;

public :

    LesBus(){};

    void ajouter(const Bus& v){
        lesBus.push_back(v);
    }

    void supprimer(const Bus& v){
        lesBus.remove(v);
    }
};

#endif // LESBUS_H
