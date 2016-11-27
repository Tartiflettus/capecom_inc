#ifndef DOUBLEVITRAGE_H
#define DOUBLEVITRAGE_H

#include <QWidget>

#include "vue.h"
#include "garage.h"

class DoubleVitrage : public QWidget, public Vue
{
    Q_OBJECT
private:
    QWidget *vueActu;

    Garage garage;

public:
    DoubleVitrage(QWidget *parent = 0);
    ~DoubleVitrage();

    virtual void maj(){
        //TODO
    }
};

#endif // DOUBLEVITRAGE_H
