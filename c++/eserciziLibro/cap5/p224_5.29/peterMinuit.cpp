//modifica fig.5.6 ==>
//hpc 10.04.2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double sommaDeposito;
    double costoIsola = 24;
    double tassoInteresse = .05;

    for (int i = 5; i <= 10; i++)
    {
        //setw()  ==  impostare lalunghezza del campo
        cout << "Anno" << setw(21) << "somma del deposito(" << i << "%)" << endl;

        //imposta il formato dei numeri in virgola mobile
        cout << fixed << setprecision(2);

        for (int anno = 1; anno <= 379; anno++)
        {
            sommaDeposito = costoIsola * pow(1 + tassoInteresse, anno);

            cout << setw(4) << anno << setw(21) << sommaDeposito << endl;
        }
        cout << endl;
    }

    return 0;
}