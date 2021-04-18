//scrivere una funzione che calcola un numero elevato alla potenza con una funzione ricorsiva
//base^exponent = base * base^exponent-1
//base^1 = base

#include <iostream>
using namespace std;

int power(int, int);

int main()
{
    int base, esponente;

    cout << "numero: ";
    cin >> base;
    cout << "elevato a: ";
    cin >> esponente;

    cout << "= " << power(base, esponente) << endl;

    return 0;
}

int power(int base, int exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}