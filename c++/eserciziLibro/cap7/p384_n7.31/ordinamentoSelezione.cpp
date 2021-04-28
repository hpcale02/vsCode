//ordinamento per selezione trovare l'elemnento più piccolo dell'array e scambiato di posto con il primo elemento
//arrray di n numeri occore n-1 passsaggi quando si arriva a un array che contiene un solo elemento l'aray si considera ordinato
//hpc 28.04.2021

#include <iostream>
using namespace std;

int selectionSort(int[], int);

void displayArray(int[], int);

int main()
{
    int arr[5] = {443, 54, 2847, 487, 827};

    selectionSort(arr, 5);
    displayArray(arr, 5);

    return 0;
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int selectionSort(int arr[], int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        int sos;
        int min = arr[n];
        int k = n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                k = i;
            }
        }
        sos = arr[n];
        arr[n] = arr[k];
        arr[k] = sos;
        selectionSort(arr, n - 1);
    }
}