//modificare la figura 6.11
//con una funzione che fa la giocata completa
//inizailizzare il valore bankBalance a 1000 dollari
//immettere la puntata ==>
//con ciclo while che la scomessa sia minore o uguale a bankBalance
//se non è cosi chiedere all'utetnte di immettere una puntata valida
//se giocvatore vince immetere a bankBalance la puntata
//altrimenti deceredare da bankBanlance del valore della puntata
//visualizzare il valore di banBalance se = 0 ==> mi dispiace, sei in bancarotta
//hpc 19.04.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//enumerazione con le costanti che rappresentano lo stato del gioco
enum Status
{
    CONTINUE,
    WON,
    LOST
};

Status gameStatus; // puo assumere CONTINUE; WON o LOST

int rollDice();
void unaGiocata();
void frasiCasuali(int);

int main()
{

    double bankBalance = 1000;
    double puntata;
    bool verifica = true;
    char ch;

    while (ch != 'n')
    {
        cout << "inseirisci la tua puntata: ";
        cin >> puntata;

        while (puntata > bankBalance)
        {
            cout << "inseirisci la tua puntata: ";
            cin >> puntata;

            if (puntata > bankBalance)
                cout << "valore invalido! inserire un valore valido!" << endl;
        }

        unaGiocata();

        if (gameStatus == WON)
        {
            cout << "WIN" << endl;
            frasiCasuali(3);
            bankBalance += puntata;
            cout << bankBalance << endl;
        }
        else
        {

            cout << "LOSE" << endl;
            frasiCasuali(2);
            bankBalance -= puntata;
            cout << bankBalance << endl;
        }

        if (bankBalance <= 0)
        {
            cout << "Mi dispiace, sei in bancarotta!" << endl;
            ch = 'n';
            break;
        }
        if (ch != 'n')
        {
            cout << "vuoi continuare(y/n)? ";
            cin >> ch;
        }
    }

    return 0;
}

//Lancio dei dati calcola la somma e mostri i risultati
int rollDice()
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    cout << "Player rolled: " << die1 << " + " << die2
         << " = " << sum << endl;

    return sum;
}

void unaGiocata()
{

    int myPoint; //obiettivo se vi è vinta o perdita al primo tiro

    //randomizzazione della generazione dei numeri casuali contime
    srand(time(0));

    //primo lancio
    int sumOfDice = rollDice();

    //determina lo stato del gioco in base al primo tiro;
    switch (sumOfDice)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sumOfDice;
        cout << "point is: " << myPoint << endl;
        break;
    }

    //finché non finisce il gioco
    while (gameStatus == CONTINUE)
    {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint)
            gameStatus = WON;
        else if (sumOfDice == 7)
            gameStatus = LOST;
    }
}

void frasiCasuali(int n)
{
    srand(time(0));
    int scelta = 1 + rand() % n;
    switch (scelta)
    {
    case 1:
        cout << "Oh, stiamo rischiando grosso, eh?" << endl;
        break;
    case 2:
        cout << "Andiamo, riprova ancora!" << endl;
        break;
    case 3:
        cout << "Stiamo andando forte! è ora di incassare!" << endl;
        break;
    }
}