#include "doublevitrage.h"

#include "vueaccueil.h"

DoubleVitrage::DoubleVitrage(QWidget *parent): QWidget(parent)
{
    Vue::garage = &(DoubleVitrage::garage);
    this->setGeometry(50, 50, 500, 500);

    vueActu = nullptr;
    maj();

    garage.ajouterVue(*this);
}

DoubleVitrage::~DoubleVitrage()
{

}



void DoubleVitrage::maj(){
    //récupérer la vue correspondant au bon cas d'utilisation
    static QWidget * const mapCasUt[] = {
        new VueAccueil(garage),
        new VueAjouterVehicule(garage),
        new VueSupprimerVehicule(garage),
        new VueSupprimerLocation(garage)
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


