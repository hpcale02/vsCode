//simulare il lanciodi una moneta e conta il numero di risultato testa o croce
//flip che restituisce 0 per croce e 1 per testa
//hpc 18.04.2021

#include <iostream>
#include <cstdlib>
using namespace std;

int flip();

int main()
{
    int testa = 0;
    int croce = 0;

    for (int i = 0; i < 100; i++)
    {
        if (flip() == 0)
            croce++;
        else
            testa++;
    }
    cout << "croce: " << croce << "\ntesta: " << testa << endl;

    return 0;
}

int flip()
{
    return rand() % 2;
}