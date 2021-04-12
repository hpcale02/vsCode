//esercizio libro pag.65 num.2.28
//un numero intero di 5 cifre e separare i numero es 12345 ==> 1   2   3   4   5
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    //dichiarazione variabile
    int number, number1, number2, number3, number4;

    //inserire variabile
    cout << "inserisci un numero di 5 cifre: ";
    cin >> number;

    number1 = number / 10000;
    number %= 10000;

    number2 = number / 1000;
    number %= 1000;

    number3 = number / 100;
    number %= 100;

    number4 = number / 10;
    number %= 10;

    cout << number1 << "   " << number2 << "   " << number3 << "   " << number4 << "   " << number << "   " << endl;

    return 0;
}