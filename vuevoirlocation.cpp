#include <QFormLayout>
#include "garage.h"
#include <cassert>
#include <QLabel>
#include "vuevoirlocation.h"
#include <iostream>


VueVoirLocation::VueVoirLocation(Garage& g, QWidget *parent) : QWidget(parent),Vue(g)
{
    layoutGlob = new QVBoxLayout();
    layoutsForm = new QFormLayout();

    btnQuitter =  new QPushButton("quitter");
    voir = new QPushButton("voir");

    QObject::connect(btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
    QObject::connect(voir, SIGNAL(clicked()), this, SLOT(voirLocation()));


    layoutGlob->addLayout(layoutsForm);
    layoutGlob->addWidget(btnQuitter);
    layoutGlob->addWidget(voir);
    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}

void VueVoirLocation::voirLocation(){
    std::vector<Location> listLocations;
    listLocations = garage->locationsClient();
    int nbLocations = listLocations.size();
    QDate debut, fin;
    QString modele;

    for(int i=0; i < nbLocations; i++){
        debut = listLocations[i].getDebut();
        fin = listLocations[i].getFin();
        modele = listLocations[i].getModele();

        QString date = QString::number(debut.day()) + '/';
        date += QString::number (debut.month()) + '/';
        date += QString::number(debut.year()) + " - ";
        date += QString::number(fin.day()) + '/';
        date += QString::number (fin.month()) + '/';
        date += QString::number(fin.year());

        layoutsForm->addRow("dates location : ", new QLabel(date));
        layoutsForm->addRow("modele : ", new QLabel(modele));

    }
}

void VueVoirLocation::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueVoirLocation::maj(){
}
