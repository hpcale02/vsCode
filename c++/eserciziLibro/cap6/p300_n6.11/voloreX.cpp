//trovare tutti i valori di x con diversi funzioni di cmath
//hpc 17.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    x = fabs(7.5);
    cout << x << endl;

    x = floor(7.5);
    cout << x << endl;

    x = fabs(0);
    cout << x << endl;

    x = ceil(0);
    cout << x << endl;

    x = fabs(-6.4);
    cout << x << endl;

    x = ceil(-6.4);
    cout << x << endl;

    x = ceil(-fabs(-8 + floor(-5.5)));
    cout << "ceil(-fabs(-8 + floor(-5.5)): " << x << endl;

    return 0;
}