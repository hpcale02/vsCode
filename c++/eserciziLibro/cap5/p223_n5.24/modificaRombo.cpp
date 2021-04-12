//modifica del romdo 5.23
//hpc 12.04.2021

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y;
    int diametro;

    cout << "inserisci la misura del diametro: ";
    cin >> diametro;

    y = diametro - 2;

    for (int i = 0; i < diametro; i++)
    {
        for (int j = 0; j < diametro; j++)
        {
            if (j + i < diametro / 2 || i - j > diametro / 2)
            {
                cout << ' ';
            }
        }

        if (x < diametro + 1)
        {
            for (int j = 0; j < x; j++)
            {
                cout << '*';
            }
            x += 2;
        }
        else
        {
            for (int j = 0; j < y; j++)
            {
                cout << '*';
            }
            y -= 2;
        }
        cout << endl;
    }
    return 0;
}