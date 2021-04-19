//funzione delle torre di hanoi con 4 parametri
//nel paletto inizaile sono disposti 64 dischetti(ordine decrescente di grandezza)
//spostare questi dischi da quello iniziale a quello finale mantenendo sempre la disposizione decrescente di granmdezza
//hpc 18.04.2021

#include <iostream>
using namespace std;

void torreDiHanoi(int, char, char, char);

int main()
{

    int nDischi;
    char pInit = 'A';
    char pFine = 'C';
    char pMedi = 'B';

    cout << "inserisci i nuemri di dischi: ";
    cin >> nDischi;

    torreDiHanoi(nDischi, pInit, pFine, pMedi);

    return 0;
}

void torreDiHanoi(int nDischi, char initPal, char finePal, char mediumPal)
{
    if (nDischi == 1)
    {
        cout << initPal << " --> " << finePal << endl;
    }
    else
    {
        torreDiHanoi(nDischi - 1, initPal, mediumPal, finePal);
        cout << initPal << " --> " << finePal << endl;
        torreDiHanoi(nDischi - 1, mediumPal, finePal, initPal);
    }
}
