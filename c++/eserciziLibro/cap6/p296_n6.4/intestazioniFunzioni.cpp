//
//scrivere le intestazioni delle funzioni
//hpc 16.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

double hypotenuse(double, double);
int smallest(int, int, int);
void instructions();
double intToDouble(int);

int main()
{
    double number1, number2;
    int n1, n2, n3;
    int i;

    cout << "inserisci due numeri a virgolamoibile con due numeri dopo la virgola: ";
    cin >> number1 >> number2;
    cout << hypotenuse(number1, number2) << endl;

    cout << "inserisci 3 numeri interi per trovare il più piccolo: ";
    cin >> n1 >> n2 >> n3;
    cout << smallest(n1, n2, n3) << endl;

    instructions();
    
    cout << "inserisci un numero intero: ";
    cin >> i;
    cout << intToDouble(i) << endl;

    return 0;
}

double hypotenuse(double numero1, double numero2)
{
    return numero1 + numero2;
}

int smallest(int numero1, int numero2, int numero3)
{
    int smallest;
    smallest = numero1;

    if (numero2 < smallest)
        smallest = numero2;

    if (numero3 < smallest)
        smallest = numero3;

    return smallest;
}

void instructions()
{
    cout << "================================================================" << endl;
}

double intToDouble(int x)
{
    static_cast<double>(x);
    return x;
}