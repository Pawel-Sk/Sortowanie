#ifndef INSERTION_H
#define INSERTION_H

#include<iostream>
using namespace std;


void insertionsort(int tablica[], int ilosc_liczb){
    int tymczasowa, i, j;
    for (i = 1; i < ilosc_liczb; i++)
    {
        tymczasowa = tablica[i]; // przechowanie elementu tablicy z zmiennej pomocniczej
    for (j = i-1; j >= 0; j--)
    {
    if (tymczasowa < tablica[j]) // zamiana miejsc
        tablica[j+1] = tablica[j];
    else
        break;
    }
        tablica[j+1] = tymczasowa;
    }
    
}
#endif	// INSERTION_H

