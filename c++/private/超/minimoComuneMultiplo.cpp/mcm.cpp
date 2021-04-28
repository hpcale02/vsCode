//帮🐷
//hpc 28.04.2021

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int max, min, mcm;

    cout << "num1: ";
    cin >> n1;
    cout << "num2: ";
    cin >> n2;

    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2,
        min = n1;
    }

    int count = 1;
    mcm = max;
    while (mcm % min != 0)
    {
        count++;
        mcm = count * max;
    }

    cout << "mcm: " << mcm << endl;

    return 0;
}
