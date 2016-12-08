#ifndef VUEAJOUTERLOCATION_H
#define VUEAJOUTERLOCATION_H

#include "location.h"
#include "plagehoraire.h"
#include "vue.h"

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QRadioButton>
#include <list>
#include <QLayout>
#include <vector>
#include <QSignalMapper>


class VueAjouterLocation : public QWidget, public Vue
{
    Q_OBJECT
private:
    enum {VOITURE, BUS, VELO, nb_types};
    enum {DEBUT, FIN};

    QLineEdit *annee[2];
    QLineEdit *mois[2];
    QLineEdit *jour[2];


    QLabel *labels[nb_types];
    QRadioButton *buttons[nb_types];

    std::vector<Vehicule*> vehicules;
    std::vector<QPushButton *> modeles;
    QHBoxLayout *layoutModeles;

    int typeActu = VOITURE;

    void getVehicules();
    QSignalMapper *mapper;
    int indexSelection = 0;

    template<typename T>
    void remplirModeles(T iteratorBegin, T iteratorEnd);
public:
    VueAjouterLocation(Garage &g, QWidget *parent = 0);

    virtual void maj();


public slots:
    void quitter();
    void confirmer();
    void typeToVoiture();
    void typeToBus();
    void typeToVelo();
    void selectionnerVehicule(int index);
};





template<typename T>
void VueAjouterLocation::remplirModeles(T iteratorBegin, T iteratorEnd){
    int i=0;
    for(T it=iteratorBegin; it != iteratorEnd; it++){
        vehicules.push_back(&(*it));
        modeles.push_back(new QPushButton(it->modele(), this));
        layoutModeles->addWidget(modeles.back());
        QObject::connect(modeles.back(), SIGNAL(clicked()), mapper, SLOT(map()));
        mapper->setMapping(modeles.back(), i);
        i++;
    }

    QObject::connect(mapper, SIGNAL(mapped(int)), this, SLOT(selectionnerVehicule(int)));
}




class VueNumLocation : public QWidget, public Vue
{
Q_OBJECT
private:
    QLabel *numLocation;
    QPushButton *btnConfirmer;

public:
    VueNumLocation(Garage &g, QWidget *parent = 0);

    virtual void maj();

public slots:
    void confirmer();
};



#endif // VUEAJOUTERLOCATION_H
