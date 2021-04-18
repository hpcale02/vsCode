//a) funzione che determina se il numeri è primo che
//b) numeri primi compresi tra 1 e 10000
//c) migliorare la funzione

#include <iostream>
#include <cmath>
using namespace std;

bool numeroPrimo(int);

int main()
{
    cout << 1 << "\n"
         << 2 << "\n"
         << 3 << endl;

    for (int i = 3; i <= 1000; i++)
    {
        if (numeroPrimo(i))
            cout << i << endl;
    }

    return 0;
}

bool numeroPrimo(int numero)
{
    bool primo;
    for (int i = 2; i <= sqrt(numero); i++)
    {
        if (numero % i == 0)
        {
            primo = false;
            break;
        }
        else
        {
            primo = true;
        }
    }

    if (primo == true)
        return true;
    else
        return false;
}