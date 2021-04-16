//verificare i funzioni di cmath pag 228
//hpc 16.04.2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //ceil(x) ==> arrotonda x al più piccolo inrtero non minore di x
    cout << "ceil(9.8): " << ceil(9.8) << endl;
    cout << "ceil(-9.8): " << ceil(-9.8) << endl;

    //cos(x) ==> coseno di x
    cout << "cos(0): " << cos(0) << endl;

    //exp(x) ==> funzione esponenziale x
    cout << "exp(1): " << exp(1) << endl;
    cout << "exp(2): " << exp(2) << endl;

    //fabs(x) ==> valore assoluto di x
    cout << "fabs(-8.76): " << fabs(-8.76) << endl;

    //floor(x) ==> arrotondare x al più grande numero nono maggiore di x
    cout << "floor(9.2): " << floor(9.2) << endl;
    cout << "floor(-9.8: " << floor(-9.8) << endl;

    //fmod(x, y) ==> resto di x/y (valore a virgola mobile)
    cout << "fmod(2.5, 1.2): " << fmod(2.5, 1.2) << endl;

    //log(x) ==> logaritmo naturale di x (in base e)
    cout << "log(2.718282): " << log(2.718282) << endl;
    cout << "log(7.389056): " << log(7.389056) << endl;

    //log10(x) ==> logaritmo di x (in base 10)
    cout << "log10(10): " << log10(10) << endl;
    cout << "log10(100): " << log10(100) << endl;

    //pow(x, y) ==> x elevato all y-esima
    cout << "pow(2, 7): " << pow(2, 7) << endl;
    cout << "pow(9, 5): " << pow(9, .5) << endl;

    //sin(x) ==> seno di x
    cout << "sin(0): " << sin(0) << endl;

    //sqrt(x) ==> radice quadrato di x
    cout << "sqrt(9): " << sqrt(9) << endl;

    //tan(x) ==> tangente di x
    cout << "tan(0): " << tan(0) << endl;
}