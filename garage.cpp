#include "garage.h"
#include "vue.h"

Garage::Garage()
{
 casUtilisation = ACCUEIL;
}


void Garage::maj(){
    for(auto& elem : lesVues){
        elem->maj();
    }
}


