#ifndef VUE_H
#define VUE_H


class Garage;


class Vue
{
protected:
    Garage* garage;
public:
    Vue(Garage& g){
        garage = &g;
    }

    virtual void maj() = 0;
};

#endif // VUE_H
