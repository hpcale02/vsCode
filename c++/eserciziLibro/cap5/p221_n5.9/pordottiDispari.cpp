//con il ciclo for calcola il prodotto dispari dei numeri da 1 a 15
// hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int prodotto = 1;

    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
            prodotto *= i;
    }

    cout << prodotto << endl;

    return 0;
}