#include <string>
#include "Vehicule.hpp"

//==Classe Abstraite : Vehicule==

Vehicule::Vehicule(int identifiant, int places, int plaque,
		std::string mod) : id(identifiant),
							nbPlaces(places),
							plaqueImmatriculation(plaque),
							modeleVehicule(mod) {}


