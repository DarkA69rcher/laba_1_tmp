//
// Created by dark6 on 30.10.2022.
//

#ifndef LABA_1_TMP_KVADRAT_H
#define LABA_1_TMP_KVADRAT_H
#include <iostream>
#include <time.h>
#include <vector>
#include <random>

class kvadrat {
private:
    std::vector<int> mass;

public:
    kvadrat(std::vector<int> massiv){
        mass=massiv;

    }
    void cort(){
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
    };
};


#endif //LABA_1_TMP_KVADRAT_H
