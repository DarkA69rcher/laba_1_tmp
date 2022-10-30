//
// Created by dark6 on 30.10.2022.
//

#include "timer.h"
#include <ctime>
#include <iostream>
void timer::start(){
    start1 = std::clock();
};
int timer::stop(){
    double duration;
    duration = ( std::clock() - start1 );
    return duration;
};