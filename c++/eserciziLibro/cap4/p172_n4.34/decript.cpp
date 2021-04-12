//es n 4.34 pag 172
//hpc 10.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numeroCriptato;
    int potenza;
    int x;
    int j = 4;

    cout << "inserisci il numero di 4 cifre (da decrittare): ";
    cin >> numeroCriptato;

    while ( 0 < j )
    {
        potenza = pow( 10, j - 1 );
        x = numeroCriptato / potenza;
        numeroCriptato %= potenza;

        x = ( x + 3 ) % 10;
        
        cout << x;

        j--;
    }

    cout << endl;

    return 0;
}