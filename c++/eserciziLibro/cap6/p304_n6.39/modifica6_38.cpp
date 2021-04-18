//modificare l'es 6.38 per contare numeri di tentativi
//tentativi < 10 ==> o conosci il segreto o sei nato con la camicia
//tentaivi == 10 ==> conosci il segreto
//tentativi > 10 ==> puoi fare di meglio!
//hpc 18.04.2021

#include <iostream>
using namespace std;

int main()
{
    int numeroDaIndovinare;
    int numeroInserito;
    char ch;
    int numeroTentativo = 0;

    while (ch != 'n')
    {
        srand(time(NULL));
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

            numeroTentativo++;
        }

        if (numeroInserito < 10)
            cout << "o conosci il segreto o sei nato con la camicia!\n"
                 << endl;
        else if (numeroTentativo == 10)
            cout << "conosci il segreto!\n"
                 << endl;
        else
            cout << "puoi fare di meglio!\n"
                 << endl;

        cout << "Bravissimo! Hai indovinato il numero!\nVoui giocare ancora(s/n)?" << endl;
        cin >> ch;
    }

    return 0;
}
