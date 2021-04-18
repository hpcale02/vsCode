//inserire un numero e stampare quel numero inverso
//es 1234 ==> 4321
//hpc 17.04.2021

#include <iostream>
#include <string>
using namespace std;

int cifreInverse(string);

int main()
{
    string numero;

    cout << "numero: ";
    cin >> numero;

    cout << cifreInverse(numero) << endl;

    return 0;
}

int cifreInverse(string num)
{
    int numeroInverso = 0;
    int a = 1;
    for (int i = 0; i < num.size(); i++)
    {
        numeroInverso += (static_cast<int>(num[i])-48) * a;
        a *= 10;
    }

    return numeroInverso;
}