#include "vueafficherlocationclient.h"

#include <QHBoxLayout>
#include <QFormLayout>

#include <cassert>
#include <QLabel>



VueAfficherLocationClient::VueAfficherLocationClient(Garage& g, QWidget *parent) : QWidget(parent),Vue(g)
{
    QVBoxLayout *layoutGlob = new QVBoxLayout();
    btnQuitter =  new QPushButton("quitter");
    id = new QLineEdit();

    QObject::connect(btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));

    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}



void VueAfficherLocationClient::afficherLocations(){
    std::vector<Location> listLocations;
    listLocations = garage->locationsClient(id->text().toInt());
    int nbLocations = listLocations.size();
    QFormLayout* layoutsForm[nbLocations] = {new QFormLayout(), new QFormLayout()};
    PlageHoraire plage;
    QString modele;

    for(int i=0; i < nbLocations; i++){
        plage = garage->getPlageLocation(listLocations[i]);
        modele = garage->getModeleLocation(listLocations[i]);

        layoutsForm[i]->addRow("annee", new QLabel(QString::number(plage.annee())));
        layoutsForm[i]->addRow("mois",new QLabel(QString::number (plage.mois())));
        layoutsForm[i]->addRow("jour", new QLabel(QString::number(plage.jour())));
        layoutsForm[i]->addRow("modele", new QLabel(modele));
    }

}


void VueAfficherLocationClient::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueAfficherLocationClient::maj(){
}
