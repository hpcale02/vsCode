//fig 6.30 pag 281
// verifica della funzione ricorsiva
//hpc 16.04.2021

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
    cout << "fibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35) = " << fibonacci(35) << endl;
    return 0;
}

unsigned long fibonacci(unsigned long numero)
{
    if ((numero == 0) || (numero == 1))
        return numero;
    else
        return fibonacci(numero - 1) + fibonacci(numero - 2);
}