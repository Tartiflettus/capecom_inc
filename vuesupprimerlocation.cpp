#include <QBoxLayout>
#include "garage.h"
#include "vuesupprimerlocation.h"

VueSupprimerLocation::VueSupprimerLocation(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
{
    QVBoxLayout *layoutFen = new QVBoxLayout();
    QVBoxLayout *layoutSupprLoc = new QVBoxLayout();
    layoutFen->addLayout(layoutSupprLoc);

    lineSupprLoc = new QLineEdit();
    btnSupprLoc = new QPushButton("Supprimer location");

    layoutSupprLoc->addWidget(lineSupprLoc);
    layoutSupprLoc->addWidget(btnSupprLoc);

    this->setLayout(layoutFen);

    QObject::connect(btnSupprLoc, SIGNAL(clicked()), this, SLOT(supprimer()));

    garage->ajouterVue(*this);
}

void VueSupprimerLocation::supprimer(){
    garage->supprimerLocation(lineSupprLoc->text().toInt());
    garage->setCasUtilisation(Garage::ACCUEIL);
}

void VueSupprimerLocation::maj(){

}

