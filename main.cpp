#include <iostream>
#include <algorithm>
#include "class/Lecture.h"

int main() {
    Camion *unCamion = Lecture::getCamion();
    std::vector<Carton> lesCartons = Lecture::getCarton();

    //Tri des cartons par leur volume
    struct comparVolume
    {
        inline bool operator() (Carton struct1, Carton struct2)
        {
            return (struct1.getVolume() > struct2.getVolume());
        }
    };
    std::sort(lesCartons.begin(), lesCartons.end(), comparVolume());

    //Affichage des volumes des cartons
    for (auto & lesCarton : lesCartons)
        std::cout << lesCarton.getVolume() << ' ';


    return 0;
}
