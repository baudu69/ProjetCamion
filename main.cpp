#include <iostream>
#include <algorithm>
#include "class/Lecture.h"
#include "class/strucComp.cpp"

int main() {
    Camion *unCamion = Lecture::getCamion();
    std::vector<Carton> lesCartons = Lecture::getCarton();

    //Tri des cartons par leur volume
    std::sort(lesCartons.begin(), lesCartons.end(), triVolumeDesc());

    //Affichage des volumes des cartons
    for (auto & lesCarton : lesCartons)
        std::cout << lesCarton.getVolume() << ' ';


    return 0;
}
