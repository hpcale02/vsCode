//Ordinamento per selezione con i puntatori a funzione
//hpc 02.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int[], const int, bool (*)(int, int));
void swap(int *const, int *const);
bool ascending(int, int);
bool descending(int, int);

int main()
{
    const int arraySize = 10;
    int order;
    int counter;
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    cout << "Enter 1 to sort in sceding order,\nEnter 2 to sort in desceding order: ";
    cin >> order;

    cout << "\nData items in originarl order" << endl;
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << a[i];

    if (order == 1)
    {
        selectionSort(a, arraySize, ascending);
        cout << "\nData items in asceding oreder" << endl;
    }
    else
    {
        selectionSort(a, arraySize, descending);
        cout << "\nData items in descding order" << endl;
    }

    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << a[i];

    cout << endl;
    return 0;
}

void selectionSort(int work[], const int size, bool (*compare)(int, int))
{
    int smallestOrLargest;

    for (int i = 0; i < size - 1; i++)
    {
        smallestOrLargest = i;

        for (int j = i + 1; j < size; j++)
        {
            if (!(*compare)(work[smallestOrLargest], work[j]))
                smallestOrLargest = j;
        }

        swap(&work[smallestOrLargest], &work[i]);
    }
}

void swap(int *const element1Ptr, int *const element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

bool ascending(int a, int b)
{
    return a < b;
}

bool descending(int a, int b)
{
    return a > b;
}