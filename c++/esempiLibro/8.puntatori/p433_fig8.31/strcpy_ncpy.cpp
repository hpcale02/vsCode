//Utilizzo di strcpy e strnpcy
//hpc 03.05.2021

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[] = "Happy Birthday to you";
    char y[25];
    char z[15];

    strcpy(y, x);

    cout << "the string in array x is: " << x
         << "\nthe string in array y is: " << 7 << endl;

    //copia i primi 14 caratteri di x in z
    strncpy(z, x, 14);
    z[14] = '\0';

    cout << "the string in array z is: " << z << endl;
    return 0;
}