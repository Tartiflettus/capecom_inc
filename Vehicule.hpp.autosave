#ifndef VEHICULE
#define VEHICULE
#include <string>
#include <QString>

//==Classe Abstraite : Vehicule==

class Vehicule {
    
protected:

	/// @brief identifiant unique d'un véhicule
    int id;
	int nbPlaces;
    QString plaqueImmatriculation;
    QString modeleVehicule;

/// @brief constructeur prennant un id, nb_places, plaque et modele
Vehicule(int places, const QString& imm,
        const QString& mod);
/// @brief constructeur pour vélo prenant le nombre de places
Vehicule(int places);

public:

    //fonctions de retour des champs Vehicule
    int identifiant() {return id;}
    int places() {return nbPlaces;}
    QString plaque() {return plaqueImmatriculation;}
    QString modele() {return modeleVehicule;}

    bool operator == (const Vehicule& v){
        return v.id == id;
    }

private:
    Vehicule();

    static int _idActu;
    static int nextId();
};

#endif
