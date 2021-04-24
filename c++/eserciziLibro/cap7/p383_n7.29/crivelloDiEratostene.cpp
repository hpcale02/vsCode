//un metodo per trovare numeri primi:
//a) array inizializzato a 1(true), gli array con indice numeri primi rimadgono a 1 mentre altre diventano a 0
//b) partire da inidice 2, ogni volta che si trova un array = 1 ==> impostare a 0 tutti gli elementi che hanno indice multiplo

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void inizializzareArray(int[]);
void stampareArray(int[]);
void numeriPrimi(int[], int);
void stampaIndice(int[]);

int main()
{
    int arr[1000];
    int n;

    inizializzareArray(arr);
    for (n = 2; n < 1000; n++)
    {
        if (arr[n] == 1)
        {
            int div = 1, conta = 0;

            while (conta <= 1 && div <= sqrt(n))
            {
                if (n % div == 0)
                {
                    //se trova divisori incrementa il contatore dei divisori
                    conta++;
                }
                div++;
            }
            if (conta == 1)
            {
                numeriPrimi(arr, n);
            }
        }
    }
    stampaIndice(arr);

    return 0;
}

void stampaIndice(int arr[])
{
    for (int i = 1; i < 1000; i++)
    {
        if (arr[i] == 1)
            cout << setw(4) << i;
        else
            cout << setw(4) << 0;

        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl;
}

void numeriPrimi(int arr[], int n)
{
    for (int i = n * 2; i < 1000; i++)
    {
        if (i % n == 0)
        {
            arr[i] = 0;
        }
    }
}

void stampareArray(int arr[])
{
    for (int i = 1; i < 1000; i++)
    {
        cout << arr[i] << " ";
        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl
         << endl;
}

void inizializzareArray(int arr[])
{
    for (int i = 1; i < 1000; i++)
    {
        arr[i] = 1;
    }
}