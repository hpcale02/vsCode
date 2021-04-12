//es n 4.20 pag 169
//hpc 10.04.2021

#include <iostream>
using namespace std;

#include "mClassAnalysis.h"

void Analysis::risultatiEsame()
{
    //inizializza i varaibili
    int numeroPromosso = 0;
    int numeroBocciato = 0;
    int contatore = 1;
    int risultato;
    bool verifica = true;

    while ( contatore <= 10 )
    {

        while ( verifica )
        {
            cout << "inserisci risultato (1 = pass, 2 = fail): ";
            cin >> risultato;
            
            risultato == 1 || risultato == 2 ? verifica = false : cout << "numero inserito invalido ( 1 or 2)" << endl;
        }

        verifica = true;

        risultato == 1 ? numeroPromosso++ : numeroBocciato++;

        contatore++;
    }
    cout << endl;

    cout << "studenti promossi: " << numeroPromosso << "\nstudenti bocciati: " << numeroBocciato << endl << endl;

    if ( numeroPromosso > 8 )
        cout << "La retta è aumentata! " << endl << endl;
}