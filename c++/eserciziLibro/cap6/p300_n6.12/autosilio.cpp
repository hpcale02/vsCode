//2 euro per 3 ore
// succesivamente 0.5 per ogni ora
// se 24 ore == 10 euro
//poi scrivi il guadagno giornaliero
//hpc 17.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

void total(double[3], double[3]);

int main()
{
    double ore[3];
    double costo[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> ore[i];

        if (ore[i] <= 3)
            costo[i] = 2;
        else if (ore[i] == 24)
            costo[i] = 10;
        else
            costo[i] = 2 + 0.5 * (ore[i] - 3);
    }

    cout << "Macchina" << setw(7) << "Ore" << setw(14) << "A pagare" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << setw(15) << setprecision(1) << fixed << ore[i] << setw(13) << setprecision(2) << fixed << costo[i] << endl;
    }

    total(ore, costo);

    return 0;
}

void total(double ore[3], double costo[3])
{
    double sommaOre = 0, totaleCosto = 0;
    for (int i = 0; i < 3; i++)
    {
        sommaOre += ore[i];
        totaleCosto += costo[i];
    }
    cout << "TOTAL" << setw(11) << setprecision(1) << fixed << sommaOre << setw(13) << setprecision(2) << fixed << totaleCosto << endl;
}