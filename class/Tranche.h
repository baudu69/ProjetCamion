//
// Created by baudu on 04/05/2021.
//

#ifndef PROJET_TRANCHE_H
#define PROJET_TRANCHE_H

#include <vector>
#include "Carton.h"

using namespace std;


class Tranche {
    Tranche(int largeur, int longueur, int hauteur);

    int getLargeur() { return _largeur; }
    int getLongueur() { return _longueur; }
    int getHauteur() { return _hauteur; }
    vector<Carton> getLesCartons() { return _lesCartons;}

private:
    int _largeur;
    int _longueur;
    int _hauteur;
    vector<Carton> _lesCartons;
};

#endif //PROJET_TRANCHE_H
