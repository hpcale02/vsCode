//classe Phone Number con ridefinizone dei operatori >> e <<
//hpc 28.05.2021

#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main(){
    PhoneNumber phone; //oggetto numero telefono
    cout << "Inserisci il numero in formato (123) 456-78790:"<< endl;

    //operatore >> ridefinito
    cin >> phone;
    
    cout << "Il numero inserito è: ";
    
    //opertore << ridefinito
    cout << phone << endl;

    return 0;
}