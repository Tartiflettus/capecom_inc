#include "vueajoutervehicule.h"
#include "garage.h"
#include <QFormLayout>
#include <QHBoxLayout>

#include "Voiture.hpp"
#include "velo.h"


VueAjouterVehicule::VueAjouterVehicule(Garage& g, QWidget* parent): QWidget(parent), Vue(g)
{
    QFormLayout* layoutVue = new QFormLayout();
    QHBoxLayout* layoutVehicule = new QHBoxLayout();

    btnVoiture = new QRadioButton("voiture");
    btnVelo = new QRadioButton("Vélo");
    layoutVehicule->addWidget(btnVoiture);
    layoutVehicule->addWidget(btnVelo);

    lineImmatriculation = new QLineEdit();
    lineModele = new QLineEdit();
    lineNbPlaces = new QLineEdit();
    btnConfirmer = new QPushButton("confirmer");

    layoutVue->addRow(layoutVehicule);
    layoutVue->addRow("immatriculation", lineImmatriculation);
    layoutVue->addRow("modèle", lineModele);
    layoutVue->addRow("nombre de places", lineNbPlaces);
    layoutVue->addRow(btnConfirmer);

    garage->ajouterVue(*this);
}


void VueAjouterVehicule::ajouter(){
    if(btnVoiture->isChecked()){
        Voiture v(lineNbPlaces->text().toInt(), lineImmatriculation->text(), lineModele->text());

        garage->ajouterVoiture(v);
    }else if(btnVelo->isChecked()){
        Velo v(lineNbPlaces->text().toInt());

        garage->ajouterVelo(v);
    }

}
