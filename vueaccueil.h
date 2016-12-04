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
    QPushButton *btnAjouterVehicule, *btnSupprimerVehicule, *btnSupprimerLocation;

public:
    VueAccueil(Garage& g, QWidget * parent = nullptr);

    virtual void maj();

public slots:
    void ajouterVehicule();
    void supprimerVehicule();
    void supprimerLocation();
};

#endif // VUEACCUEIL_H
