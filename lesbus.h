#ifndef LESBUS_H
#define LESBUS_H

#include "bus.h"
#include <list>


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

    using iterator=std::list<Bus>::iterator;

    iterator begin(){
        return lesBus.begin();
    }

    iterator end(){
        return lesBus.end();
    }
};

#endif // LESBUS_H
