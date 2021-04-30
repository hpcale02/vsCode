//visualizzare un array con una funzioen riccorsiva
//hpc 30.04.2021

#include <iostream>
using namespace std;

void printArray(int[], int, int);

int main()
{
    const int size = 10;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printArray(array, 0, 10);
    return 0;
}

void printArray(int arr[], int start, int end)
{
    if (start == end - 1)
    {
        cout << arr[start];
    }

    else
    {
        cout << arr[start] << " ";
        start++;
        printArray(arr, start, end);
    }
}