//Fig 6.29 pag 27
//Verifica della funzione ricorsione fattoriale
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long); //prototipo di funzione

int main()
{
    //calcola i fattoriali da 0 a 10
    for (int i = 0; i <= 10; i++)
    {
        cout << setw(2) << i << "! = " << factorial(i) << endl;
    }

    return 0;
}

unsigned long factorial(unsigned long number)
{
    if (number <= 1) //verifica il caso base
        return 1;
    else
        return number * factorial(number - 1);
}