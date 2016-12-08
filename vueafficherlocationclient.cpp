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

    layoutGlob->addWidget(id);
    layoutGlob->addWidget(btnConfirmer);

    QObject::connect(btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
    QObject::connect(btnConfirmer, SIGNAL(clicked()), this, SLOT(afficherLocations()));

    layoutGlob->addLayout(layoutsForm);
    layoutGlob->addWidget(btnQuitter);
    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}

void VueAfficherLocationClient::afficherLocations(){
    setUpdatesEnabled(false);

    btnConfirmer->hide();
    id->hide();

    std::vector<Location*> listLocations;
    listLocations = garage->locationsClient(id->text().toInt());
    int nbLocations = listLocations.size();
    QDate debut, fin;
    QString modele;

    for(int i=0; i < nbLocations; i++){
        debut = listLocations[i]->getDebut();
        fin = listLocations[i]->getFin();
        modele = listLocations[i]->getModele();

        QString date = QString::number(debut.day()) + '/';
        date += QString::number (debut.month()) + '/';
        date += QString::number(debut.year()) + " - ";
        date += QString::number(fin.day()) + '/';
        date += QString::number (fin.month()) + '/';
        date += QString::number(fin.year());

        layoutGlob->addWidget(new QLabel("date : " + date));
        layoutGlob->addWidget(new QLabel("modele : " + modele));

    }

    setUpdatesEnabled(true);
}


void VueAfficherLocationClient::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueAfficherLocationClient::maj(){
}
