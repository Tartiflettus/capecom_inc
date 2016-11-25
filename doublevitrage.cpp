#include "doublevitrage.h"

#include "vueaccueil.h"

DoubleVitrage::DoubleVitrage(QWidget *parent)
    : QWidget(parent), vueActu(new VueAccueil(this))
{
    this->setGeometry(50, 50, 500, 500);
}

DoubleVitrage::~DoubleVitrage()
{

}
