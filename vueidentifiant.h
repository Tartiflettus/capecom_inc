#ifndef VUEIDENTIFIANT_H
#define VUEIDENTIFIANT_H

#include "vue.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>


class VueIdentifiant : public QWidget, public Vue
{
Q_OBJECT
private:
    QLabel *numero;
    QPushButton *btnConfirmer;

public:
    VueIdentifiant(Garage& g, QWidget *parent = 0);

    void setIdentifiant(int id);

    virtual void maj() = 0;

public slots:
    void confirmer();
};

#endif // VUEIDENTIFIANT_H
