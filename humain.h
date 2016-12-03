#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>
#include <QString>

class Humain {
protected:

    QString nom;
    QString prenom;
    QString adresse;

    Humain (const QString& nom, const QString& prenom, const QString& adresse);

public:
    QString nom() {return nom;}
    QString prenom() {return prenom;}
    QString adresse() {return adresse;}

private:
    Humain();
};

#endif // HUMAIN_H
