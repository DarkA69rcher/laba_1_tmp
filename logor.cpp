//
// Created by dark6 on 30.10.2022.
//

#include "logor.h"
void logor::Merge(int first, int last){
    int middle, start, final, j;
    std::vector<int> massiv(last+1);
    middle=(first+last)/2;
    start=first;
    final=middle+1;
    for(j=first; j<=last; j++)
        if ((start<=middle) && ((final>last) || (mass[start]<mass[final])))
        {
            massiv[j]=mass[start];
            start++;
        }
        else
        {
            massiv[j]=mass[final];
            final++;
        }
    for (j=first; j<=last; j++) mass[j]=massiv[j];
};
void logor::Sort(int first, int last)
{
    {
        if (first<last)
        {
            Sort(first, (first+last)/2); //сортировка левой части
            Sort((first+last)/2+1, last); //сортировка правой части
            Merge(first, last); //слияние двух частей
        }
    }
};