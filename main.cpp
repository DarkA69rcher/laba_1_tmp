#include <iostream>
#include "logor.h"
#include "kvadrat.h"
#include "lineinaja.h"
#include <fstream>
#include <ctime>

int main() {
    lineinaja l1;
    std::ofstream lin("lin.txt");
    std::ofstream kvad("kvad.txt");
    std::ofstream log("log.txt");
    int N=10;
    int n=10000;
    kvadrat k1(n);
    logor l2(n);
    for (int i = 0; i < N; ++i) {
        std::clock_t start;
        double duration;

        start = std::clock();
        for (int j = 0; j < n*100; ++j) {
            l1.zapolnen();
        }
        duration = ( std::clock() - start );
        lin << duration << std::endl;
    }
    for (int i = 0; i < N; ++i) {
        std::clock_t start;
        double duration;

        start = std::clock();
        k1.zapol();
        k1.cort();
        duration = ( std::clock() - start );
        kvad << duration << std::endl;
    }
    for (int i = 0; i < N; ++i) {
        std::clock_t start;
        double duration;

        start = std::clock();
        l2.MergeSort(0,n);
        duration = ( std::clock() - start );
        log << duration << std::endl;
    }
    return 0;
}
