//
// Created by dark6 on 31.10.2022.
//

#include "rezultat.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
void  rezultat::srednee_vremaj(std::string s,int N) {
    std::fstream lin(s);
    std::vector<int> mass(N);
    double obschee_vremaj1;
    for (int i = 0; i < N; ++i) {
        double j1;
        lin >>j1;
        mass[i]=j1;
        obschee_vremaj1+=j1;
    }
    obschee_vremaj1=obschee_vremaj1/N;
    lin.close();
    std::ofstream lin1(s);
    double d;
    for (int i = 0; i < N; ++i) {
      d=(mass[i]-obschee_vremaj1)*(mass[i]-obschee_vremaj1);
    }
    lin1 << obschee_vremaj1 << " " << sqrt(d/(N-1)) << std::endl;

}