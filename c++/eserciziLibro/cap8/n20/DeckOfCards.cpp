//Definizione delle funzione membro della classe DeckOfCards che simula
//il mescolamento e la distribuzione di un mazzo di carte da gioco

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.hpp"
using namespace std;

//inizializzare tutti i elementi a 0
DeckOfCards::DeckOfCards()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            deck[i][j] = 0;
        }
    }

    //seme del generatore dei numeri casuali
    srand(time(0));
}

//mischiare il mazzo di 52 carte
void DeckOfCards::shuffleAndDeal()
{
    //array dei semi
    const char *suit[4] = {"♥️",
                           "♦️",
                           "♣️",
                           "♠️"};

    //array dei valori
    const char *face[13] = {
        "A",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10",
        "J",
        "Q",
        "K",
    };

    int row, column;

    for (int i = 1; i <= 52; i++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while (deck[row][column] != 0);
        deck[row][column] = i;

        cout << setw(3) << right << face[column]
             << " " << left << suit[row]
             << (i % 2 == 0 ? '\n' : '\t');
    }
}
