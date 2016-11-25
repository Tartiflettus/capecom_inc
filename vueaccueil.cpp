#include "vueaccueil.h"
#include "garage.h"
#include <QBoxLayout>

VueAccueil::VueAccueil(QWidget *parent): QWidget(parent),
    btnAdmin(new QRadioButton("admin", this)),
    btnAjouterVehicule(new QPushButton("Ajouter véhicule", this))
{
    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QHBoxLayout *layoutActeurs = new QHBoxLayout();
    QVBoxLayout *layoutCas = new QVBoxLayout();
    layoutFen->addLayout(layoutActeurs);
    layoutActeurs->addWidget(btnAdmin);
    layoutCas->addWidget(btnAjouterVehicule);

    this->setLayout(layoutFen);

    QObject::connect(btnAjouterVehicule, SIGNAL(clicked()), this, SLOT(ajouterVehicule()));
}


void VueAccueil::ajouterVehicule(){
    garage->setCasUtilisation(Garage::AJOUTER_VEHICULE);
}


void VueAccueil::maj(){

}
