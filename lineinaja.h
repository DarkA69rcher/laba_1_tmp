//
// Created by dark6 on 30.10.2022.
//

#ifndef LABA_1_TMP_LINEINAJA_H
#define LABA_1_TMP_LINEINAJA_H
#include <iostream>
#include <time.h>
#include <vector>
class lineinaja{
private:
    std::vector<int> mass;
    int col_zapol=0;
public:
    void zapolnen(){
        mass.resize(col_zapol+100);
        srand(time(NULL));
        mass[col_zapol] = rand();
        col_zapol++;
    };
};


#endif //LABA_1_TMP_LINEINAJA_H
