//
// Created by dark6 on 30.10.2022.
//

#ifndef LABA_1_TMP_LOGOR_H
#define LABA_1_TMP_LOGOR_H


#include <iostream>
#include <random>
#include <time.h>

class logor {
private:
    std::vector<int> mass;
    void Merge(int first, int last);
public:
    logor(std::vector<int> massiv){
        mass=massiv;
    }
    void Sort(int first, int last);
};



#endif //LABA_1_TMP_LOGOR_H
