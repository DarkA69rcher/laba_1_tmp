#include <iostream>
#include "logor.h"
#include "kvadrat.h"
#include "lineinaja.h"
#include <fstream>
#include <ctime>

int main() {
    lineinaja l1;
    std::ofstream lin("lin.txt");
    int N=10;
    int n=1000000;
    /*kvadrat k1(10);
    k1.zapol();
    k1.cort();
    //k1.vivod();
    logor l2(10);
    l2.MergeSort(0,10);*/
    //for (int i = 0; i < 10; ++i) {
    // cout << l2.A[i] << endl;
    //}
    for (int i = 0; i < N; ++i) {
        std::clock_t start;
        double duration;

        start = std::clock();
        for (int j = 0; j < n; ++j) {
            l1.zapolnen();
        }
        duration = ( std::clock() - start );
        lin << duration << std::endl;
    }
    return 0;
}
