//ricevere una serie di numeri e li legge uno per volta e derterminare se è un numero pari o non
//hpc 17.04.2021

#include <iostream>
using namespace std;

bool even(int);

int main()
{
    int n;

    while (n != 9999)
    {
        cout << "inseirisci un numero: ";
        cin >> n;

        if (even(n) == 1)
            cout << "è un numero dispari" << endl;
        else
            cout << "è un numero pari" << endl;
    }

    return 0;
}

bool even(int numero)
{
    return numero % 2;
}