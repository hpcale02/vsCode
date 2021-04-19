//visualizzare la ricorsione della figura 6.29 con dei output di pèarametri e varaibili locali
//hpc 19.04.2021

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
    {
        cout << number << " = ";
        return 1;
    }
    else
    {
        cout << number << " * ";
        return number * factorial(number - 1);
    }
}