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
    void cort();
};


#endif //LABA_1_TMP_KVADRAT_H
