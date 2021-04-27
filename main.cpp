#include <iostream>
#include "class/Lecture.h"

int main() {
    Camion *unCamion = Lecture::getCamion();
    Carton *lesCartons = Lecture::getCarton();
    std::cout << lesCartons[1].getHauteur() << std::endl;
    return 0;
}
