//stampare un quadrato di *
//hpc 17.04.2021

#include <iostream>
using namespace std;

void stampaQuadrato(int, char);

int main()
{
    int lato;
    char ch;

    cout << "inserisci la misura del lato del quadrato: ";
    cin >> lato;
    cout << "inseirisci il caratterte: ";
    cin >> ch;

    stampaQuadrato(lato, ch);

    return 0;
}

void stampaQuadrato(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}