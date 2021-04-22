//modificare la figura 6.11
//1000 giocate la e rispondere alle domander
//a. quante giocate sono vinte al primo lancio , secondo...ventesimo e dopo il ventesimo
//b. quante giocate sono perse al primo lancio , secondo...ventesimo e dopo il ventesimo
//c. che possibilità si hanno di vincere (probabilità)
//d. quanto dura in media una giocata
//e. man man che il gioco prosegue aumenta la probabilità di vincere?
//hpc 22.04.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
    const int SizeOfArray = 20;
    int frequenzaVittoria[SizeOfArray] = {0};
    int frequenzaPerdita[SizeOfArray] = {0};
    double sommaVittaria = 0;
    double mediaGiocata = 0;

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

    for (int i = 0; i < 1000; i++)
    {
        //primo lancio
        int sumOfDice = rollDice();

        //determina lo stato del gioco in base al primo tiro;
        switch (sumOfDice)
        {
        case 7:
        case 11:
            frequenzaVittoria[0]++;
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            frequenzaPerdita[0]++;
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice;
            cout << "point is: " << myPoint << endl;
            break;
        }

        int count = 0;

        //finché non finisce il gioco
        while (gameStatus == CONTINUE)
        {
            sumOfDice = rollDice();

            if (sumOfDice == myPoint)
                gameStatus = WON;
            else if (sumOfDice == 7)
                gameStatus = LOST;

            count++;

            if (count > 19)
            {
                count = 19;
            }
        }

        if (gameStatus == WON)
        {
            cout << "Player Wins!\n"
                 << endl;
            frequenzaVittoria[count]++;
        }
        else
        {
            cout << "Player loses!\n"
                 << endl;
            frequenzaPerdita[count]++;
        }
    }

    for (int i = 0; i < SizeOfArray; i++)
    {
        cout << "vittorira a " << i + 1 << " tiro: " << frequenzaVittoria[i]
             << "\tperdita a " << i + 1 << " tiro: " << frequenzaPerdita[i] << endl;
    }

    for (int i = 0; i < SizeOfArray; i++)
    {
        sommaVittaria += frequenzaVittoria[i];
    }

    double sum = 0;
    for (int i = 0; i < SizeOfArray; i++)
    {
        sum = sum + frequenzaVittoria[i] * i + 1 + frequenzaPerdita[i] * i + 1;
    }

    cout << "lanciata media di una giocata è " << sum / 1000 << endl;

    cout << "la probabilità di vincere è " << sommaVittaria / 1000 * 100 << "%" << endl;

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
