//
// Created by baudu on 27/04/2021.
//

#ifndef PROJET_CARTON_H
#define PROJET_CARTON_H

class Carton {

public:
    Carton(int largeur, int longueur, int hauteur);

    int getLargeur() { return _largeur; }
    int getLongueur() { return _longueur; }
    int getHauteur() { return _hauteur; }
    int getVolume() { return _volume; }

private:
    int _largeur;
    int _longueur;
    int _hauteur;
    int _volume;
};

#endif //PROJET_CARTON_H
