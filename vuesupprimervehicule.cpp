#include "vuesupprimervehicule.h"
#include "garage.h"
#include <QBoxLayout>

VueSupprimerVehicule::VueSupprimerVehicule(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
{

    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QVBoxLayout *layoutSuppr = new QVBoxLayout();
    layoutFen->addLayout(layoutSuppr);

    btnSupprimerVehicule = new QPushButton("Supprimer véhicule");
    txtarea = new QLineEdit();

    layoutSuppr->addWidget(btnSupprimerVehicule);

    this->setLayout(layoutFen);

    QObject::connect(btnSupprimerVehicule, SIGNAL(clicked()), this, SLOT(supprimerVehicule()));
    garage->ajouterVue(*this);
}


void VueSupprimerVehicule::supprimerVehicule(){
    garage->setCasUtilisation(Garage::SUPPRIMER_VEHICULE);
}


void VueSupprimerVehicule::maj(){
    std::cout<< "maj de vue supprvehicule\n";
}
