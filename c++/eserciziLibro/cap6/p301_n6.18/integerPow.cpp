//creare una funzione intergerPower che calcoli la potenza di un numerom intero positivo diverso da 0
//hpc 17.04.2021

#include <iostream>
using namespace std;

int integerPower(int, int);

int main()
{
    int base, esponente;

    cout << "inserisci la base con lesponente: ";
    cin >> base >> esponente;
    cout << base << "^" << esponente << " = " << integerPower(base, esponente) << endl;

    return 0;
}

int integerPower(int base, int esponent)
{
    int pow = base;

    
    for (int i = 1; i < esponent; i++)
        pow *= base;

    return pow;
}