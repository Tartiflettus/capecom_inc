#include "leslocations.h"



std::vector<Location> LesLocations::locationClient(int id){

    std::vector<Location> lesLocationsClient;
    for(auto& elem : lesLocations){
        if(elem.identifiant() == id){
            lesLocationsClient.push_back(elem);
        }
    }
    return lesLocationsClient;
}
