//esercizio libro pag.63 num.2.18
//confrontare due numeri per vedere quale è maggiore o se sono uguali
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    int number1, number2; //dichiarare i variabili

    cout << "inserisci due numeri interi: ";
    cin >> number1 >> number2;

    //vedere quale numero è più grande
    if(number1 > number2)
        cout << number1 << " è il più grande\n";
    else
        cout << number2 << " è il più grande\n";
    
    //se sono due numeri uguali
    if(number1 == number2)
        cout << "I numeri sono uguali\n";

    return 0;
}