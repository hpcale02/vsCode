//es n 4.25 pag 171
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int lato;
    int i = 0;
    int j;
    int h;

    cout << " inserisci misura del lato: ";
    cin >> lato;

    while ( i < lato)
    {

        if ( i == 0 || i == lato-1)
        {
            h = 0;
            while ( h < lato)
            {
                cout << "*";
                h++;
            }

            cout << endl;
        }
        else
        {
            j = 0;
            while ( j < lato )
            {
                if ( j == 0 || j == lato-1 )
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

                j++;
            }

            cout << endl;
        }   

        i++;   
    }

    return 0;
}