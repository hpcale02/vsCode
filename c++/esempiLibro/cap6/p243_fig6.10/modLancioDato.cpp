//Fig 6.10 pag 243
// lancio del dato che generano numeri più casuali con srand(seen)
//hpc 12.04.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // cout << "inserisci la cordinata: ";
    // cin >> cordinate;
    // srand(cordinate); //gemera un numero casuale utilizzando la cordinata inserita
    srand(time(0)); //time(0) ==> restituisc ei numeri di secondi trascorsi da 01.01.1970 a adesso e li trasforma in unsigned int

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(10) << (1 + rand() % 6);

        if (i % 5 == 0)
            cout << endl;
    }

    return 0;
}
