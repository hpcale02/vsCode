//fig 4.16 pag 150
//Class Analysis che analizza di voti dell'esame
//hpc 09.04.2021

#include <iostream>
using namespace std;

#include "ClassAnalisis.h"

void Analysis::risultatiEsame()
{
    //inizializza i varaibili
    int numeroPromosso = 0;
    int numeroBocciato = 0;
    int contatore = 1;
    int risultato;

    while ( contatore <= 10 )
    {
        cout << "inserisci risultato (1 = pass, 2 = fail): ";
        cin >> risultato;

        risultato == 1 ? numeroPromosso++ : numeroBocciato++;

        contatore++;
    }
    cout << endl;

    cout << "studenti promossi: " << numeroPromosso << "\nstudenti bocciati: " << numeroBocciato << endl << endl;

    if ( numeroPromosso > 8 )
        cout << "La retta è aumentata! " << endl << endl;
}