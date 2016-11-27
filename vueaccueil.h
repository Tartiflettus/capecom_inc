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
    QPushButton *btnAjouterVehicule;

public:
    VueAccueil(QWidget *parent, Garage& g);

    virtual void maj();

public slots:
    void ajouterVehicule();
};

#endif // VUEACCUEIL_H
