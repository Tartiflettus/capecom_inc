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


    void maj();

public:
    Garage();

    void ajouterVue(Vue& v){
        lesVues.push_back(&v);
    }


    int getCasUtilisation() const{
        return casUtilisation;
    }

    int getVueActu() const{
        return vueActu;
    }

};

#endif // GARAGE_H
