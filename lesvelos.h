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
};

#endif // LESVELOS_H
