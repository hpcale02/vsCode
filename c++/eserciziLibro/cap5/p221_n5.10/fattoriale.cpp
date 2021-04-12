//fattoriale con ciclo for
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i, n, m;

    //n! = n * (n-1) * (n-2) * ... * 1
    for (n = 1; n <= 5; n++)
    {
        m = 1;
        for (i = 1; i <= n; i++)
        {
            m *= i;
        }
        cout << m << "\t";
    }

    return 0;
}