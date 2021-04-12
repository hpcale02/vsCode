//fattoriale
//hpc 10.04.2021

#include <iostream>
using namespace std;

double fattoriale( int numero )
{
    double fattoriale = 1;
    int i = 1;

    while ( i <= numero )
    {
        fattoriale *= i;
        i++;
    }

    return fattoriale;
}

int main()
{
    int precisione;
    double e = 1.00;
    int i = 1;
    int x;

    cout << "inserisci il valore della precisione di e: ";
    cin >> precisione;

    while ( i <= precisione )
    {
        e += 1 / fattoriale( i );
        i++;
    }

    cout << "e: " << e << endl;

    i = 1;

    cout << "inserisci il valore della precisione di e^x: ";
    cin >> precisione;
    cout << "inserisci l'esponente x: ";
    cin >> x;

    while ( i <= precisione )
    {
        e +=  pow( x, i ) / fattoriale( i );
        i++;
    }
    
    cout << "e^x: " << e << endl;
    
    return 0;
}