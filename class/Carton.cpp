//
// Created by baudu on 27/04/2021.
//

#include "Carton.h"

Carton::Carton(int largeur, int longueur, int hauteur)
        : _largeur(largeur), _longueur(longueur), _hauteur(hauteur) {
    this->_volume = longueur*largeur*hauteur;
};