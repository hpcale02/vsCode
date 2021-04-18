//a)funzione fibonaccio(n) vche calcola n-esimo numeor di fibonacci
//b) determinare il più grande numero di fibonaccio che si puo determinare sul computer (363076002)questo per int
//c)modifica a) invece di int con double (1.30699e+308) per double 
//hpc 18.04.2021

#include <iostream>
using namespace std;

void fibonacci(int);

int main()
{
    int n;
    cout << "inserisci a che numeoro di fibonaccio vuoi arrivare: ";
    cin >> n;

    fibonacci(n);

    return 0;
}

void fibonacci(int posizione)
{
    double n = 0;
    double n1 = 1;
    double n2 = 0;

    cout << n << ", ";
    n++;

    for (int i = 1; i < posizione; i++)
    {
        cout << n << ", ";
        n = n1 + n2;
        n2 = n1;
        n1 = n;
    }
}