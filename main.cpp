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
    int n=1000;
    kvadrat k1(l1.creite_mass(n));
    logor l2(l1.creite_mass(n));
    for (int i = 0; i < N; ++i) {
        std::clock_t start1;
        double duration1;

        start1 = std::clock();
        l1.creite_mass(n);
        duration1 = ( std::clock() - start1 );
        lin << duration1 << std::endl;


        std::clock_t start2;
        double duration2;

        start2 = std::clock();
        k1.cort();
        duration2 = ( std::clock() - start2 );
        kvad << duration2 << std::endl;

        std::clock_t start3;
        double duration3;

        start3 = std::clock();
        l2.MergeSort(0,n);
        duration3 = ( std::clock() - start3 );
        log << duration3 << std::endl;
    }
    return 0;
}
