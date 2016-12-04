#ifndef LESLOCATIONS_H
#define LESLOCATIONS_H

#include "location.h"
#include <list>
#include <vector>

class LesLocations {
protected:

    std::list<Location> lesLocations;

public :

    LesLocations(){};

    void ajouter(const Location& l){
        lesLocations.push_back(l);
    }

    void supprimer(const Location& l){
        lesLocations.remove(l);
    }

    using iterator=std::list<Location>::iterator;

    iterator begin(){
        return lesLocations.begin();
    }

    iterator end(){
        return lesLocations.end();
    }

    std::vector<Location> locationClient(int id);

};

#endif // LESLOCATIONS_H
