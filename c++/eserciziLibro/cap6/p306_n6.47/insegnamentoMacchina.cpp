//modificando es 6.35 al 6.37
//a)modificare il programma prevedendo diversi livelli di abilità
//livello 1 ==> moltiplicazione di una cifra
//livello 2 ==> moltiplicazione di due cifra
//b) modificare il programma potendo sciegliere il tipo di operazioni matematiche
//1 ==> +
//2 ==> -
//3 ==> *
//4 ==> /
//5 ==> operazioni a caso
//hpc 18.04.2021

#include <iostream>
#include <string>
using namespace std;

void sceltaCommentoNegativo();
void sceltaCommentoPositivo();
void commentoPersonale(int, int);
int generazioNenumeriCasuali(int, int);
int sceltaDifficolta();
void esecuzioneOperazione(int, int);
int sceltaOperazione(int);

int coretta = 0;
int sbagliata = 0;
int num1, num2, risposta;

int main()
{
    char ch;
    int tot = 0;
    int livelloDiDifficolta = 0;
    int sceltaDiOperazione = 0;

    livelloDiDifficolta = sceltaDifficolta();

    while (ch != 'n')
    {
        srand(time(0));

        num1 = generazioNenumeriCasuali(0, livelloDiDifficolta);
        num2 = generazioNenumeriCasuali(0, livelloDiDifficolta);

        esecuzioneOperazione(num1, num2);

        cout << "voi continuare? (y/n): ";
        cin >> ch;
    }

    tot = coretta + sbagliata;
    // x : 100 = coretta ： tot

    commentoPersonale(coretta, tot);

    return 0;
}

void sceltaCommentoNegativo()
{
    int nCommento;

    nCommento = generazioNenumeriCasuali(0, 4);
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
}

void sceltaCommentoPositivo()
{
    int nCommento;

    nCommento = generazioNenumeriCasuali(0, 4);
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
}

void commentoPersonale(int RisposteCorette, int coretteTotale)
{
    if (RisposteCorette * 100 / coretteTotale < 75)
        cout << "Chiedete un aiuto al vostro professore!" << endl;
    else
        cout << "sei bravissimo!" << endl;
}

int generazioNenumeriCasuali(int numeroIniziale, int numeroFinale)
{
    return (rand() % numeroFinale + 1 - numeroIniziale) + numeroIniziale;
}

int sceltaDifficolta()
{
    int scelta;
    cout << "inserisci il livello di difficoltà\n(1 - per operazioni di una cifra)\n(2 - per operazioni di due cifre)\netc..........................: ";
    cin >> scelta;

    return pow(10, scelta);
}

void esecuzioneOperazione(int num1, int num2)
{
    int operazione;
    int risposta;

    cout << "inserisci il tipo di operazione che vuoi(1:+; 2:-; 3:*; 4:/; 5:casual):";
    cin >> operazione;

    sceltaOperazione(operazione);
}

int sceltaOperazione(int operazione)
{
    switch (operazione)
    {
    case 1:
        cout << "quanto fa " << num1 << " + " << num2 << " ?" << endl;
        cin >> risposta;

        while (risposta != num1 + num2)
        {
            sceltaCommentoNegativo();
            sbagliata++;
            cin >> risposta;
        }

        coretta++;
        sceltaCommentoPositivo();
        break;

    case 2:
        cout << "quanto fa " << num1 << " - " << num2 << " ?" << endl;
        cin >> risposta;

        while (risposta != num1 - num2)
        {
            sceltaCommentoNegativo();
            sbagliata++;
            cin >> risposta;
        }

        coretta++;
        sceltaCommentoPositivo();
        break;

    case 3:
        cout << "quanto fa " << num1 << " * " << num2 << " ?" << endl;
        cin >> risposta;

        while (risposta != num1 * num2)
        {
            sceltaCommentoNegativo();
            sbagliata++;
            cin >> risposta;
        }

        coretta++;
        sceltaCommentoPositivo();
        break;

    case 4:
        cout << "quanto fa " << num1 << " / " << num2 << " ?" << endl;
        cin >> risposta;

        while (risposta != num1 / num2)
        {
            sceltaCommentoNegativo();
            sbagliata++;
            cin >> risposta;
        }

        coretta++;
        sceltaCommentoPositivo();
        break;

    case 5:
        return sceltaOperazione(operazione = generazioNenumeriCasuali(1, 4));
    }
}