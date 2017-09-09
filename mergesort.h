#ifndef MERGESORT_H
#define MERGESORT_H

#include<iostream>
using namespace std;
 
void merge(int tablica[], int start, int srodek, int koniec)
{
int *tab_pom = new int[(koniec-start)]; // utworzenie tablicy pomocniczej
int i = start, j = srodek+1, k = 0; // zmienne pomocnicze
 
while (i <= srodek && j <= koniec)
{
if (tablica[j] < tablica[i])
{
tab_pom[k] = tablica[j];
j++;
}
else
{
tab_pom[k] = tablica[i];
i++;
}
k++;
}
 
if (i <= srodek)
{
while (i <= srodek)
{
tab_pom[k] = tablica[i];
i++;
k++;
}
}
else
{
while (j <= koniec)
{
tab_pom[k] = tablica[j];
j++;
k++;
}
}
 
for (i = 0; i <= koniec-start; i++)
tablica[start+i] = tab_pom[i]; 
 
}
 
void merge_sort(int tablica[], int start, int koniec)
{
int srodek;
 
if (start != koniec)
{
srodek = (start + koniec)/2;
merge_sort(tablica, start, srodek);
merge_sort(tablica, srodek+1, koniec);
merge(tablica, start, srodek, koniec);
}

}
#endif	// MERGESORT_H

