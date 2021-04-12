//modificare fig 5.14
//hpc 12.04.2021

#include <iostream>
using namespace std;

int main()
{
    int count;

    for (count = 1; count <= 10; count++)
    {
        if (count == 5)
            count++;

            cout << count << " ";
    }

    cout << endl;
    return 0;
}