//modifica del figora 5.6 sulle tasse
//hpc 10.04.2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double sommaDeposito;
    double capitaleInvestito = 1000;

    for (int i = 5; i <= 10; i++)
    {
        //setw()  ==  impostare lalunghezza del campo
        cout << "Anno" << setw(25) << "somma del deposito(" << i << "%)" << endl;

        //imposta il formato dei numeri in virgola mobile
        cout << fixed << setprecision(2);

        for (int anno = 1; anno <= 10; anno++)
        {
            sommaDeposito = capitaleInvestito * pow(1 + (static_cast<double>(i) / 100), anno);

            cout << setw(4) << anno << setw(25) << sommaDeposito << endl;
        }

        cout << endl;
    }

    return 0;
}