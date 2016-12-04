#ifndef LESVELOS_H
#define LESVELOS_H

#include "velo.h"

class LesVelos {
protected:
    std::list<Velo> lesVelos;
public:
    LesVelos() {};

    void ajouter(const Velo& v){
         lesVelos.push_back(v);
    }

    void supprimer(const Velo& v){
        lesVelos.remove(v);
    }

    using iterator=std::list<Velo>::iterator;

    iterator begin(){
        return lesVelos.begin();
    }

    iterator end(){
        return lesVelos.end();
    }

};

#endif // LESVELOS_H
