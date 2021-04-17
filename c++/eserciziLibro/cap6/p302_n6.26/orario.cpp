//una funzione che riceve 3 numeir interi (ore, secondo, secondi) e restituire i numeri di secondi che sono passati da l'ultimo 12
//con questa funzione trovare quanto tempo passa tra due ore
//hpc 17.04.2021

#include <iostream>
using namespace std;

int secondiPassati(int, int, int);

int main()
{
    int ore, minuti, secondi;
    int secondiPass1, secondiPass2, secondiPassatiTotale;
    cout << "inserisci l'ora, minuti e secondi: ";
    cin >> ore >> minuti >> secondi;
    secondiPass1 = secondiPassati(ore, minuti, secondi);

    cout << "inserisci secondo l'orario in modo analogo alla prima: ";
    cin >> ore >> minuti >> secondi;
    secondiPass2 = secondiPassati(ore, minuti, secondi);

    secondiPassatiTotale = secondiPass2 - secondiPass1;
    ore = secondiPassatiTotale / 3600;
    secondiPassatiTotale %= 3600;
    minuti = secondiPassatiTotale / 60;
    secondiPassatiTotale %= 60;

    cout << "sono passati " << ore << " ore " << minuti << " minuti " << secondiPassatiTotale << " secondi " <<endl;

    return 0;
}

int secondiPassati(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}