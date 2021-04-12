//esercizio libro pag.64 num.2.25
//con due numero interi e vedere se il primo è multiplo del secondo
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    //dichiarazione variabili
    int number1, number2;

    //inserimento variabili
    cout << "inserisci due numeri interi: ";
    cin >> number1 >> number2;

    //1° multiplo del 2°
    if(number1 % number2 == 0)
        cout << "il primo numero è multiplo del secondo\n";

    //1° non multiplo del 2°
    if (number1 % number2 != 0)
        cout << "il primo numero non è multiplo del secondo\n";
    
    return 0;
}