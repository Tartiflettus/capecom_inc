#ifndef VUESUPPRIMERLOCATION
#define VUESUPPRIMERLOCATION

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include "vue.h"

class VueSupprimerLocation : public QWidget, public Vue
{
    Q_OBJECT
private:
    QPushButton *btnSupprLoc;
    QLineEdit *lineSupprLoc;

public:
    VueSupprimerLocation(Garage& g, QWidget *parent = 0);

    virtual void maj();

public slots:
    void supprimer();

};

#endif // VUESUPPRIMERLOCATION

