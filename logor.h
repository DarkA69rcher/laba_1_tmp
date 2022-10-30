//
// Created by dark6 on 30.10.2022.
//

#ifndef LABA_1_TMP_LOGOR_H
#define LABA_1_TMP_LOGOR_H


#include <iostream>
#include <random>
#include <time.h>

class logor {
public:
    int saze_;
    int *A= new int[saze_];
    logor(int sazet){
        saze_=sazet;
        for(int i = 0; i < saze_ ; ++i) {
            A[i]= rand()%1000;
        }
    }

    void Merge(int first, int last){
        int middle, start, final, j;
        int *mas=new int[100];
        middle=(first+last)/2; //вычисление среднего элемента
        start=first; //начало левой части
        final=middle+1; //начало правой части
        for(j=first; j<=last; j++) //выполнять от начала до конца
            if ((start<=middle) && ((final>last) || (A[start]<A[final])))
            {
                mas[j]=A[start];
                start++;
            }
            else
            {
                mas[j]=A[final];
                final++;
            }
//возвращение результата в список
        for (j=first; j<=last; j++) A[j]=mas[j];
        delete[]mas;
    };
//рекурсивная процедура сортировки
    void MergeSort(int first, int last)
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
};



#endif //LABA_1_TMP_LOGOR_H
