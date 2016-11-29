#ifndef VUEAJOUTERVEHICULE_H
#define VUEAJOUTERVEHICULE_H

#include <QWidget>
#include <QPushButton>
#include <QRadioButton>
#include <QLineEdit>
#include "vue.h"

class VueAjouterVehicule : public QWidget, public Vue
{
    Q_OBJECT
private:
    QRadioButton* btnVoiture;
    QRadioButton* btnVelo;
    QLineEdit* lineImmatriculation;
    QLineEdit* lineModele;
    QLineEdit* lineNbPlaces;
    QPushButton* btnConfirmer;


public:
    VueAjouterVehicule(Garage& g, QWidget* parent=nullptr);

    virtual void maj();

public slots:
    void ajouter();
};

#endif // VUEAJOUTERVEHICULE_H
