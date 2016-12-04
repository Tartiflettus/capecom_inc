#include "vueaccueil.h"
#include "garage.h"
#include <QBoxLayout>

#include "garage.h"


VueAccueil::VueAccueil(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
{

    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QHBoxLayout *layoutActeurs = new QHBoxLayout();
    QVBoxLayout *layoutCas = new QVBoxLayout();
    layoutFen->addLayout(layoutActeurs);
    layoutFen->addLayout(layoutCas);

    btnAdmin = new QRadioButton("admin");
    btnAdmin->setChecked(true);
    btnAjouterVehicule = new QPushButton("Ajouter véhicule");
    btnSupprimerVehicule = new QPushButton("Supprimer véhicule");
    btnSupprimerLocation = new QPushButton("Supprimer location");
    btnAjouterLocation = new QPushButton("Ajouter location");
    btnConsulterLocation = new QPushButton("Consulter location");


    layoutActeurs->addWidget(btnAdmin);
    layoutCas->addWidget(btnAjouterVehicule);
    layoutCas->addWidget(btnSupprimerVehicule);
    layoutCas->addWidget(btnSupprimerLocation);
    layoutCas->addWidget(btnAjouterLocation);
    layoutCas->addWidget(btnConsulterLocation);

    this->setLayout(layoutFen);

    QObject::connect(btnAjouterVehicule, SIGNAL(clicked()), this, SLOT(ajouterVehicule()));
    QObject::connect(btnSupprimerVehicule, SIGNAL(clicked()), this, SLOT(supprimerVehicule()));
    QObject::connect(btnSupprimerLocation, SIGNAL(clicked()), this, SLOT(supprimerLocation()));
    QObject::connect(btnAjouterLocation,SIGNAL(clicked()), this, SLOT(ajouterLocation()));
    QObject::connect(btnConsulterLocation,SIGNAL(clicked()), this, SLOT(consulterLocation()));
    garage->ajouterVue(*this);
}

void VueAccueil::consulterLocation(){
    garage->setCasUtilisation(Garage::CONSULTER_LOCATION);
}

void VueAccueil::ajouterVehicule(){
    garage->setCasUtilisation(Garage::AJOUTER_VEHICULE);
}

void VueAccueil::supprimerVehicule(){
    garage->setCasUtilisation(Garage::SUPPRIMER_VEHICULE);
}

void VueAccueil::supprimerLocation(){
    garage->setCasUtilisation(Garage::SUPPRIMER_LOCATION);
}

void VueAccueil::ajouterLocation(){
    garage->setCasUtilisation(Garage::AJOUTER_LOCATION);
}

void VueAccueil::maj(){
}
