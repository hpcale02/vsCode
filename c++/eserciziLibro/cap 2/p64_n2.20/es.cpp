//esercizio libro pag.64 num.2.20
//leggere il raggio scrivere il diametro, circonferenza e l'area
//hpc 05.04.2021

#include <iostream>
using namespace std;

int main(){
    float raggio;
    const float p = 3.14159;

    cout << "inserisci il raggio del cerchio: ";
    cin >> raggio;

    cout << "il diametro è " << raggio * 2 << endl;
    cout << "la circonferenza è " << 2 * p * raggio << endl;
    cout << "l'area è " << p * raggio * raggio << endl;

    return 0;
}