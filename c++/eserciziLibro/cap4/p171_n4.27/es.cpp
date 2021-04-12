//es n 4.27 pag 171
//hpc 10.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numeroBinario;
    int lunghezza;
    int i = 1;
    int numeroDecimale;
    int numero;
    int potenzaDecimale;
    int potenzaBinario;

    cout << "inserisci un numero binario (composto solo da 1 e 0): ";
    cin >> numeroBinario;

    lunghezza = log10(numeroBinario) + 1;

    while ( i <= lunghezza)
    {
        potenzaDecimale = pow( 10, lunghezza - i );
        potenzaBinario = pow ( 2, lunghezza - i );

        numero = numeroBinario / potenzaDecimale;
        numeroBinario %= potenzaDecimale;
        numeroDecimale += numero * potenzaBinario;

        lunghezza--;
    }

    cout << "numero in decimale è " << numeroDecimale << endl;

    return 0;
}