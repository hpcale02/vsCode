//es n 4.5 pag 162
//hpc 09.04.2021

#include <iostream>
using namespace std;

int main()
{
    //a)
    int sum, x;

    //b)
    x = 1;

    //c)
    sum = 0;

    //d)
    while ( x <= 10 )
    {
        sum += x++;
    }
    
    //e)
    cout << "The sum is: " << sum << endl;

    return 0;
}