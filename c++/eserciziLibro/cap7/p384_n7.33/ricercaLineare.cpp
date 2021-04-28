//ricerca lineare ricerca di un numero in un array con funzione linearSearch se viene ritrovato il numro la funzioen ritorna l'indice altrimeti -1
//hpc 28.04.2021

#include <iostream>
using namespace std;

int linearSearch(int[], int, int);

int main()
{
    const int arraySize = 5;
    int numeri[arraySize] = {1,
                             2,
                             3,
                             4,
                             5};
    int num;

    cout << "inserisci numero da cercare: ";
    cin >> num;

    if (linearSearch(numeri, arraySize - 1, num) == -1)
    {
        cout << "numero non trovato" << endl;
    }
    else
    {
        cout << "il numero si trova all'inidice " << linearSearch(numeri, arraySize - 1, num) << endl;
    }
}

int linearSearch(int arr[], int n, int num)
{
    if (n >= 0 && arr[n] == num)
    {
        return n;
    }
    else if (arr[n] != num)
    {
        return linearSearch(arr, n - 1, num);
    }
    else
    {
        return -1;
    }
}