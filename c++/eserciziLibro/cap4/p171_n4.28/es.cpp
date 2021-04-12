//es n 4.289 pag 171
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j;
    while ( i <= 8 )
    {
        j = 1;

        while ( j <= 8 )
        {
            if ( i % 2 != 0)
                cout << "* ";
            else
                cout << " *";
                
            j++;
        }

        cout << endl;

        i++;
    }

    return 0;
}