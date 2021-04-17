//funzione ipotenusa che prende due variabili di tipo double
//hpc 17.04.2021

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double ipotenusa(double, double);

int main()
{
    double cateto1, cateto2;

    for (int i = 0; i < 3; i++)
    {
        cout << "inserisici i due cateti: ";
        cin >> cateto1 >> cateto2;
        cout << "ipotenusa = " << setprecision(2) << fixed << ipotenusa(cateto1, cateto2) << endl;
    }

    return 0;
}

double ipotenusa(double c1, double c2)
{
    return sqrt(pow(c1, 2) + pow(c2, 2));
}