//fig 4.21 pag 154
//preincremento(++a) e postincremento(++a)
//hpc 09.04.2021

#include <iostream>
using namespace std;

int main()
{
    int a;

    //postincremento
    a = 5;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << endl;

    //preincremento
    a = 5;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;

    return 0;
}