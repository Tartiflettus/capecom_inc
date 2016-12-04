#include "vueajouterlocation.h"

VueAjouterLocation::VueAjouterLocation(Garage& g, QWidget *parent) : QWidget(parent),Vue(g)
{

    garage->ajouterVue(*this);
}


void VueAjouterLocation::maj(){

}
