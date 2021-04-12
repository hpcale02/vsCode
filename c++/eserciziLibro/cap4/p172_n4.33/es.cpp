//es n 4.33 pag 172
//hpc 10.04.2021

#include <iostream>
using namespace std;

void se(int lato1, int lato2, int lato3)
{
    if (lato1 * lato1 + lato2 * lato2 == lato3 * lato3)
        cout << "è un trioangolo rettangolo" << endl;
    else
        cout << "non è un triangolo rettangolo" << endl;
}

int main()
{
    double lato1;
    double lato2;
    double lato3;

        cout << "inserisci i lati: ";
        cin >> lato1 >> lato2 >> lato3;

        if ( lato1 > lato2 && lato1 > lato3 )
        {
            se( lato2, lato3, lato1 );
        }
        else if ( lato2 > lato3)
        {
            se( lato1, lato3, lato2 );
        }  
        else
        {
            se( lato1, lato2, lato3 );
        }

    return 0;
}