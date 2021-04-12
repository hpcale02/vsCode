//esercizio libro pag.63 num.2.19
//tre interi e la somma, la media, il prodotto, i pumero più piccolo e il più grande
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    int number1, number2, number3; //dichiarare i variabili

    cout << "insersci tre numeri interi: ";
    cin >> number1 >> number2 >> number3;

    cout << "la somma è " << number1 + number2 + number3 << endl;
    cout << "la media è " << (number1 + number2 + number3) / 3 << endl;
    cout << "il prodotto è " << number1 * number2 * number3 << endl;

    if(number1 > number2){
        if(number1 > number3)
            cout << "il più grande è " << number1 << endl;
    }
    if(number2 > number1){
        if(number2 > number3)
            cout << "il più grande è " << number2 << endl;
    }
    if(number3 > number1){
        if(number3 > number2)
            cout << "il più grande è " << number3 << endl;
    }

    if(number1 < number2){
        if(number1 < number3)
            cout << "il più piccolo è " << number1 << endl;
    }
    if(number2 < number1){
        if(number2 < number3)
            cout << "il più piccolo è " << number2 << endl;
    }
    if(number3 < number1){
        if(number3 < number2)
            cout << "il più piccolo è " << number3 << endl;
    }

    return 0;
}