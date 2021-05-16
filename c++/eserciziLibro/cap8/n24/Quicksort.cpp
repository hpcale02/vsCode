//Quiket sort
//a) Partizionamento ==> tutti i valori a sinistra sono minori e tutti i valori a destra sono maggiori
//b) Passo ricorsivo ==> ripetere il posso precedente
//hpc 16.05.2021

#include <iostream>
#include <cstdlib>
using namespace std;

void quickSort(int *const, int, int);
void swap(int *const, int *const);

int main()
{
    const int SIZE_ARRAY = 10;
    int numeri[SIZE_ARRAY] = {0};

    srand(time(0));

    cout << "ARRAY DISORDINATO" << endl;
    for (int i = 0; i < SIZE_ARRAY; i++)
    {
        numeri[i] = rand() % 500;
        cout << numeri[i] << " ";
    }

    cout << endl
         << endl;

    quickSort(numeri, 0, SIZE_ARRAY - 1);

    cout << "ARRAY ORDINATO" << endl;
    for (int i = 0; i < SIZE_ARRAY; i++)
        cout << numeri[i] << " ";
    cout << endl;

    return 0;
}

void quickSort(int *const arr, int init, int fin)
{

    int partition(int *const, int, int);

    if (init >= fin)
        return;

    int posizioneAttuale = partition(arr, init, fin);

    quickSort(arr, init, posizioneAttuale - 1);
    quickSort(arr, posizioneAttuale + 1, fin);
}

int partition(int *const arr, int init, int fin)
{
    int position = init;

    while (true)
    {
        while (arr[position] <= arr[fin] && position != fin)
            fin--;

        if (position == fin)
            return position;

        if (arr[position] > arr[fin])
        {
            swap(&arr[position], &arr[fin]);
            position = fin;
        }

        while (arr[position] >= arr[init] && position != init)
            init++;

        if (position == init)
            return position;

        if (arr[position] < arr[init])
        {
            swap(&arr[position], &arr[init]);
            position = init;
        }
    }
}

void swap(int *const n1Ptr, int *const n2Ptr)
{
    int temp = *n1Ptr;
    *n1Ptr = *n2Ptr;
    *n2Ptr = temp;
}