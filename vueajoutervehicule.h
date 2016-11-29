#ifndef VUEAJOUTERVEHICULE_H
#define VUEAJOUTERVEHICULE_H


#include <QWidget>
#include <QPushButton>
#include <QRadioButton>
#include <QLineEdit>
#include "vue.h"



class VueAjouterVehicule : public QWidget, public Vue
{
private:
    QRadioButton* btnVoiture;
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
