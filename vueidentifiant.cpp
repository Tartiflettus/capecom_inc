#include "vueidentifiant.h"
#include <QFormLayout>

VueIdentifiant::VueIdentifiant(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
{
    QFormLayout *layoutGlob = new QFormLayout();
    setLayout(layoutGlob);

    numero = new QLabel();
    btnConfirmer = new QPushButton("confirmer");
    layoutGlob->addRow("identifiant", numero);
    layoutGlob->addRow(btnConfirmer);

    QObject::connect(btnConfirmer, SIGNAL(clicked()), this, SLOT(confirmer()));

    garage->ajouterVue(*this);
}


void VueIdentifiant::setIdentifiant(int id){
    numero->setText(QString::number(id));
}


void VueIdentifiant::confirmer(){
    garage->setCasUtilisation(Garage::ACCUEIL);
}
