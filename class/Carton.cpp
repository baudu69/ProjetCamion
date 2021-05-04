//
// Created by baudu on 27/04/2021.
//

#include "Carton.h"

Carton::Carton(int largeur, int longueur, int hauteur)
        : _largeur(largeur), _longueur(longueur), _hauteur(hauteur) {
    this->_volume = ((double)longueur/100)*((double)largeur/100)*((double)hauteur/100);
};