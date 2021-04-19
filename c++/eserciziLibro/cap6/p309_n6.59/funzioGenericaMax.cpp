//funzione generica che determini il max tra due numeri o caratteri 
//hpc 19.04.2021

#include<iostream>
using namespace std;

template<typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    char a, b;
    int n1, n2;
    double d1, d2;

    cout << "inserisci due caratteri: ";
    cin >> a >> b;
    cout << "max = " << maximum(a, b) << endl;

    cout << "inserisci due numeri interi: ";
    cin >> n1 >> n2;
    cout << "max = " << maximum(n1, n2) << endl;

    cout << "inserisci due a virgola mobile: ";
    cin >> d1 >> d2;
    cout << "max = " << maximum(d1, d2) << endl;

    return 0;
}