//simulare il lancio di due dati ed calcolare la somma
//hpc 22.04.2021

#include <iostream>
#include <cstdlib>
using namespace std;

int sommaLancioDati();

int main()
{
    const int arraySize = 11;
    int frequency[arraySize];
    for (int i = 0; i < 36000; i++)
    {
        int sum = sommaLancioDati();
        frequency[sum - 2]++;
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << "sum = " << i + 2 << ": " << frequency[i] << endl;
    }
    return 0;
}

int sommaLancioDati()
{
    int dato1, dato2;

    dato1 = 1 + rand() % 6;
    dato2 = 1 + rand() % 6;
    return dato1 + dato2;
}