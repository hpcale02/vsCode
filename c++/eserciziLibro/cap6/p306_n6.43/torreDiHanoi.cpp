//verione iterativa della torre di hanoia
//hpc 19.04.2021
//SOSPESO

#include <iostream>
using namespace std;

void torreDiHanoi(int);

int main()
{
    int nDischi;

    cout << "inserisci numeri di dischi: ";
    cin >> nDischi;

    torreDiHanoi(nDischi);

    return 0;
}

void torreDiHanoi(int n)
{
    char a = 'A';
    char b = 'B';
    char c = 'C';
    int m = pow(2, n) - 1;

    if (n == 1)
        cout << a << " --> " << c << endl;
    else
    {
        for (int j = 0; j < m / 2; j++)
        {
        }
        cout << a << " --> " << c << endl;
        for (int j = 0; j < m / 2; j++)
        {
        }
    }
}