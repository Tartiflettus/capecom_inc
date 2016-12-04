#include "vueajouterlocation.h"

#include <QHBoxLayout>
#include <QFormLayout>


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


    setLayout(layoutGlob);
    garage->ajouterVue(*this);
}


void VueAjouterLocation::maj(){

}
