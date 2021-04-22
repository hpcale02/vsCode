//4 rapressentanti 5 prodotti
//numero di identificazione del rapressentante (1-4)
//il numero del prodotto (1-5)
//il valore del prodotto venduto

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sales[5][4] = {{100, 100, 100, 100},
                       {100, 100, 100, 100},
                       {100, 100, 100, 100},
                       {100, 100, 100, 100},
                       {100, 100, 100, 100}};

    for (int i = 0; i <= 5; i++)
    {
        if (i == 0)
        {
            cout << "     ";
            for (int j = 0; j < 4; j++)
            {
                cout << "r" << j + 1 << "  ";
            }
            cout << "tot" << endl;
        }
        if (i >= 1)
        {
            cout << "p" << i << "   ";
            for (int j = 0; j < 4; j++)
            {
                cout << sales[i - 1][j] << " ";
            }
            int tot = 0;
            for (int k = 0; k < 4; k++)
            {
                tot += sales[i - 1][k];
            }
            cout << tot << endl;
        }
    }

    cout << "tot  ";
    for (int i = 0; i < 4; i++)
    {
        int tot = 0;
        for (int j = 0; j < 5; j++)
        {
            tot += sales[i][j];
        }
        cout << tot << " ";
    }
    cout << endl;

    return 0;
}