#ifndef VUEVOIRLOCATION_H
#define VUEVOIRLOCATION_H

#include <QWidget>
#include <QPushButton>
#include "vue.h"
#include <QVBoxLayout>
#include <QFormLayout>

class VueVoirLocation : public QWidget, public Vue
{
    Q_OBJECT
private:

    QPushButton* btnQuitter, *voir;
    QVBoxLayout *layoutGlob;
    QFormLayout* layoutsForm;


public:
    VueVoirLocation(Garage& g, QWidget* parent=nullptr);
    virtual void maj();

public slots:
    void voirLocation();
    void quitter();
};

#endif // VUEVOIRLOCATION_H
