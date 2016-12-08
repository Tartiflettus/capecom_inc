#include "vueafficherlocationclient.h"

#include <QHBoxLayout>
#include <QFormLayout>

#include <cassert>
#include <QLabel>



VueAfficherLocationClient::VueAfficherLocationClient(Garage& g, QWidget *parent) : QWidget(parent),Vue(g)
{
    layoutGlob = new QVBoxLayout();
    layoutsForm = new QFormLayout();

    btnQuitter =  new QPushButton("quitter");
    id = new QLineEdit();
    btnConfirmer = new QPushButton("confirmer");

    layoutGlob->addWidget(btnQuitter);
    layoutGlob->addWidget(id);
    layoutGlob->addWidget(btnConfirmer);

    QObject::connect(btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
    QObject::connect(btnConfirmer, SIGNAL(clicked()), this, SLOT(afficherLocations()));

    layoutGlob->addLayout(layoutsForm);
    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}

void VueAfficherLocationClient::afficherLocations(){
    std::vector<Location> listLocations;
    listLocations = garage->locationsClient(id->text().toInt());
    int nbLocations = listLocations.size();
    PlageHoraire plage;
    QString modele;

    setUpdatesEnabled(false);

    for(int i=0; i < nbLocations; i++){
        plage = garage->getPlageLocation(listLocations[i]);
        modele = garage->getModeleLocation(listLocations[i]);

        layoutsForm->addRow("annee", new QLabel(QString::number(plage.annee())));
        layoutsForm->addRow("mois",new QLabel(QString::number (plage.mois())));
        layoutsForm->addRow("jour", new QLabel(QString::number(plage.jour())));
        layoutsForm->addRow("modele", new QLabel(modele));

    }

    setUpdatesEnabled(true);
    repaint();
}


void VueAfficherLocationClient::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueAfficherLocationClient::maj(){
}
