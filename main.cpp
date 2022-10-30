#include <iostream>
#include "logor.h"
#include "kvadrat.h"
#include "lineinaja.h"
#include <fstream>
#include <ctime>
#include "timer.h"
int main() {
    int N=10;
    int n=100;
    lineinaja l1;
    kvadrat k1;
    timer timer;
    std::ofstream lin("lin.txt");
    std::ofstream kvad("kvad.txt");
    std::ofstream log("log.txt");
    for (int i = 0; i < N; ++i) {
        timer.start();
        l1.creite_mass(n);
        lin << timer.stop() << std::endl;

        std::vector<int> mass1 = l1.creite_mass(n);
        timer.start();
        k1.sort(mass1);
        kvad << timer.stop() << std::endl;

        std::clock_t start3;
        double duration3;

        start3 = std::clock();
        l2.MergeSort(0,n);
        duration3 = ( std::clock() - start3 );
        log << duration3 << std::endl;
    }
    return 0;
}
