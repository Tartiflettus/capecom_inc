#include "vueaccueil.h"
#include "garage.h"
#include <QBoxLayout>

VueAccueil::VueAccueil(QWidget *parent, Garage& g): QWidget(parent)
{
    garage = &g;

    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QHBoxLayout *layoutActeurs = new QHBoxLayout();
    QVBoxLayout *layoutCas = new QVBoxLayout();
    layoutFen->addLayout(layoutActeurs);
    layoutFen->addLayout(layoutCas);

    btnAdmin = new QRadioButton("admin");
    btnAjouterVehicule = new QPushButton("Ajouter véhicule");

    layoutActeurs->addWidget(btnAdmin);
    layoutCas->addWidget(btnAjouterVehicule);

    this->setLayout(layoutFen);

    QObject::connect(btnAjouterVehicule, SIGNAL(clicked()), this, SLOT(ajouterVehicule()));
    garage->ajouterVue(*this);
}


void VueAccueil::ajouterVehicule(){
    garage->setCasUtilisation(Garage::AJOUTER_VEHICULE);
}


void VueAccueil::maj(){
    std::cout<< "maj de vue accueil\n";
}
