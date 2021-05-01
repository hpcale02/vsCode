//Fig 6.11 pag 245
//simulare il gioco d'azzardo
//un giocatore lancia due dati a 6 faccie
//somma = 7 or 11 ==> Giocatore vince
//somma = 2; 3 or 12 =0> giocatore perde
//somma = 4; 5; 6; 8; 9 or 10 ==> questi diventano l'obbietivo del giocatore
//il giocatore deve rilajnciare il dato finché non riesce la somma
//se esce 7 prima di raggiungere l'obbietivo il gicatore perde
//hpc 12.04.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
    //enumerazione con le costanti che rappresentano lo stato del gioco
    enum Status
    {
        CONTINUE,
        WON,
        LOST
    };

    int myPoint;       //obiettivo se vi è vinta o perdita al primo tiro
    Status gameStatus; // puo assumere CONTINUE; WON o LOST

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

    if (gameStatus == WON)
        cout << "Player Wins!" << endl;
    else
        cout << "Player loses!" << endl;

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
