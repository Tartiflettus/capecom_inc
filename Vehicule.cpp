#include <string>
#include "Vehicule.hpp"

Vehicule::Vehicule(int identifiant, int places, int plaque,
		std::string mod) : id(identifiant),
							nbPlaces(places),
							plaqueImmatriculation(plaque),
							modeleVehicule(mod) {}


