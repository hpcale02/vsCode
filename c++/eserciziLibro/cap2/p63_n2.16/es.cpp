//esercizio libro pag.63 num.2.16
//somma differenza prodotto quoziuente di due numeri
//hpc 05.04.2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int number1, number2; //dichiarare i variabili

    cout << "inserisci due numeri interi(primo più grande del secondo): "; //stampare richiesta
    cin >> number1 >> number2; //inserire variabili

    cout << "la somma dei due numeri è " << number1 + number2 << endl;
    cout << "la differenza dei due numeri è " << number1 - number2 << endl;
    cout << "il prodotto dei due numeri è " << number1 * number2 << endl;
    cout << "il quoziente dei due numeri è " << number1 / number2 << "con resto " << number1 % number2 << endl;

    return 0;
    }   