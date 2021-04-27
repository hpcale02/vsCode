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

void bucketSort(int[], const int);

int main()
{
    const int arrSize = 5;
    int arr[arrSize] = {1003, 4805, 2805, 4304, 6545};
    bucketSort(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;

    return 0;
}

void bucketSort(int arr[], const int n)
{
    const int riga = 10;
    int bucket[riga][n];

    //far diventare la matrice tutti -1
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < n; j++)
        {
            bucket[i][j] = -1;
        }
    }

    int div = 1;
    int count = 0;

    do
    {
        int a = 0;

        //assegnare arr[] a bucket[][]
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((arr[j] / div) % 10 == i)
                {
                    bucket[i][j] = arr[j];
                    cout << bucket[i][j] << " " << arr[j] << endl;
                }
            }
        }

        //ridare i valori del bucket[][] a arr[]
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (bucket[i][j] != -1)
                {
                    cout << bucket[i][j] << " " << arr[a] << endl;
                    arr[a] = bucket[i][j];
                    bucket[i][j] = -1;
                    cout << arr[a] << endl;
                    a++;
                }
            }
        }

        count++;
        div *= 10;

    } while (count < 4);
}