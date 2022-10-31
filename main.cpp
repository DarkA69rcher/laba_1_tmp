#include <iostream>
#include "logor.h"
#include "kvadrat.h"
#include "lineinaja.h"
#include <fstream>
#include <ctime>
#include "timer.h"
#include "rezultat.h"
int main() {
    int N=10;
    int n=10000;
    lineinaja l1;
    kvadrat k1;
    timer timer;
    std::ofstream lin("lin.txt");
    std::ofstream kvad("kvad.txt");
    std::ofstream log("log.txt");
    for (int i = 0; i < N; ++i) {
        timer.start();
        l1.creite_mass(n*100);
        lin << timer.stop() << std::endl;

        std::vector<int> mass1 = l1.creite_mass(n);
        timer.start();
        k1.sort(mass1);
        kvad << timer.stop() << std::endl;

        logor l2(l1.creite_mass(n));
        timer.start();
        l2.Sort(0,n-1);
        log << timer.stop() << std::endl;
    }
    rezultat r;
    r.srednee_vremaj("kvad.txt",N);
    r.srednee_vremaj("lin.txt",N);
    r.srednee_vremaj("log.txt",N);
    return 0;
}
