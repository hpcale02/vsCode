//es n 4.34 pag 172
//hpc 10.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numeroIniziale;
    int j = 4;
    int x;
    int potenza;

    cout << "inserisci il codice di 4 cifre: ";
    cin >> numeroIniziale;
    
    while ( 0 < j )
    {
        potenza = pow( 10, j - 1 );
        x = numeroIniziale / potenza;
        numeroIniziale %= potenza;


        x = ( x + 7 ) % 10;

        cout << x;

        j--;
    }
    cout << endl;

   return 0;
}