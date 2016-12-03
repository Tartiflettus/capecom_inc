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
    QString getNom() {return nom;}
    QString getPrenom() {return prenom;}
    QString getAdresse() {return adresse;}

    Humain(){}
};

#endif // HUMAIN_H
