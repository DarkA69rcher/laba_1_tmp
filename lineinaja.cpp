//
// Created by dark6 on 30.10.2022.
//
#include "lineinaja.h"
std::vector<int> lineinaja::creite_mass(int n){
    std::vector<int> mass(n);
    for (int j = 0; j < n; ++j) {
        srand(time(NULL));
        mass[n] = rand();
    }
    return mass;
}