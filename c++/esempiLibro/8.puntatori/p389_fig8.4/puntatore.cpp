//Utilizzo diegli operatoiri * e &
//hpc 02.05.2021

#include<iostream>
using namespace std;

int main(){
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "indirizzo di a: " << &a
         << "\nil valore di aPtr: " << aPtr
         << "\n\nil valore di a: " << a
         << "\nil valore di *aPtr: " << *aPtr
         << "\n\nVedere il verso di * e &. "
         << "\n&*aPtr: " << &*aPtr
         << "\n*&aPtr: " << *&aPtr << endl;

    return 0;
}