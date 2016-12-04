#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>
#include <QString>

class Humain {
protected:

    int id;
    QString nom;
    QString prenom;
    QString adresse;

public:

    Humain (const QString& n, const QString& p, const QString& a):
        id(nextId()), nom(n), prenom(p), adresse(a)
    {
    }

    Humain(): id(nextId())
    {
    }

    int identifiant(){
        return id;
    }

    QString getNom() {return nom;}
    QString getPrenom() {return prenom;}
    QString getAdresse() {return adresse;}


private:
    static int _idActu;
    static int nextId();
};

#endif // HUMAIN_H
