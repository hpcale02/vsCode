//calcolatrice
//hpc 11.04.2021
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    double numero1;
    double numero2;
    char simbolo;
    char sentinella;

    do
    {
        cout << "inserisci il calcolo: ";
        cin >> numero1 >> simbolo >> numero2;

        switch (simbolo)
        {
        case '+':
            cout << numero1 + numero2 << endl;
            break;

        case '-':
            cout << numero1 - numero2 << endl;
            break;

        case '*':
            cout << numero1 * numero2 << endl;
            break;

        case '/':
            cout << numero1 / numero2 << " or " << static_cast<int>(numero1 / numero2) << " resto: " << static_cast<int>(numero1) % static_cast<int>(numero2) << endl;
            break;

        case '^':
            cout << pow(numero1, numero2) << endl;
            break;

        default:
            cout << "il simbolo inserito non valido! " << endl;
            break;
        }

        cout << "carattere per continuare (EOF to exit): ";
        cin >> sentinella;
    } while (sentinella != EOF);
    return 0;
}