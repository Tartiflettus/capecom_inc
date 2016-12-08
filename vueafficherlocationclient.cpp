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
    QDate debut;
    QString modele;

    setUpdatesEnabled(false);
    for(int i=0; i < nbLocations; i++){
        debut = listLocations[i].getDebut();
        modele = listLocations[i].getModele();

        layoutsForm->addRow("annee", new QLabel(QString::number(debut.year())));
        layoutsForm->addRow("mois",new QLabel(QString::number (debut.month())));
        layoutsForm->addRow("jour", new QLabel(QString::number(debut.day())));
        layoutsForm->addRow("modele", new QLabel(modele));

    }
    setUpdatesEnabled(true);
}


void VueAfficherLocationClient::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueAfficherLocationClient::maj(){
}
