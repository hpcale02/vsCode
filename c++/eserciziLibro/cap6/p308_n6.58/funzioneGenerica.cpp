//funzione generica min per determinare il minore tra interi e double
//hpc 19.04.2021

#include <iostream>
using namespace std;

template <typename T>
T minimo(T n1, T n2)
{
    return (n1 < n2) ? n1 : n2;
}

int main()
{
    double num1, num2;
    cout << "inserisci due numeri: ";
    cin >> num1 >> num2;

    cout << "il più piccolo è " << minimo(num1, num2) << endl;

    return 0;
}
