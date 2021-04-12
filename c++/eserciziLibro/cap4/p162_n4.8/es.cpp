//es n 4.8 pag 162
//hpc 09.04.2021

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int count = 1;
    int pow;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    pow = x;

    while ( count < y )
    {
        pow *= x;
        count++;
    }

    cout << "x ^ y = " << pow << endl;


    return 0;
}
