//esercizio libro pag.64 num.2.24
//questo programma indice se il numero intero inserito è pari o dispari
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    //dichiarare la variabile
    int number;

    //inserire il valore
    cout << "inserisci un numero intero: ";
    cin >> number;

    //numero pari
    if(number % 2 == 0)
        cout << "il numero è pari\n";
    
    //numero dispari
    if(number % 2 != 0)
        cout << "il numero è dispari\n";

    return 0;
}