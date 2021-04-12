//con il ciclo for sommare una sequenza di numeri interi
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int count;
    int numero;
    int somma = 0;

    cout << "inserisci il numero da sommare: ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cout << "inserisci il " << i << "° numero: ";
        cin >> numero;
        somma += numero;
    }

    cout << "la somma: " << somma << endl;

    return 0;
}