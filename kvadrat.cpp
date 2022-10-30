//
// Created by dark6 on 30.10.2022.
//
#include "kvadrat.h"
void  kvadrat::sort(std::vector<int> mass) {
    int zamena;
    int size;
    size = mass.size();
    for (int i = 0; i < size; ++i) {
        for (int j = 0;j<size-1; ++j) {
            if (mass[i]<mass[j]){
                zamena=mass[i];
                mass[i]=mass[j];
                mass[j]=zamena;
            }
        }
    }
}