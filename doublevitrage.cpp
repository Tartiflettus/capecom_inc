#include "doublevitrage.h"

#include "vueaccueil.h"

DoubleVitrage::DoubleVitrage(QWidget *parent): QWidget(parent)
{
    Vue::garage = &(DoubleVitrage::garage);
    this->setGeometry(50, 50, 500, 500);

/*<<<<<<< HEAD
    vueActu = new VueAccueil(garage, this);
=======*/
    vueActu = nullptr;
    maj();

    garage.ajouterVue(*this);
//>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98
}

DoubleVitrage::~DoubleVitrage()
{

}



void DoubleVitrage::maj(){
    //récupérer la vue correspondant au bon cas d'utilisation
    static QWidget * const mapCasUt[] = {
        new VueAccueil(garage),
        new VueAjouterVehicule(garage),
        new VueSupprimerVehicule(garage)
    };

    if(vueActu != nullptr){
        vueActu->hide();
        vueActu->setParent(nullptr);
    }
    vueActu = mapCasUt[garage.getCasUtilisation()];
    vueActu->setParent(this);
    vueActu->show();
    std::cout<< "Le cas d'utilisation a changé\n";
}


