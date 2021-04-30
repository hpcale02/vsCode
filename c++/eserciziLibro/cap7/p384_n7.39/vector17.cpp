//modificare l'es 7.17 lancio dei dati utilizzando un vector
//hpc 30.04.2021

#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

int sommaLancioDati();

int main()
{
    vector<int> frequency(11);
    for (int i = 0; i < 36000; i++)
    {
        int sum = sommaLancioDati();
        frequency[sum - 2]++;
    }

    for (int i = 0; i < frequency.size(); i++)
    {
        cout << "sum = " << i + 2 << ": " << frequency[i] << endl;
    }
    return 0;
}

int sommaLancioDati()
{
    int dato1, dato2;

    dato1 = 1 + rand() % 6;
    dato2 = 1 + rand() % 6;
    return dato1 + dato2;
}