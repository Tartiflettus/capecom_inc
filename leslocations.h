#ifndef LESLOCATIONS_H
#define LESLOCATIONS_H

#include "location.h"
#include <list>
#include <vector>
#include <iostream>

class LesLocations {
protected:

    std::list<Location*> lesLocations;

public :

    LesLocations(){};

    void ajouter(Location* l){
        lesLocations.push_back(l);
        std::cout<< lesLocations.back()->identifiant() << std::endl;
    }

    void supprimer(Location *l){
        lesLocations.remove(l);
    }

    using iterator=std::list<Location*>::iterator;

    iterator begin(){
        return lesLocations.begin();
    }

    iterator end(){
        return lesLocations.end();
    }

    std::vector<Location*> locationClient(int id);

};

#endif // LESLOCATIONS_H
