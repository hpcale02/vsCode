//Fig 6.27 pag 275
//verifica della funzione maximum(templat)
//hpc 16.04.2021

#include <iostream>
using namespace std;

#include "maximum.h"

int main()
{
    int int1, int2, int3;
    cout << "Input 3 integer values: ";
    cin >> int1 >> int2 >> int3;
    cout << "the maximum integer value is: " << maximum(int1, int2, int3) << endl;

    double double1, double2, double3;
    cout << "Input 3 double value: ";
    cin >> double1 >> double2 >> double3;
    cout << "the maximum double value is: " << maximum(double1, double2, double3) << endl;

    char char1, char2, char3;
    cout << "Input 3 char value: ";
    cin >> char1 >> char2 >> char3;
    cout << "the maximum char value is: " << maximum(char1, char2, char3) << endl;

    return 0;
}