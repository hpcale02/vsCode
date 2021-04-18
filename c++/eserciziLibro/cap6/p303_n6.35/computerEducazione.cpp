//generare dei numeri casuali e calcolare il prodotto dei due numeri
//quanto fa 6 per 3 ?
//se coretta stampare Ottimo e andare alla proissima domanda altrimenti
//stampa Riprova finche non viene inserito la risposta giusta
//hpc 18.04.2021

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, risposta;
    char ch;

    while (ch != 'n')
    {
        srand(time(0));

        num1 = rand() % 10;
        num2 = rand() % 10;

        cout << "quanto fa " << num1 << " per " << num2 << " ?" << endl;
        cin >> risposta;
        if (risposta != num1 * num2)
        {
            while (risposta != num1 * num2)
            {
                cout << "Mi dispiace, la risposta è sbagliata. Riporova!" << endl;
                cin >> risposta;
            }
        }
        else
        {
            cout << "Ottimo! La risposta è coretta!" << endl;
        }

        cout << "voi continuare? (y/n): ";
        cin >> ch;
    }

    return 0;
}