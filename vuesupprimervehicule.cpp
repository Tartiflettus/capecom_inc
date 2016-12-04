#include "vuesupprimervehicule.h"
#include "garage.h"
#include <QBoxLayout>
#include <QDebug>

VueSupprimerVehicule::VueSupprimerVehicule(Garage& g, QWidget *parent): QWidget(parent), Vue(g)
{

    QVBoxLayout *layoutFen = new QVBoxLayout(); //layout global
    QVBoxLayout *layoutSuppr = new QVBoxLayout();
    layoutFen->addLayout(layoutSuppr);

    btnSupprimerVehicule = new QPushButton("Supprimer véhicule");
    txtarea = new QLineEdit();

    layoutSuppr->addWidget(txtarea);
    layoutSuppr->addWidget(btnSupprimerVehicule);

    this->setLayout(layoutFen);

    QObject::connect(btnSupprimerVehicule, SIGNAL(clicked()), this, SLOT(supprimer()));
    garage->ajouterVue(*this);
}


void VueSupprimerVehicule::supprimer(){
    qDebug()<< "suppression d'un vehicule\n";
    garage->supprimerVehicule(txtarea->text().toInt());
}

void VueSupprimerVehicule::maj(){

}

