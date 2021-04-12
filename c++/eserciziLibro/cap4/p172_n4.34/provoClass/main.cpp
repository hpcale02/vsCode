//classe che cripta e decripta
//hpc 10.04.2021

#include <iostream>
using namespace std;

#include "ClassCodice.h"

int main()
{
    int codice;
    int codiceCrittato;
    int codiceDecrittare;

    cout << "inserisci codice: ";
    cin >> codice;

    Codice mycodice( codice );

    cout << "codice crittato: " << mycodice.crittaCodice() << endl;

    cout << "codice da decrittare: ";
    cin >> codiceDecrittare;
    cout << "codice decrittato: ";
    mycodice.decrittaCodice( codiceDecrittare );

    return 0;
}