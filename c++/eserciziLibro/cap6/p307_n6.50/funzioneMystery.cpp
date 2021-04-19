//hpc 19.04.2021

#include <iostream>
using namespace std;

int mystery(int, int);

int main()
{
    int x, y;

    cout << "inserisci due numeri: ";
    cin >> x >> y;
    cout << "il risultato è " << mystery(x, y) << endl;

    return 0;
}

int mystery(int a, int b)
{
    if (b == 1 || b == -1)
        return a;
    else
    {
        if (b > 0)
            return a + mystery(a, b - 1);
        else
            return a + mystery(a, b + 1);
    }
}