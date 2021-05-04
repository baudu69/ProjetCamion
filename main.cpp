#include <iostream>
#include "class/Lecture.h"

int main() {
    Camion *unCamion = Lecture::getCamion();
    std::vector<Carton> lesCartons = Lecture::getCarton();
    return 0;
}
