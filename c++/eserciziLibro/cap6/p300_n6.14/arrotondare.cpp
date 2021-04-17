//y = floor(x + 0.5) ==> arrotonda x a un intero
//y = floor(x * 10 + .5) / 10 ==> arrotonda x alla prima posizione decimale
//y = floor(x * 100 + .5) / 100 ==> arrotonda x al secondo posizione decimale
//hpc 17.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main()
{
    double n;
    cout << "inserisci un numero: ";
    cin >> n;

    cout << roundToInteger(n) << endl;
    cout << roundToTenths(n) << endl;
    cout << roundToHundredths(n) << endl;
    cout << roundToThousandths(n) << endl;

    return 0;
}

int roundToInteger(double num)
{
    return floor(num + .5);
}

double roundToTenths(double num)
{
    return floor(num * 10 + .5) / 10;
}

double roundToHundredths(double num)
{
    return floor(num * 100 + .5) / 100;
}

double roundToThousandths(double num)
{
    return floor(num * 1000 + .5) / 1000;
}