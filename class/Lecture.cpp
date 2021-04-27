//
// Created by baudu on 27/04/2021.
//
#include <iostream>
#include <fstream>
#include <string>
#include "Lecture.h"
#include "Camion.h"

using namespace std;

Camion* Lecture::getCamion() {
    ifstream fichier("../entree.txt");

    if (fichier) {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues
        getline(fichier, ligne); //Tant qu'on n'est pas à la fin, on lit
        std::string delimiter = " ";
        std::string largeur = ligne.substr(0, ligne.find(delimiter));
        string::size_type sizeLargeur = largeur.size();
        int convertdata = static_cast<int>(sizeLargeur);
        std::string longueur = ligne.substr(convertdata, ligne.find(delimiter));
        string::size_type sizeLongueur = longueur.size();
        int convertdata2 = static_cast<int>(sizeLongueur);
        std::string hauteur = ligne.substr(convertdata + convertdata2, ligne.find(delimiter));

        int int_longueur = std::stoi(longueur);
        int int_largeur = std::stoi(largeur);
        int int_hauteur = std::stoi(hauteur);

        return new Camion(int_largeur, int_longueur, int_hauteur);
    }
}

Carton* Lecture::getCarton() {
    ifstream fichier("../entree.txt");

    if (fichier) {
        //L'ouverture s'est bien passée, on peut donc lire

        int nbLignes = 0;
        string laMerde;
        ifstream fichier2("../entree.txt");
        while(getline(fichier2, laMerde)) {
            nbLignes++;
        }

        Carton* listCartons[--nbLignes];

        string ligne; //Une variable pour stocker les lignes lues
        getline(fichier, ligne); //Tant qu'on n'est pas à la fin, on lit

        int i = 0;
        while(getline(fichier, ligne)) {
            std::string delimiter = " ";
            std::string largeur = ligne.substr(0, ligne.find(delimiter));
            string::size_type sizeLargeur = largeur.size();
            int convertdata = static_cast<int>(sizeLargeur) +1;
            std::string longueur = ligne.substr(convertdata, ligne.find(delimiter));
            string::size_type sizeLongueur = longueur.size();
            int convertdata2 = static_cast<int>(sizeLongueur) +1;
            std::string hauteur = ligne.substr(convertdata + convertdata2, ligne.find(delimiter));

            int int_longueur = std::stoi(longueur);
            int int_largeur = std::stoi(largeur);
            int int_hauteur = std::stoi(hauteur);

            listCartons[i] = new Carton(int_largeur, int_longueur, int_hauteur);
            i++;
        }

        return *listCartons;

    }
}