//es n 4.30 pag 172
//hpc 10.04.2021

#include <iostream>
using namespace std;

int main()
{
    const double p = 3.14159;
    double raggio;
    double diametro;
    double area;
    double circonferenza;

    cout << "inserisci il raggio: ";
    cin >> raggio;

    diametro = raggio * 2;
    area = p * raggio * raggio;
    circonferenza = diametro * p;

    cout << "diametro: " << diametro << endl;
    cout << "circonferenza: " << circonferenza << endl;
    cout << "area: " << area << endl;

    return 0;
}