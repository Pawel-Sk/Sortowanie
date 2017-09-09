#include<iostream>
#include "quicksort.h"
using namespace std;
 

 
int main()
{
int ilosc_liczb, i;
cout << "Podaj ilosc licz do posortowania: ";
cin >> ilosc_liczb;
int *tablica = new int [ilosc_liczb]; // utworzenie dynamicznej tablicy na 'ilosc_liczb' elementow
 
for (i = 0; i < ilosc_liczb; i++) // wczytywanie liczb do tablicy
{
cout << "Podaj liczba: ";
cin >> tablica[i];
}
 
quicksort(tablica,0,ilosc_liczb-1); // wywolanie funkcji sortujacej
 
for (i = 0; i < ilosc_liczb; i++) // wypisanie posortowanej tablicy
cout << "tablica[" << i << "] = " << tablica[i] << endl;
 
delete [] tablica; // zwolnienie tablicy zaalokowanej dynamicznie
 
return 0;
}