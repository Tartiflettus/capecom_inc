#ifndef VUEAFFICHERLOCATIONCLIENT_H
#define VUEAFFICHERLOCATIONCLIENT_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include "vue.h"
#include <vector>

class VueAfficherLocationClient : public QWidget, public Vue
{
    Q_OBJECT
private:

    QLineEdit* id;
    QPushButton* btnQuitter;


public:
    VueAfficherLocationClient(Garage& g, QWidget* parent=nullptr);
    virtual void maj();

public slots:
    void quitter();
    void afficherLocations();
};

#endif // VUEAFFICHERLOCATIONCLIENT_H
