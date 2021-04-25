//array monodimensionale con numeri positivi da ordinare
//array bidimensionale cno rige 0-9 e colonne 0 - n-1
//n = numero di valore da ordinare
//funzione bucketSort ==> riceve come argomenti un array di interi e la sua dimensione
//a) pone ogni valore dell'array monodimensionale in una riga dell'array di bucket
//sulla base dell'unità esempio 97 = 7; 3 = 3; 100 = 00
//b) copiare i valori di bucket nell'array iniziale
//c) ripetere il ciclo per le decine, centinmaia ect...

#include <iostream>
#include <iomanip>
using namespace std;

void bucketSort(int[], int);

int main()
{
    int arr[5] = {100, 48, 28, 43, 65};
    bucketSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;

    return 0;
}

void bucketSort(int arr[], int n)
{
    int bucket[10][n - 1];
    int div = 10;
    int cont;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        cont = arr[i] % div;
    }
}