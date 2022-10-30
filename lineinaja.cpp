//
// Created by dark6 on 30.10.2022.
//
#include "lineinaja.h"
std::vector<int> lineinaja::creite_mass(int n){
    for (int j = 0; j < size; ++j) {
        mass.resize(size+1);
        srand(time(NULL));
        mass[size] = rand();
        size++;
    }
    return mass;
}