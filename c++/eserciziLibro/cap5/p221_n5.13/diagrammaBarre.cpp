//visualizzare ***** se verieme inserito 5
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "inserisci un numero tra 1 e 30: ";
        cin >> n;

        if(n < 1 || n > 30)
        cout << "numero incìvalido!" << endl;
    } while (n < 1 || n > 30);

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout <<endl;

    return 0;
}