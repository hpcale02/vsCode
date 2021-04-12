//es n 4.17 pag 168
//hpc 09.04.2021

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int max = 0;
    int nPezzi;

    while ( i < 10 )
    {
        cout << "inserisci il numero dei pezzi venduti: ";
        cin >> nPezzi;
        if ( nPezzi > max )
            max = nPezzi;
        
        i++;
    }

    cout << "il numero dei pezzi venduto più grande è " << max << endl;

    return 0;
}