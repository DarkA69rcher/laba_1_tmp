#include <iostream>
#include "logor.h"
#include "kvadrat.h"
#include "lineinaja.h"
#include <fstream>
#include <ctime>

int main() {
    lineinaja l1;
    lineinaja l_k;
    lineinaja l_l;
    std::ofstream lin("lin.txt");
    std::ofstream kvad("kvad.txt");
    std::ofstream log("log.txt");
    int N=10;
    int n=100000;
    for (int j = 0; j < n; ++j) {
        l_k.zapolnen();
    }
    kvadrat k1(l_k.mass);
    for (int j = 0; j < n; ++j) {
        l_l.zapolnen();
    }
    logor l2(l_l.mass);
    for (int i = 0; i < N; ++i) {
        std::clock_t start;
        double duration;

        start = std::clock();
        for (int j = 0; j < n; ++j) {
            l1.zapolnen();
        }
        duration = ( std::clock() - start );
        lin << duration << std::endl;


        std::clock_t start1;
        double duration1;

        start = std::clock();
        k1.cort();
        duration = ( std::clock() - start );
        kvad << duration1 << std::endl;

        std::clock_t start2;
        double duration2;

        start = std::clock();
        l2.MergeSort(0,n);
        duration = ( std::clock() - start );
        log << duration2 << std::endl;
    }
    return 0;
}
