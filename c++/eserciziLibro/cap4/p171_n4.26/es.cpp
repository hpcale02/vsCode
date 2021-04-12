//es n 4.26 pag 171
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int decina;
    int centinaia;
    int migliaia;
    int d_migliaia;

    while ( numero < 10000 || numero > 100000 )
    {
        cout << "inserisci un numero di 5 cifre: ";
        cin >> numero;
        if ( numero < 10000 || numero > 100000 )
            cout << " numero inserito invalido!" << endl;
    }

    d_migliaia = numero / 10000;
    numero %= 10000;

    migliaia = numero / 1000;
    numero %= 1000;

    centinaia = numero / 100;
    numero %= 100;

    decina = numero / 10;
    numero %=10;

    cout << ( d_migliaia == numero && migliaia == decina ? "è un palindreome" : "non è un palindrome") << endl;
    
    return 0;
}