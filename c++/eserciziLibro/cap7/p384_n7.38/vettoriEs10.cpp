//utilizzare il vector per l'es 7.10 
//hpc 30.04.2021

#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;

int main()
{
    vector<int> frequenza(10);

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

    for (int i = 1; i < frequenza.size(); i++)
    {
        if (i != 9)
            cout << "$ " << i * 100 + 100 << "-$ " << i * 100 + 199 << ":\t" << frequenza[i] << endl;
        else
            cout << "$ " << i * 100 + 100 << " e oltre:\t" << frequenza[i] << endl;
    }
    return 0;
}