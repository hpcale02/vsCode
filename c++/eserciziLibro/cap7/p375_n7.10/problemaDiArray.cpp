//i rapressentanti prendono $200 q settimana più il 9% di commissione sulle vendite settimanali
//se vende $5000 prende $200 piu il 9% di $5000 quindi $650
//hpc 21.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10;
    int frequenza[arraySize] = {0};

    int venditaSettimanale;
    int totaleSaldoSettimana;
    while (venditaSettimanale != -1)
    {
        cout << "inserisci la vendita settimanale del rapressentante(-1 to exit): ";
        cin >> venditaSettimanale;

        totaleSaldoSettimana = 200 + 9 * (venditaSettimanale / 100);
        if (totaleSaldoSettimana < 1100)
            frequenza[totaleSaldoSettimana/100 - 1]++;
        else
            frequenza[9]++;
    }

    for (int i = 1; i < arraySize; i++)
    {
        if (i != 9)
            cout << "$ " << i * 100 + 100 << "-$ " << i * 100 + 199 << ":\t" << frequenza[i] << endl;
        else
            cout << "$ " << i * 100 + 100 << " e oltre:\t" << frequenza[i] << endl;
    }
    return 0;
}