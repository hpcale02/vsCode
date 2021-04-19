//triplicare la variabile count con due funzioni differenti
//hpc 19.04.2021

#include <iostream>
using namespace std;

double tripleCallByvalue(double);
void tripleByReference(double &);

int main()
{
    double n, m;
    cin >> n >> m;

    cout << "n triplicato " << tripleCallByvalue(n) << endl;

    tripleByReference(m);

    cout << "m triplicato " << m << endl;

    return 0;
}

double tripleCallByvalue(double n)
{
    return 3 * n;
}

void tripleByReference(double &m)
{
    m = 3 * m;
}