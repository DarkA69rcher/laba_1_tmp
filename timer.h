//
// Created by dark6 on 30.10.2022.
//

#ifndef LABA_1_TMP_TIMER_H
#define LABA_1_TMP_TIMER_H
#include "timer.h"
#include <ctime>
#include <iostream>
class timer {
 private:
    std::clock_t start1;
 public:
   void start();
   double stop();
};


#endif //LABA_1_TMP_TIMER_H
