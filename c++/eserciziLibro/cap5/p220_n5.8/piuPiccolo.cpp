//determinare il numero più piccolo con for
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int count;
    int numero;
    int min;

    cin >> count;
    cout << endl;

    cin >> numero;
    min = numero;

    for (int i = 1; i < count; i++)
    {
        cin >> numero;

        if (numero < min)
            min = numero;
    }

    cout << endl;
    cout << min << endl;

    return 0;
}