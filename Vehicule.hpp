#ifndef VEHICULE
#define VEHICULE

#include <QString>
#include <list>

//==Classe Abstraite : Vehicule==


class Location;


class Vehicule {
    
protected:

	/// @brief identifiant unique d'un véhicule
    int id;
	int nbPlaces;
    QString plaqueImmatriculation;
    QString modeleVehicule;
    std::list<Location*> locations;

/// @brief constructeur prennant un id, nb_places, plaque et modele
Vehicule(int places, const QString& imm,
        const QString& mod);
/// @brief constructeur pour vélo prenant le nombre de places et le modele
Vehicule(int places, const QString& mod);

public:
    using iterator=std::list<Location*>::iterator;

    Vehicule(){}
    //fonctions de retour des champs Vehicule
    int identifiant() {return id;}
    int places() {return nbPlaces;}
    QString plaque() {return plaqueImmatriculation;}
    QString modele() {return modeleVehicule;}

    bool operator == (const Vehicule& v){
        return v.id == id;
    }

    iterator begin();
    iterator end();

private:

    static int _idActu;
    static int nextId();
};

#endif
