#ifndef VUEAJOUTERVEHICULE_H
#define VUEAJOUTERVEHICULE_H


<<<<<<< HEAD
class vueAjouterVehicule : public Vue
{
public:
    vueajoutervehicule();
=======
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

public slots:
    void ajouter();
>>>>>>> 45f754159d76922a9f0e60b0847986f5db25d367
};

#endif // VUEAJOUTERVEHICULE_H
