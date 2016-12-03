#ifndef LESBUS_H
#define LESBUS_H

#include "bus.h"

class LesBus {
protected :

    std::list<Bus> lesBus;

public :

    LesBus(){};

    void ajouter(const Bus& b){
        lesBus.push_back(b);
    }

    void supprimer(const Bus& b){
        lesBus.remove(b);
    }
};

#endif // LESBUS_H
