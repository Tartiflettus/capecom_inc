#ifndef VUEACCUEIL_H
#define VUEACCUEIL_H

#include "vue.h"
#include <QWidget>
#include <QPushButton>
#include <QRadioButton>

class VueAccueil : public QWidget, public Vue
{
    Q_OBJECT
private:
    QRadioButton *btnAdmin;
    QPushButton *btnAjouterVehicule, *btnSupprimerVehicule;

public:
<<<<<<< HEAD
    VueAccueil(Garage& g, QWidget *parent);
=======
    VueAccueil(Garage& g, QWidget * parent = nullptr);
>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98

    virtual void maj();

public slots:
    void ajouterVehicule();
    void supprimerVehicule();
};

#endif // VUEACCUEIL_H
