//funzione delle torre di hanoi con 4 parametri
//nel paletto inizaile sono disposti 64 dischetti(ordine decrescente di grandezza)
//spostare questi dischi da quello iniziale a quello finale mantenendo sempre la disposizione decrescente di granmdezza
//hpc 18.04.2021

#include <iostream>
using namespace std;

void torreDiHanoi(int, int, int, int);

int main()
{

    int nDischi;
    int pInit;
    int pFine;
    int pPause;

    cout << "inserisci i nuemri di dischi; ";
    cin >> nDischi;
    cout << "inserisci il paletto iniziale: ";
    cin >> pInit;
    cout << "insaerisci il paletto intermedio: ";
    cin >> pPause;
    cout << "inserisci il paletto finale: ";
    cin >> pFine;

    torreDiHanoi(nDischi, pInit, pFine, pPause);
    
    return 0;
}

