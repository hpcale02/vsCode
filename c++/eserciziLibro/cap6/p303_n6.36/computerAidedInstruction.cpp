//modificare l'es 6.35 con piu commenti per risposte giuste e sbagliate
//hpc 18.04.2021

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, risposta;
    char ch;
    int nCommento;

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
                srand(time(0));
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
                cin >> risposta;
                if (risposta == num1 * num2)
                {
                    cout << "Bravo!" << endl;
                    cout << "voi continuare? (y/n): ";
                    cin >> ch;
                }
            }
        }
        else
        {
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
    }

    return 0;
}
