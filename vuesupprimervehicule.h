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
<<<<<<< HEAD
    VueSupprimerVehicule(Garage& g, QWidget *parent);
=======
    VueSupprimerVehicule(Garage& g, QWidget *parent = 0 );
>>>>>>> 093095ccdd6ac17b2f7b024ac093037d072b1a98

    virtual void maj();

public slots:
    void supprimer();
};

#endif // SUPPRIMERVEHICULE

