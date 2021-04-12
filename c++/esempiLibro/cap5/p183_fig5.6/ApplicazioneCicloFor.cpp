//esempi applicazione ciclo for  (interesse composto)
//hpc 10.04.2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double sommaDeposito;
    double capitaleInvestito = 1000;
    double tassoInteresse = .05;

    //setw()  ==  impostare lalunghezza del campo
    cout << "Anno" << setw(21) << "somma del deposito" << endl;

    //imposta il formato dei numeri in virgola mobile
    cout << fixed << setprecision(2);

    for (int anno = 1; anno <= 10; anno++)
    {
        sommaDeposito = capitaleInvestito * pow(1 + tassoInteresse, anno);

        cout << setw(4) << anno << setw(21) << sommaDeposito << endl;
    }

    return 0;
}