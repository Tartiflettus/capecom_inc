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

    std::list<QPushButton *> modeles;
    QHBoxLayout *layoutModeles;

    int typeActu = VOITURE;

    void getVehicules();

    template<typename T>
    void remplirModeles(T iteratorBegin, T iteratorEnd);
public:
    VueAjouterLocation(Garage &g, QWidget *parent = 0);

    virtual void maj();


public slots:
    void quitter();
};





template<typename T>
void VueAjouterLocation::remplirModeles(T iteratorBegin, T iteratorEnd){
    for(T it=iteratorBegin; it != iteratorEnd; it++){
        modeles.push_back(new QPushButton(it->modele(), this));
        layoutModeles->addWidget(modeles.back());
    }
}




#endif // VUEAJOUTERLOCATION_H
