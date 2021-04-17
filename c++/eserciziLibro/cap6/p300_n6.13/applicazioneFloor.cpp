//y = floor(x +0.5);
//arrotonfare il numero inserito al più verificando
//hpc 17.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    while (x != 9999)
    {
        cout << "inserisci il numero: ";
        cin >> x;

        if(x != 9999)
        y = floor(x + 0.5);
        cout << x << " arrotondato è " << y << endl;
    }
    return 0;
}