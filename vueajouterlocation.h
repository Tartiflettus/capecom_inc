#ifndef VUEAJOUTERLOCATION_H
#define VUEAJOUTERLOCATION_H

#include "location.h"
#include "plagehoraire.h"
#include "vue.h"

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFormLayout>


class VueAjouterLocation : public QWidget, public Vue
{
    Q_OBJECT
public:
    VueAjouterLocation(Garage &g, QWidget *parent = 0);

    virtual void maj();

signals:

public slots:
};

#endif // VUEAJOUTERLOCATION_H
