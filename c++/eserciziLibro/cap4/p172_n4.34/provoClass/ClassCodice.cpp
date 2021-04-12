///classe che cripta e decripta
//hpc 10.04.2021

#include <cmath>
#include <iostream>
using namespace std;

#include "ClassCodice.h"

Codice::Codice( int numero )
{
    setCodice( numero );
}

void Codice::setCodice( int numero)
{
    codice = numero;
}

int Codice::getCodice()
{
    return codice;
}

int Codice::crittaCodice()
{
    int j = 4;
    int x;
    int potenza;
    int codiceCrittato = 0;
    
    while ( 0 < j )
    {
        potenza = pow( 10, j - 1 );
        x = codice / potenza;
        codice %= potenza;

        x = ( x + 7 ) % 10;

        codiceCrittato += x * potenza;
        j--;
    }
    
    return codiceCrittato;
}

void Codice::decrittaCodice( int numeroCriptato )
{
    int potenza;
    int x;
    int j = 4;

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
}

