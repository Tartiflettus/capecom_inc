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
    layoutSuppr->addWidget(txtarea);

    this->setLayout(layoutFen);

    QObject::connect(btnSupprimerVehicule, SIGNAL(clicked()), this, SLOT(supprimerVehicule()));
    garage->ajouterVue(*this);
}


<<<<<<< HEAD
=======
void VueSupprimerVehicule::supprimerVehicule(){
    std::cout<< "suppression d'un véhicule\n";
}
>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98


void VueSupprimerVehicule::supprimer(){
    //to do
}
