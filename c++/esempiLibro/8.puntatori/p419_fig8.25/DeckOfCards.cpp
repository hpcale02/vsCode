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
void DeckOfCards::shuffle()
{
    int row, column;
    for (int i = 1; i <= 52; i++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while (deck[row][column] != 0);
        deck[row][column] = i;
    }
}

//distribuire le carte
void DeckOfCards::deal()
{
    //array dei semi
    static const char *suit[4] = {"♥️",
                                  "♦️",
                                  "♣️",
                                  "♠️"};

    //array dei valori
    static const char *face[13] = {
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

    for (int card = 1; card <= 52; card++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                if (deck[i][j] == card)
                {
                    cout << setw(3) << right << face[j]
                         << " " << left << suit[i]
                         << (card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}