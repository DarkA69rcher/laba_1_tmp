//
// Created by dark6 on 30.10.2022.
//

#include "logor.h"
void logor::Merge(int first, int last){
    int middle, start, final, j;
    int *mas=new int[mass.size()];
    middle=(first+last)/2;
    start=first;
    final=middle+1;
    for(j=first; j<=last; j++)
        if ((start<=middle) && ((final>last) || (mass[start]<mass[final])))
        {
            mas[j]=mass[start];
            start++;
        }
        else
        {
            mas[j]=mass[final];
            final++;
        }
    for (j=first; j<=last; j++) mass[j]=mas[j];
    delete[]mas;
};
void logor::MergeSort(int first, int last)
{
    {
        if (first<last)
        {
            MergeSort(first, (first+last)/2); //сортировка левой части
            MergeSort((first+last)/2+1, last); //сортировка правой части
            Merge(first, last); //слияние двух частей
        }
    }
};