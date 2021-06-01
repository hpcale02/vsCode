//clase Array
//hpc 01.06.2021

#include <iostream>
using namespace std;

#include "Array.h"

int main()
{
    Array integers1(7);
    Array integers2; //array di 10 elementi (di default)

    cout << "Siza of Array integers1: " << integers1.getSize()
         << "\nArray after initialization:\n"
         << integers1;

    cout << "\nSiza of Array integers2: " << integers2.getSize()
         << "\nArray after initialization:\n"
         << integers2;

    //inserisci i valori di i1 e i2
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contian:\n"
         << "integers1:\n"
         << integers1
         << "\nintegers2:\n"
         << integers2;

    //operatore !=
    cout << "\nEvaluting integers1 != integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;
    else
        cout << "integers1 and integers2 are equal" << endl;

    Array integers3(integers1); //chiama costruttore di copia

    cout << "\nSize of Array integers3: " << integers3.getSize()
         << "\nArray after initializaztion:\n"
         << integers3;

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1:\n"
         << integers1
         << "\nintegers2:\n"
         << integers2;

    //operatore ==
    cout << "\nEvaluting integers1 == integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;
    else
        cout << "integers1 and integers2 are equal" << endl;

    //operatore []
    cout << "nintegers1[5]: " << integers1[5];

    //operatore =
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n"
         << integers1;

    //tentativo di fornire un indice fuori intervallo
    cout << "\nAttempt to assign 100o to integers1[15]" << endl;
    integers1[15] = 1000;

    return 0;
}