//scrivede delle istruzioni
//hpc 21.04.2021

#include <iostream>
using namespace std;

int main()
{
    int counts[10] = {0};

    int bonus[15];
    for (int i = 0; i < 15; i++)
        bonus[i]++;

    double monthlyTemperatures[12];
    for (int i = 0; i < 12; i++)
        cin >> monthlyTemperatures[i];

    int bestScores[5];
    for (int i = 0; i < 5; i++)
        cout << bestScores[i] << endl;

    return 0;
}