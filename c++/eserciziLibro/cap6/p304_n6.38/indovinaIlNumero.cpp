//indovinare il numero a caso tra 1 e 1000
//hpc 18.04.2021

#include <iostream>
using namespace std;

int main()
{
    int numeroDaIndovinare;
    int numeroInserito;
    char ch;

    while (ch != 'n')
    {
        srand(time(0));
        numeroDaIndovinare = (1 + rand() % 1000);

        cout << "\nHo pensato un numero tra 1 e 1000.\nProva un po' a indovinarlo!\nDigita il tuo primo tentativo: ";
        cin >> numeroInserito;

        while (numeroInserito != numeroDaIndovinare)
        {
            if (numeroInserito < numeroDaIndovinare)
                cout << "Troppo basso. Riprova." << endl;
            else
                cout << "Troppo alto. Riprova." << endl;

            cin >> numeroInserito;
        }

        cout << "Bravissimo! Hai indovinato il numero!\nVoui giocare ancora(s/n)?" << endl;
        cin >> ch;
    }

    return 0;
}
