//
// Created by dark6 on 30.10.2022.
//
#include "lineinaja.h"
void lineinaja::zapolnen() {
    int size;
    for (int j = 0; j < size; ++j) {
        mass.resize(size+1);
        srand(time(NULL));
        mass[size] = rand();
        size++;
    }

};