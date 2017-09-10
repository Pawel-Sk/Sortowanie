#include<iostream>
#include<cstdlib>
#include<ctime>
#include "quicksort.h"
#include "mergesort.h"
#include "insertion.h"
using namespace std;
 


int main()
{
int ilosc_liczb, i;
cout << "Podaj ilosc licz do posortowania: ";
cin >> ilosc_liczb;
int *tablica = new int [ilosc_liczb]; // utworzenie dynamicznej tablicy na 'ilosc_liczb' elementow
 
srand( time( NULL ) );

for (i = 0; i < ilosc_liczb; i++) // wczytywanie liczb do tablicy
{
tablica[i] = rand();
}

int wybor; 
cout << "Wybierz metode sortowania: " << endl;
cout << "1. Sortowanie przez wstawianie" << endl;
cout << "2. Szybie sortowanie (quicksort)" << endl;
cout << "3. Sortowanie przez scalanie (mergesort)" << endl;
cin >> wybor;

if (wybor == 1)
{
	time_t czasStart = clock();
	insertionsort(tablica,ilosc_liczb);
	time_t czasStop = clock();
	cout << "Czas wykonania algorytmu: " << static_cast < double >( czasStop - czasStart ) / CLOCKS_PER_SEC << " sekund" << endl;
}
else if (wybor == 2)
{
	time_t czasStart = clock();
	quicksort(tablica,0,ilosc_liczb-1);
	time_t czasStop = clock();
        cout << "Czas wykonania algorytmu: " << static_cast < double >( czasStop - czasStart ) / CLOCKS_PER_SEC << " sekund" << endl;
}
else if (wybor == 3)
{
	time_t czasStart = clock();
	merge_sort(tablica,0,ilosc_liczb-1);
	time_t czasStop = clock();
        cout << "Czas wykonania algorytmu: " << static_cast < double >( czasStop - czasStart ) / CLOCKS_PER_SEC << " sekund" << endl;
}
else
{
	cout << "Wybór nieprawidłowy";
	return 0;
}

if (ilosc_liczb < 1000)
 {
for (i = 0; i < ilosc_liczb; i++) // wypisanie posortowanej tablicy
cout << "tablica[" << i << "] = " << tablica[i] << endl;
 }
delete [] tablica; // zwolnienie tablicy zaalokowanej dynamicznie
 
return 0;
}