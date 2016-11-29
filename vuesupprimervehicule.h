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
    VueSupprimerVehicule(Garage& g, QWidget *parent);

    virtual void maj();

public slots:
    void supprimer();
};

#endif // SUPPRIMERVEHICULE

