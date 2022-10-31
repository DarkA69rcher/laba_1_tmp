//
// Created by dark6 on 30.10.2022.
//

#include "timer.h"
#include <ctime>
#include <iostream>
void timer::start(){
    start1 = std::clock();
};
double timer::stop(){
    double duration;
    duration = ( std::clock() - start1 )/ (double) CLOCKS_PER_SEC;
    return duration;
};