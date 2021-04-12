//manager(1)               ==> fisso settimanale
//lavoratori orari(2)      ==> fisso per prime 40 ore e +50% dal 41-esima
//lavoratori commisione(3) ==> $250 Fisso + 5.7% del commisione sulle vendite settimanale
//lavoratori a cottimo(4)  ==> riceve un fisso per pezzo lavorato
//calcola la paga settimanale per ogni lavoratore
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int codiceLavoratore;
    double fissoSettimanale = 250.00;

    double fissoOrario = 5;
    int numeroOre;

    double venditaSettimanale;

    double fissoPezzo;
    int quantPezzi;

    double stipendio;

    while (codiceLavoratore != 9999)
    {
        cout << "inserisce il tipo di lavoratore: ";
        cin >> codiceLavoratore;

        switch (codiceLavoratore)
        {
        case 1: //manager
            stipendio = fissoSettimanale;
            break;

        case 2: //lavoaratore orario
            cout << "inserisci il numero di ore: ";
            cin >> numeroOre;

            if (numeroOre <= 40)
                stipendio = fissoOrario * numeroOre;
            else
            {
                stipendio = fissoOrario * numeroOre;
                numeroOre -= 40;
                stipendio += fissoOrario * numeroOre * 0.5;
            }
            break;

        case 3: //lavoratore commisione
            cout << "inserisci la vendita settimanale: ";
            cin >> venditaSettimanale;

            stipendio = 250 + venditaSettimanale * 0.057;
            break;

        case 4: //lavoratori a cottimo
            cout << "inserisci il fisso del pezzo: ";
            cin >> fissoPezzo;
            cout << "inserisci la quantità del pezzo: ";
            cin >> quantPezzi;

            stipendio = fissoPezzo * quantPezzi;
            break;

        default:
            if (codiceLavoratore != 9999)
                cout << "lavoratore inesistente!" << endl;
        }

        if (codiceLavoratore != 9999)
            cout << "stipendio del lavoratore: " << stipendio << endl;
    }
    return 0;
}