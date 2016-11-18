#ifndef VEHICULE
#define VEHICULE
#include <string>

//==Classe Abstraite : Vehicule==

class Vehicule {

protected:

	/// @brief identifiant unique d'un véhicule
	int id;
	int nbPlaces;
	int plaqueImmatriculation;
	std::string modeleVehicule;

/// @brief constructeur prennant un id, nb_places, plaque et modele
Vehicule(int identifiant, int places, int plaque,
		std::string mod);

public:
//fonctions de retour des champs Vehicule
int identifiant() {return id;}
int places() {return nbPlaces;}
int plaque() {return plaqueImmatriculation;}
std::string modele() {return modeleVehicule;}
};

#endif