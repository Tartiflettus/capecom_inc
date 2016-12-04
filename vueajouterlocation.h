#ifndef VUEAJOUTERLOCATION_H
#define VUEAJOUTERLOCATION_H

#include "location.h"
#include "plagehoraire.h"
#include "vue.h"

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QRadioButton>


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

    int typeActu = VOITURE;

    void getVehicules(int type);

public:
    VueAjouterLocation(Garage &g, QWidget *parent = 0);

    virtual void maj();

signals:

public slots:
};

#endif // VUEAJOUTERLOCATION_H
