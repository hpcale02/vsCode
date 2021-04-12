//es n 4.21 pag 169
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while ( i <= 10 )
    {
        cout << ( i % 2 ? "****" : "++++++++" ) << endl;
        i++;
    }

    return 0;
}