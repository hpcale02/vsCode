//trovare il valore più piccolo in un array con una funzione ricorsiva del
//hoc 30.04.2021

#include <iostream>
using namespace std;

int recursiveMinimum(int[], int, int, int);

int main()
{
    int arr[10] = {12, 34, 45, 65, 7, 34, 453, 23, 33, 57};

    cout << "il minimo = " << arr[recursiveMinimum(arr, 0, 10, 0)] << endl;
    return 0;
}

int recursiveMinimum(int num[], int start, int end, int min)
{
    if (start < end - 1)
    {
        if (num[start + 1] < num[min])
        {
            min = start;
        }
        return recursiveMinimum(num, start + 1, end, min);
    }
    else
        return min;
}