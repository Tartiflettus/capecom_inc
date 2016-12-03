#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <QString>
#include "humain.h"

class Client : class Humain{
public:
    Client(const QString& nom, const QString& prenom,const QString& adresse):
        Humain(nom, prenom, adresse)
    {
    }
};

#endif // CLIENT_H
