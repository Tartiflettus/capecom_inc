#include "doublevitrage.h"

#include "vueaccueil.h"

DoubleVitrage::DoubleVitrage(QWidget *parent): QWidget(parent)
{
    this->setGeometry(50, 50, 500, 500);

    vueActu = new VueAccueil(garage, this);
}

DoubleVitrage::~DoubleVitrage()
{

}
