//funzione inline che calcola l'area
//hpc 19.04.2021

#include <iostream>
using namespace std;

inline double areaCerchio(double);

int main()
{
    double raggio;

    cout << "inserisci il raggio: ";
    cin >> raggio;

    cout << " area = " << areaCerchio(raggio) << endl;

    return 0;
}

inline double areaCerchio(double r){
    const double P = 3.14159;
    return P * r * r;
}