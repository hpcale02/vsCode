//aggiornare il programma 3.36 contando le giuste e errate
//se le risposte correte sono minjore di 75% allora stampare Chiedete unm aiutpo al vostro professore
//hpc 18.04.2021

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, risposta;
    char ch;
    int nCommento;
    int coretta = 0;
    int sbagliata = 0;
    int tot = 0;

    while (ch != 'n')
    {
        srand(time(0));

        num1 = rand() % 10;
        num2 = rand() % 10;

        cout << "quanto fa " << num1 << " per " << num2 << " ?" << endl;
        cin >> risposta;
        while (risposta != num1 * num2)
        {
            nCommento = rand() % 4;
            switch (nCommento)
            {
            case 0:
                cout << "No. Riporova!" << endl;
                break;
            case 1:
                cout << "Sbagliato. Prova ancora!" << endl;
                break;
            case 2:
                cout << "Non ti arrendere, riprova!" << endl;
                break;
            case 3:
                cout << "Niente da fare. Prova ancora!" << endl;
                break;
            }

            sbagliata++;

            cin >> risposta;
        }

        coretta++;
        nCommento = rand() % 4;
        switch (nCommento)
        {
        case 0:
            cout << "Bravo!" << endl;
            break;
        case 1:
            cout << "Eccelente!" << endl;
            break;
        case 2:
            cout << "Ottimo lavoro!" << endl;
            break;
        case 3:
            cout << "Continua così!" << endl;
            break;
        }

        cout << "voi continuare? (y/n): ";
        cin >> ch;
    }

    tot = coretta + sbagliata;
    // x : 100 = coretta ： tot

    if (coretta * 100 / tot < 75)
        cout << "Chiedete un aiuto al vostro professore!" << endl;
    else
        cout << "sei bravissimo!" << endl;

    return 0;
}
