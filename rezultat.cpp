//
// Created by dark6 on 31.10.2022.
//

#include "rezultat.h"
#include <iostream>
#include <fstream>
void  rezultat::srednee_vremaj(std::string s,int N) {
    std::fstream lin("lin.txt");
    std::fstream kvad("kvad.txt");
    std::fstream log("log.txt");
    double obschee_vremaj1;
    double obschee_vremaj2;
    double obschee_vremaj3;
    for (int i = 0; i < N; ++i) {
        double j1,j2,j3;
        lin >>j1;
        obschee_vremaj1+=j1;
        kvad >>j2;
        obschee_vremaj2+=j2;
        log >>j3;
        obschee_vremaj3+=j3;
    }
}