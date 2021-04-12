//es n 4.19 pag 169
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int max = 0;
    int nPezzi;
    int max2;

    while ( i < 10 )
    {
        cout << "inserisci il numero dei pezzi venduti: ";
        cin >> nPezzi;
        if ( nPezzi > max )
        {
            max2 = max;
            max = nPezzi;
        }  
            
        
        i++;
    }

    cout << "i primi due numeri più grande sono " << max2 << " " << max << endl;

    return 0;
}