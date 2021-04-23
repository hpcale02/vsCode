//disegno che fa una tarataruga con la quando la penna è abbassata
//hpc 22.04.2021
//1 alzare la penna
//2 abbassare la penna
//3 girare a destra
//4 girare a sinistra
//5, 10 spostare in avanti di 10 spazi
//6 visualizza l'array di 20 x 20
//9 fine (valore sentinella)

#include <iostream>
using namespace std;

int visualizzareOperazioni();
void stampaTabella();

const int altezzaTabella = 20;
const int larghezzaTabella = 20;
int tabella[altezzaTabella][larghezzaTabella] = {0};

int Xtartaruga = 0;
int Ytartaruga = 0;

int main()
{
    int verso = 0; //Sud, Ovest, Nord, Est

    int passi;
    bool pennaAlzata = true;

    int operazione;

    while (operazione != 9)
    {
        operazione = visualizzareOperazioni();

        switch (operazione)
        {
        case 1: // alzare la penna
            pennaAlzata = true;
            break;
        case 2: //abbassare la penna
            pennaAlzata = false;
            break;
        case 3: // girare a destra
            if (verso == 3)
                verso = 0;
            else
                verso++;
            break;
        case 4: // girare a sinistra
            if (verso == 0)
                verso = 3;
            else
                verso--;
            break;
        case 5: // spostarsi di n passi
            cin >> passi;
            switch (verso)
            {
            case 0: //sud
                for (int i = 0; i < passi; i++)
                {
                    if (!pennaAlzata)
                        tabella[Ytartaruga][Xtartaruga]++;
                    Ytartaruga++;
                }
                Ytartaruga--;
                stampaTabella();
                break;
            case 1: //ovest
                for (int i = 0; i < passi; i++)
                {
                    if (!pennaAlzata)
                        tabella[Ytartaruga][Xtartaruga]++;
                    Xtartaruga--;
                }
                Xtartaruga++;
                stampaTabella();
                break;
            case 2: //nord
                for (int i = 0; i < passi; i++)
                {
                    if (!pennaAlzata)
                        tabella[Ytartaruga][Xtartaruga]++;
                    Ytartaruga--;
                }
                Ytartaruga++;
                stampaTabella();
                break;
            case 3: //est
                for (int i = 0; i < passi; i++)
                {
                    if (!pennaAlzata)
                        tabella[Ytartaruga][Xtartaruga]++;
                    Xtartaruga++;
                }
                Xtartaruga--;
                stampaTabella();
                break;
            default:
                break;
            }
            break;
        case 6: // stampare la tabella
            stampaTabella();
            break;
        default:
            break;
        }
    }
    cout << "FINE" << endl;

    return 0;
}

int visualizzareOperazioni()
{
    int scelta;
    cout << "Possibili operazioni: " << endl;
    cout << "1-alzare la penna" << endl;
    cout << "2-abbassare la penna" << endl;
    cout << "3-girare a destra" << endl;
    cout << "4-girare a sinistra" << endl;
    cout << "5, 10-spostare in avanti di 10 spazi" << endl;
    cout << "6-visualizza l'array di 20 x 20" << endl;
    cout << "9-fine(valore sentinella)" << endl;
    cin >> scelta;
    return scelta;
}

void stampaTabella()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (tabella[i][j] > 0)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}