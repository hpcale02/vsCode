//es n 4.3 pag 162
//hpc 09.04.2021

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, count, total, q, divisor;

    //a)
    z = y + x++;

    //b)
    count = 12;
    if ( count > 10 )
        cout << "Count è maggiore di 10! " << endl;

    //c)
    total -= ++x;

    //d)
    q = q % divisor;
    q %= divisor;

    return 0;
}