//(interesse composto)
//hpc 11.04.2021

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int sommaDeposito;
    int capitaleInvestito = 1000;
    int tassoInteresse = 5;
    long int a = 1;
    int j;

    //setw()  ==  impostare lalunghezza del campo
    cout << "Anno" << setw(25) << "somma del deposito" << endl;

    //imposta il formato dei numeri in virgola mobile
    cout << fixed << setprecision(2);

    for (int anno = 1; anno <= 10; anno++)
    {
        sommaDeposito = capitaleInvestito * pow(100 + tassoInteresse, anno) / a;

        cout << setw(4) << anno << setw(21) << sommaDeposito / 100 << '.' << (sommaDeposito % 100 < 10 ? cout << "0" << sommaDeposito % 100 : cout << sommaDeposito % 100) << endl;

        a *= 100;
    }

    return 0;
}