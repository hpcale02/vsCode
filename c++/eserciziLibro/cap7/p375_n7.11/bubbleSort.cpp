//i valori più piccoli salgono sulla cima dell'array
//confrontare i due elementi e scambiare di posto se il secondo è minore del numeroPrimo
//hpc 21.04.2021
#include <iostream>
using namespace std;

// int main()
// {
//     const int arraySize = 10;
//     int arr[arraySize] = {23, 34, 21, 4, 12, 43, 66, 96, 1, 2};

//     for (int i = 0; i < arraySize; i++)
//     {
//         int sosArray = arr[i];
//         int sosIndice = i;

//         while ((sosIndice > 0) && (arr[sosIndice - 1] > sosArray))
//         {
//             arr[sosIndice] = arr[sosIndice - 1];
//             sosIndice--;
//         }
//         arr[sosIndice] = sosArray;
//     }

//     for (int i = 0; i < arraySize; i++)
//     {
//         cout << arr[i] << "\t";
//     }

//     cout << endl;

//     return 0;
// }

int main()
{
    const int arraySize = 10;
    int arr[arraySize] = {23, 34, 21, 4, 12, 43, 66, 96, 1, 2};
    int size = arraySize;

    for (int j = 0; j < arraySize; j++)
    {
        int a = 0;
        for (int i = 0; i < size; i++)
        {
            if ((arr[i] > 0) && (arr[i - 1] > arr[i]))
            {
                int sos = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = sos;
                a++;
            }
        }
        
        if (a == 0)
            break;

        for (int i = 0; i < arraySize; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
        size--;
    }

    return 0;
}