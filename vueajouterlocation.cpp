#include "vueajouterlocation.h"

#include <QHBoxLayout>
#include <QFormLayout>

#include <cassert>



VueAjouterLocation::VueAjouterLocation(Garage& g, QWidget *parent) : QWidget(parent),Vue(g)
{
    QVBoxLayout *layoutGlob = new QVBoxLayout();
    QHBoxLayout *layoutDates = new QHBoxLayout();
    layoutGlob->addLayout(layoutDates);
    QFormLayout* layoutsForm[2] = {new QFormLayout(), new QFormLayout()};
    layoutDates->addLayout(layoutsForm[DEBUT]);
    layoutDates->addLayout(layoutsForm[FIN]);

    for(int i=0; i < 2; i++){
        annee[i] = new QLineEdit();
        mois[i] = new QLineEdit();
        jour[i] = new QLineEdit();
        layoutsForm[i]->addRow("annee", annee[i]);
        layoutsForm[i]->addRow("mois", mois[i]);
        layoutsForm[i]->addRow("jour", jour[i]);
    }


    labels[VOITURE] = new QLabel("voiture");
    labels[BUS] = new QLabel("bus");
    labels[VELO] = new QLabel("velo");
    QHBoxLayout *layoutTypes = new QHBoxLayout();
    layoutGlob->addLayout(layoutTypes);
    for(int i=0; i < nb_types; i++){
        buttons[i] = new QRadioButton();
        layoutTypes->addWidget(labels[i]);
        layoutTypes->addWidget(buttons[i]);
    }

    QObject::connect(buttons[VOITURE], SIGNAL(clicked()), this, SLOT(typeToVoiture()));
    QObject::connect(buttons[BUS], SIGNAL(clicked()), this, SLOT(typeToBus()));
    QObject::connect(buttons[VELO], SIGNAL(clicked()), this, SLOT(typeToVelo()));

    layoutModeles = new QHBoxLayout();
    layoutGlob->addLayout(layoutModeles);

    mapper = new QSignalMapper(this);
    getVehicules();


    QPushButton *btnQuitter = new QPushButton("revenir");
    QPushButton *btnConfirmer = new QPushButton("confirmer");
    layoutGlob->addWidget(btnQuitter);
    layoutGlob->addWidget(btnConfirmer);


    QObject::connect(btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
    QObject::connect(btnConfirmer, SIGNAL(clicked()), this, SLOT(confirmer()));

    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}



void VueAjouterLocation::getVehicules(){
    for(auto& elem : modeles){
        delete elem;
    }
    modeles.clear();
    vehicules.clear();
    switch (typeActu) {
        case VOITURE:
            remplirModeles(garage->beginVoiture(), garage->endVoiture());
            break;
        case BUS:
            remplirModeles(garage->beginBus(), garage->endBus());
            break;
        case VELO:
            remplirModeles(garage->beginVelo(), garage->endVelo());
            break;
        default:
            assert(false);
            break;
    }
}




void VueAjouterLocation::maj(){
    getVehicules();
}



void VueAjouterLocation::quitter(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueAjouterLocation::confirmer(){
    Location l(PlageHoraire(annee[DEBUT]->text().toInt(), mois[DEBUT]->text().toInt(), jour[DEBUT]->text().toInt()),
               Client(), *(vehicules[indexSelection]));
    garage->ajouterLocation(l);
    garage->setCasUtilisation(Garage::ACCUEIL);
}


void VueAjouterLocation::typeToVoiture(){
    VueAjouterLocation::typeActu=VOITURE;
    VueAjouterLocation::maj();
}

void VueAjouterLocation::typeToBus(){
    VueAjouterLocation::typeActu=BUS;
    VueAjouterLocation::maj();
}

void VueAjouterLocation::typeToVelo(){
    VueAjouterLocation::typeActu=VELO;
    VueAjouterLocation::maj();
}


void VueAjouterLocation::selectionnerVehicule(int index){
    indexSelection = index;
    std::cout<< "index : "<< indexSelection<< "\n";
}
