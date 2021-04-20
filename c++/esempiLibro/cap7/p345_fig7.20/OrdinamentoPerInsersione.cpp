//ordinare i elenti di un array in ordine crescnete
//hpc 20.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10;
    int arr[arraySize] = {34,
                          56,
                          4,
                          10,
                          77,
                          51,
                          93,
                          30,
                          5,
                          52};
    int insert; // cariabvile temporanea per elemento da inserire

    cout << "array disordinata:" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << arr[i];
    }

    //ordinare array
    for (int i = 1; i < arraySize; i++)
    {
        int sostitutoArray = arr[i];
        int sostitutoIndice = i;

        while ((sostitutoIndice > 0) && sostitutoArray < arr[sostitutoIndice - 1])
        {
            arr[sostitutoIndice] = arr[sostitutoIndice - 1];
            sostitutoIndice--;
        }

        arr[sostitutoIndice] = sostitutoArray;
    }

    cout << "\narray ordinati:" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << arr[i];
    }

    cout << endl;

    return 0;
}