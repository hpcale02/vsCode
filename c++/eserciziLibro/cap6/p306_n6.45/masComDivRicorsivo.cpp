//funzione ricorsiva gcd che restituisce il MCD di due numeri che
//y = 0 ==> gcd(x, y) = x
//altrimenti gcd(y, x % y)
//hpc 18.04.2021

#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int n1, n2;
    cout << "inserisic due numeri: ";
    cin >> n1 >> n2;

    cout << "MCD = " << gcd(n1, n2) << endl;
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}