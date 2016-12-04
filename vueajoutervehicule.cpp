#include "vueajoutervehicule.h"
#include "garage.h"
#include <QFormLayout>
#include <QHBoxLayout>

#include "Voiture.hpp"
#include "velo.h"
#include "bus.h"


VueAjouterVehicule::VueAjouterVehicule(Garage& g, QWidget* parent): QWidget(parent), Vue(g)
{
    QFormLayout* layoutVue = new QFormLayout();
    QHBoxLayout* layoutVehicule = new QHBoxLayout();

    btnVoiture = new QRadioButton("voiture");
    btnVelo = new QRadioButton("vélo");
    btnBus = new QRadioButton("bus");
    layoutVehicule->addWidget(btnVoiture);
    layoutVehicule->addWidget(btnVelo);
    layoutVehicule->addWidget(btnBus);


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
    QObject::connect(btnVelo, SIGNAL(clicked()), this, SLOT(casVelo()));
    QObject::connect(btnVoiture, SIGNAL(clicked()), this, SLOT(casVehicule()));
    QObject::connect(btnBus, SIGNAL(clicked()), this, SLOT(casVehicule()));


    garage->ajouterVue(*this);
}


void VueAjouterVehicule::ajouter(){
    if(btnVoiture->isChecked()){
        Voiture v(lineNbPlaces->text().toInt(), lineImmatriculation->text(), lineModele->text());

        garage->ajouterVoiture(v);
    }else if(btnVelo->isChecked()){
        Velo v(lineNbPlaces->text().toInt());

        garage->ajouterVelo(v);
    }else if(btnBus->isChecked()){
        Bus v(lineNbPlaces->text().toInt(), lineImmatriculation->text(), lineModele->text());
    }

    garage->setCasUtilisation(Garage::ACCUEIL);

}

void VueAjouterVehicule::casVelo(){
    lineImmatriculation->setEnabled(false);
    lineModele->setEnabled(false);
}

void VueAjouterVehicule::casVehicule(){
    lineImmatriculation->setEnabled(true);
    lineModele->setEnabled(true);
}

void VueAjouterVehicule::maj(){
}
