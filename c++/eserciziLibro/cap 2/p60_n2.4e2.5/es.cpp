//esercizio libro pag.60 num.2.4
//a)il programma calcola il prodotto diu tre numeri interi
//hpc 05.04.2021
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    //b)dichiarazione variabili
    int x;
    int y;
    int z;
    int result;

    //c)chiede all'utente di inserire tre nunmeri interi
    cout << "inserisci tre numeri interi: ";

    //d)legge i variabili
    cin >> x >> y >> z;

    //e)assegnare al variabile result la somma dei tree variuabili
    result = x * y * z;

    //f)stampa il risultato
    cout << "il prodotto dei tre numeri è " << result << endl;

    //g)concliudere il programma
    return 0;
}