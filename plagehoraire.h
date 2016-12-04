#ifndef PLAGEHORAIRE_H
#define PLAGEHORAIRE_H
#include <cstdio>
#include <ctime>

class PlageHoraire {
protected:

    struct tm plage;

public:
    PlageHoraire(const int annee, const int mois, const int jour, const int heure, const int min){
        plage.tm_year = annee;
        plage.tm_mon = mois;
        plage.tm_mday = jour;
        plage.tm_hour = heure;
        plage.tm_min = min;
    }
    int annee() {return plage.tm_year;}
    int mois() {return plage.tm_mon;}
    int jour() {return plage.tm_mday;}
    int heure() {return plage.tm_hour;}
    int min() {return plage.tm_min;}
    void setDate(int annee, int mois, int jour, int heure, int min){
        plage.tm_year = annee;
        plage.tm_mon = mois;
        plage.tm_mday = jour;
        plage.tm_hour = heure;
        plage.tm_min = min;
    }

    PlageHoraire()
    {}
};

#endif // PLAGEHORAIRE_H
