//esercizio libro pag.64 num.2.27
//static_cast <int> corrispondenza dei caratteri con nunmeri
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    //Dichiarazione varaibile
    char carattere;

    //inserire valori
    cout << "inserisci una carattere: ";
    cin >> carattere;

    cout << carattere << endl;
    //per indicare in numeri il valore di una carattere
    cout << static_cast < int > (carattere) << endl;

    return 0;
}