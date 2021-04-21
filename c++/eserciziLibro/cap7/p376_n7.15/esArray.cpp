//leggere 20 numerio convalidati (10 - 100)
//non deve essere inserito precedentemente
//non ben compreso il problema
//hpc 21.04.2021

#include <iostream>
using namespace std;

int main()
{
    const int arraySize = 20;
    int num[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        do
        {
            cin >> num[i];
        } while (num[i] <= 100 && num[i] >= 10);
    }
}