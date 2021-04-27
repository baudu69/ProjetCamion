//
// Created by baudu on 27/04/2021.
//

#ifndef PROJET_CAMION_H
#define PROJET_CAMION_H

class Camion {
public:

    Camion(int largeur, int longueur, int hauteur);

    int getLargeur() { return _largeur; }
    int getLongueur() { return _longueur; }
    int getHauteur() { return _hauteur; }

private:
    int _largeur;
    int _longueur;
    int _hauteur;
};

#endif //PROJET_CAMION_H
