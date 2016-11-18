#ifndef GARAGE_H
#define GARAGE_H


#include <list>

class Vue;


class Garage
{
private:
    std::list<Vue*> lesVues;

    int casUtilisation;
    int vueActu;

    //LesVehicules lesVehicules;


    //@brief avertir les vues du changement
    void maj();

public:
    Garage();

    void ajouter_vue(Vue& v){
        lesVues.push_back(&v);
    }


    int get_cas_utilisation() const{
        return casUtilisation;
    }

    int get_vue_actu() const{
        return vueActu;
    }

};

#endif // GARAGE_H
