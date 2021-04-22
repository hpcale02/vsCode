//sistema di prenotazione di una compania aerea
//asseganre postui (10)
//1-5 primma classe / 6-10 classe economica
//hpc 22.04.2021

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int menu();
void assegnazionePosto(int[], int);
void stampaCarta(int);

int postiPrimaClasse = 0;
int postiSecondaClasse = 5;

int main()
{
    const int arraySize = 10;
    int posto[arraySize] = {0};
    int sceltaClasse;
    char valoreSentinella;

    while (valoreSentinella != EOF)
    {
        sceltaClasse = menu();
        assegnazionePosto(posto, sceltaClasse);
        cout << "carattere per continuare o EOF per abbandonare: ";
        cin >> valoreSentinella;
        cout << endl;
    }

    return 0;
}

int menu()
{
    int classe;

    cout << "Digitare 1 per la prima classe\nDigitare 2 per la classe economica: ";
    cin >> classe;

    return classe;
}

void assegnazionePosto(int posto[], int scelta)
{

    switch (scelta)
    {
    case 1:
        if (posto[4] == 0)
        {
            posto[postiPrimaClasse]++;
            postiPrimaClasse++;
            stampaCarta(postiPrimaClasse);
        }
        else
        {
            if (posto[9] == 0)
                cout << "tutti posti occupati volete passare alla classe economica?" << endl;
            else
                cout << "tutti posti sul aereo sono pieni la prossima partirà tra 3 ore" << endl;
        }
        break;
    case 2:
        if (posto[9] == 0)
        {
            posto[postiSecondaClasse]++;
            postiSecondaClasse++;
            stampaCarta(postiSecondaClasse);
        }
        else
        {
            if (posto[5] == 0)
                cout << "\ntutti posti occupati volete passare alla prima classe?" << endl;
            else
                cout << "\ntutti posti sul aereo sono pieni. prossimo aereo partirà tra 3 ore" << endl;
        }
        break;
    default:
        cout << "errore!" << endl;
        break;
    }
}

void stampaCarta(int numeroPosto)
{
    if (numeroPosto < 5)
    {
        cout << "\nPrima classe --> numero posto:" << numeroPosto << endl;
    }
    else
    {
        cout << "\nClasse economica --> numero posto: " << numeroPosto << endl;
    }
}