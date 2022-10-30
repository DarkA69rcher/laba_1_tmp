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
int size;
public:
    std::vector<int> mass;
    lineinaja(int n){
    size = n;
}
    void zapolnen();
};


#endif //LABA_1_TMP_LINEINAJA_H
