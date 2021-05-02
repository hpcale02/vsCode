//4 metodi per riferirsi agli elemnenti di un array
//hpc 02.05.2021

#include <iostream>
using namespace std;

int main()
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    cout << "Array b printed with:\n\nArray subscript notation" << endl;
    for (int i = 0; i < 4; i++)
        cout << "b[" << i << "] = " << b[i] << endl;

    cout << "\nPointer/offset notation where the pointer is the array name" << endl;
    for (int i = 0; i < 4; i++)
        cout << "*(b + " << i << ") = " << *(b + i) << endl;

    cout << "\nPointer/offset notation" << endl;
    for (int i = 0; i < 4; i++)
        cout << "bPtr[" << i << "] = " << bPtr[i] << endl;

    cout << "\nPointer/offset notation" << endl;
    for (int i = 0; i < 4; i++)
        cout << "*(bPtr + " << i << ") = " << *(bPtr + i) << endl;

    return 0;
}