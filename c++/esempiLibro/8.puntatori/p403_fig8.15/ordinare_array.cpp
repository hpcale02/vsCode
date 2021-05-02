//ordina l'array dal più piccolo al più grande
//hpc 02.05.2021

#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int *const, const int);
void swap(int *const, int *const);

int main()
{
    const int arraySize = 10;
    int a[arraySize] = {2,
                        6,
                        4,
                        8,
                        10,
                        12,
                        89,
                        68,
                        45,
                        37};

    cout << "i valori in orgine originario: " << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << a[i];
    }

    selectionSort(a, arraySize);

    cout << "\nI valori ordinato:" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << a[i];
    }

    cout << endl;
    return 0;
}
void selectionSort(int *const array, const int size)
{
    int smallest;

    for (int i = 0; i < size; i++)
    {
        smallest = i;

        for (int index = i + 1; index < size; index++)
        {
            if (array[index] < array[smallest])
            {
                smallest = index;
            }

            swap(&array[i], &array[smallest]);
        }
    }
}

void swap(int *const element1Ptr, int *const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}