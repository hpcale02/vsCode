//calcolare il pigreco con la serie infinita
//hpc 11.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double p = 0;
    double n = 1;

    for (int i = 0; i < 1000; i++)
    {
        if (i % 2 == 0)
            p += 4 / n;
        else
            p -= 4 / n;

        n += 2;

        cout << fixed << setprecision(10);
        cout << "preccisione " << i + 1 << ": " << p << endl;
    }

    return 0;
}