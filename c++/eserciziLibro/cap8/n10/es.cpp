//hpc 03.05.2021

#include <iostream>
using namespace std;

int main()
{
    long value1 = 200000, value2;

    //a)
    long *longPtr;

    //b)
    longPtr = &value1;

    //c)
    cout << "valore a cui punta longPty è " << *longPtr << endl;

    //d)
    value2 = *longPtr;

    //e)
    cout << "valore2 = " << value2 << endl;

    //f)
    cout << "indirizzo di valore 1 = " << &value1 << endl;

    //g)
    cout << "indirizzo ccontenuto in longPtr = " << longPtr << endl;

    return 0;
}