#ifndef DOUBLEVITRAGE_H
#define DOUBLEVITRAGE_H

#include <QWidget>

#include "garage.h"
#include "vue.h"
#include "vueaccueil.h"
#include "vueajoutervehicule.h"
#include "vuesupprimervehicule.h"
#include "vuesupprimerlocation.h"
#include "vueajouterlocation.h"


#include <map>



class DoubleVitrage : public QWidget, public Vue
{
    Q_OBJECT
private:
    QWidget *vueActu;

    Garage garage;



public:
    DoubleVitrage(QWidget *parent = 0);
    ~DoubleVitrage();

    virtual void maj();

};

#endif // DOUBLEVITRAGE_H
