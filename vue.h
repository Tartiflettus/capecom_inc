#ifndef VUE_H
#define VUE_H


#include "garage.h"


class Vue
{
protected:
    Garage* garage;
public:
    Vue(Garage& g){
        garage = &g;
    }

    Vue(){
        garage = nullptr;
    }

    ~Vue(){
        //garage->supprimerVue(this);
    }

    virtual void maj() = 0;
};

#endif // VUE_H
