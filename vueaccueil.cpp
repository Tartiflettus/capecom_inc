#include "vueaccueil.h"
#include "garage.h"
#include <QBoxLayout>

#include "garage.h"

<<<<<<< HEAD
VueAccueil::VueAccueil(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
=======
VueAccueil::VueAccueil(Garage& g, QWidget * parent): QWidget(parent), Vue(g)
>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98
{

    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QHBoxLayout *layoutActeurs = new QHBoxLayout();
    QVBoxLayout *layoutCas = new QVBoxLayout();
    layoutFen->addLayout(layoutActeurs);
    layoutFen->addLayout(layoutCas);

    btnAdmin = new QRadioButton("admin");
    btnAjouterVehicule = new QPushButton("Ajouter véhicule");
    btnSupprimerVehicule = new QPushButton("Supprimer véhicule");

    layoutActeurs->addWidget(btnAdmin);
    layoutCas->addWidget(btnAjouterVehicule);
    layoutCas->addWidget(btnSupprimerVehicule);

    this->setLayout(layoutFen);

    QObject::connect(btnAjouterVehicule, SIGNAL(clicked()), this, SLOT(ajouterVehicule()));
    QObject::connect(btnSupprimerVehicule, SIGNAL(clicked()), this, SLOT(supprimerVehicule()));
    garage->ajouterVue(*this);
}


void VueAccueil::ajouterVehicule(){
    garage->setCasUtilisation(Garage::AJOUTER_VEHICULE);
}

void VueAccueil::supprimerVehicule(){
    garage->setCasUtilisation(Garage::SUPPRIMER_VEHICULE);
}

void VueAccueil::maj(){
    std::cout<< "maj de vue accueil\n";
}
