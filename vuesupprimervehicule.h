#ifndef SUPPRIMERVEHICULE
#define SUPPRIMERVEHICULE

#include "vue.h"

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class VueSupprimerVehicule : public QWidget, public Vue
{
    Q_OBJECT
private:
    QPushButton *btnSupprimerVehicule;
    QLineEdit *txtarea;

public:
    VueSupprimerVehicule(QWidget *parent, Garage& g);

    virtual void maj();

public slots:
    void supprimerVehicule();
};

#endif // SUPPRIMERVEHICULE

