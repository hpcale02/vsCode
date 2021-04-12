//calcolare la media con for
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int media = 0;
    int i;

    for (i = 1; numero != 9999; i++)
    {
        cout << "inserisci numero (9999 => exit): ";
        cin >> numero;

        if (numero != 9999)
            media += numero;
    }

    i -= 2;
    media /= i;
    
    cout << "media: " << media << endl;

    return 0;
}