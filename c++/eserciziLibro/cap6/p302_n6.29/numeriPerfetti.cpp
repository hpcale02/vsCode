//funzione che determina se un numero è perfetto
//un numero è perfetto se la somma dei suoi fattori(incluso 1 escluso se stiesso) è = a il numero stesso
//hpc 17.04.2021

#include <iostream>
using namespace std;

void perfect(int);

int main()
{
    int n;
    cout << "inserisci il numero: ";
    cin >> n;
    perfect(n);

    return 0;
}

void perfect(int n)
{
    int somma = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            somma += i;
        }
    }

    if (somma == n)
        cout << "è un numero perfetto" << endl;
    else
        cout << "non è un numero perfetto" << endl;
}