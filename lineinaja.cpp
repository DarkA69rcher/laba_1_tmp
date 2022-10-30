//
// Created by dark6 on 30.10.2022.
//
#include "lineinaja.h"
std::vector<int> lineinaja::creite_mass(int n){
    for (int j = 0; j < n; ++j) {
        std::vector<int> mass(n);
        srand(time(NULL));
        mass[n] = rand();
    }
    return mass;
}