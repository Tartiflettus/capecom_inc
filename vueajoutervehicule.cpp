#include "vueajoutervehicule.h"
#include "garage.h"
#include <QFormLayout>
#include <QHBoxLayout>

#include "Voiture.hpp"


VueAjouterVehicule::VueAjouterVehicule(Garage& g, QWidget* parent): QWidget(parent), Vue(g)
{
    QFormLayout* layoutVue = new QFormLayout();
    QHBoxLayout* layoutVehicule = new QHBoxLayout();

    btnVoiture = new QRadioButton("voiture");
    layoutVehicule->addWidget(btnVoiture);

    lineImmatriculation = new QLineEdit();
    lineModele = new QLineEdit();
    lineNbPlaces = new QLineEdit();
    btnConfirmer = new QPushButton("confirmer");

    layoutVue->addRow(layoutVehicule);
    layoutVue->addRow("immatriculation", lineImmatriculation);
    layoutVue->addRow("modèle", lineModele);
    layoutVue->addRow("nombre de places", lineNbPlaces);
    layoutVue->addRow(btnConfirmer);

    setLayout(layoutVue);

    QObject::connect(btnConfirmer, SIGNAL(clicked()), this, SLOT(ajouter()));

    garage->ajouterVue(*this);
}


void VueAjouterVehicule::ajouter(){
    Voiture v(lineNbPlaces->text().toInt(), lineImmatriculation->text(), lineModele->text());

    garage->ajouterVoiture(v);
}



void VueAjouterVehicule::maj(){
    std::cout<< "maj de ajouter véhicule\n";
}

