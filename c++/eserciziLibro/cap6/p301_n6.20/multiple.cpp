//funzione multiple che riceve una coppia di interi ew dertermina se il secondo e multiplo del primo
//restituisce boolean true o false
//hpc 17.04.2021

#include <iostream>
using namespace std;

bool multiple(int, int);

int main()
{
    int num1, num2;
    cout << "inseirisci due numeri interi (per determinare se il secondo è multipo del primo): ";
    cin >> num1 >> num2;
    if (multiple(num1, num2) == 1)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    return 0;
}

bool multiple(int n1, int n2)
{
    return n2 % n1;
}