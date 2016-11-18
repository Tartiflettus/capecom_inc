#include "garage.h"

#include "vue.h"

Garage::Garage()
{

}


void Garage::maj(){
    for(auto& elem : lesVues){
        elem->maj();
    }
}
