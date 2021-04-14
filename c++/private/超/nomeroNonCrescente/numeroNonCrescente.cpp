//aiuto 🐷 su es per casa
//13.04.2021

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int numero1;
    int i = 1;

    cin >> numero1;

    do
    {
        numero = numero1;
        cin >> numero1;
        
        i++;
    }while (numero1 > numero );

    cout << i << " numeri inseriti" << endl;

    return 0;
}