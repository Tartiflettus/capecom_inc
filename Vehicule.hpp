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
/// @brief constructeur pour vélo prenant le nombre de places
Vehicule(int places);

public:
    using iterator=std::list<Location*>::iterator;

    Vehicule(){}
    //fonctions de retour des champs Vehicule
    int identifiant() const{return id;}
    int places() const{return nbPlaces;}
    QString plaque() const{return plaqueImmatriculation;}
    QString modele() const{return modeleVehicule;}

    bool operator == (const Vehicule& v){
        return v.id == id;
    }

    iterator begin();
    iterator end();

    void putLocation(Location* loc){
        locations.push_back(loc);
    }

private:

    static int _idActu;
    static int nextId();

};

#endif
