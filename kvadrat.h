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
    int col_zapol=0;
    int zamena;
public:
    kvadrat(int size){
        mass.resize(size+1);
        col_zapol = size;
    }
    void zapol(){
        srand(time(NULL));
        for (int i = 0; i < col_zapol; ++i) {
            mass[i]= rand();
        }
    }
    void cort(){
        for (int i = 0; i < col_zapol; ++i) {
            for (int j = 0;j<col_zapol-1; ++j) {
                if (mass[i]<mass[j]){
                    zamena=mass[i];
                    mass[i]=mass[j];
                    mass[j]=zamena;
                }
            }
        }
    };
    void vivod(){
        for (int i = 0; i < col_zapol; ++i) {
            std::cout << mass[i] << std::endl;
        }
    }
};


#endif //LABA_1_TMP_KVADRAT_H
