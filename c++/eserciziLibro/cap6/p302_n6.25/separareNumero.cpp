//a) calcoplare il quoziente
//b) calcoplare il resto
//c) separare il mu,ero con due spazzi utilizzando a) e b)
//hpc 17.04.2021

#include <iostream>
using namespace std;

int quoziente(int, int);
int resto(int, int);
void separareNumeri(int);

int main()
{
    int numero;

    cout << "numero: ";
    cin >> numero;
    separareNumeri(numero);
}

int quoziente(int a, int b)
{
    return a / b;
}
int resto(int a, int b)
{
    return a % b;
}

void separareNumeri(int numero)
{
    int i;

    if (numero >= 10000)
        i = 10000;
    else if (numero >= 1000)
        i = 1000;
    else if (numero >= 100)
        i = 100;
    else if (numero >= 10)
        i = 10;
    else
        i = 1;

    for (; i > 0; i /= 10)
    {
        cout << quoziente(numero, i) << "  ";
        numero = resto(numero, i);
    }
    cout << endl;
}