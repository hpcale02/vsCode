//analisi diun sontaggio
//hpc 20.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int responseSize = 40;
    const int frequencySize = 11;

    const int response[responseSize] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    int frequency[frequencySize] = {0};

    //legge tutti valori di response
    for (int answer = 0; answer < responseSize; answer++)
    {
        //segnare quante volte un numero tra 1 e 1o
        frequency[response[answer]]++;
    }

    cout << "Rating" << setw(17) << "Frequency" << endl;

    for (int rating = 1; rating < frequencySize; rating++)
    {
        cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
    }

    return 0;
}