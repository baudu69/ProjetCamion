//
// Created by baudu on 27/04/2021.
//

#ifndef PROJET_LECTURE_H
#define PROJET_LECTURE_H


#include "Camion.h"
#include "Carton.h"
#include <vector>

class Lecture {

public:
    static Camion* getCamion();
    static std::vector<Carton> getCarton();
private:


};


#endif //PROJET_LECTURE_H
