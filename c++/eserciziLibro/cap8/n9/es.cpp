//hpc 03.05.2021

#include <iostream>

using namespace std;

int main()
{
    //a)
    const int SIZE = 5;
    unsigned int value[SIZE] = {2, 4, 6, 8, 10};

    //b)
    unsigned int *vPtr;

    //c)
    for (int i = 0; i < SIZE; i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;

    //d)
    vPtr = value;
    vPtr = &value[0];

    //e) puntatore/offset
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(vPtr + i) << " ";
    }
    cout << endl;

    //f) puntatore/offset con il nome dell'array come puntatore
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(value + i) << " ";
    }
    cout << endl;

    //g) array indicizzando il puntatore all'array
    for (int i = 0; i < SIZE; i++)
    {
        cout << vPtr[i] << " ";
    }
    cout << endl;

    //h) notazione con gli indici e il nome dell'array
    cout << value[4] << endl;
    //notazione puntatore/offset con il nome dell'a rray come puntatore
    cout << *(value + 4) << endl;
    //notazione con gli indici e il puntatore
    cout << vPtr[4] << endl;
    //notazione puntatore/offset
    cout << *(vPtr + 4) << endl;

    //i)
    vPtr = &value[0];
    cout << vPtr << endl;
    cout << vPtr + 3 << endl;

    //j)
    vPtr = &value[4];
    cout << vPtr << endl;
    cout << vPtr - 4 << endl;

    return 0;
}