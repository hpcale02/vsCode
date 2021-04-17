//funsione che restituisce il numero più pittoco tra tre numerio a virgola mobile di precisione 2
//hpc 17.04.2021

#include <iostream>
#include<iomanip>
using namespace std;

double piccolo(double, double, double);

int main()
{
    double n1, n2, n3;

    cout << "inserisci tre numeri decimali com due cifre dopo virgola: ";
    cin >> n1 >> n2 >> n3;

    cout << "più piccolo è " << setprecision(2) << fixed << piccolo(n1, n2, n3) << endl;

    return 0;
}

double piccolo(double num1, double num2, double num3)
{
    double min = num1;

    if (num2 < min)
    min = num2;

    if(num3 < min)
    min = num3;

    return min;
}