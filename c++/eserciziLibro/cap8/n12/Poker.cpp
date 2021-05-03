#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "Poker.hpp"
using namespace std;

Poker::Poker()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            Deck[i][j] = 0;
        }
    }
    srand(time(0));
}

void Poker::mischiareCarte()
{
    int row, column;
    for (int i = 1; i <= 5; i++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while (Deck[row][column] != 0);

        Deck[row][column] = i;
    }
}

void Poker::distribuireCarte()
{
    for (int cerca = 1; cerca <= 5; cerca++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                if (Deck[i][j] == cerca)
                {
                    //segno
                    deckMano[0][cerca - 1] = i;
                    //numero
                    deckMano[1][cerca - 1] = j;
                }
            }
        }
    }
}

void Poker::determinare()
{
    if (coppia())
        cout << "Coppia" << endl;

    if (doppiaCoppia())
        cout << "2 Coppie" << endl;

    if (tris())
        cout << "Tris" << endl;

    if (pok())
        cout << "Poker" << endl;

    if (colore())
        cout << "colore" << endl;

    if (scala())
        cout << "Scala" << endl;
}

bool Poker::coppia()
{
    const int riga = 1;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
                return true;
        }
    }
    return false;
}

bool Poker::doppiaCoppia()
{
    const int riga = 1;
    int coppia = 0;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                coppia = 1;
                break;
            }
        }

        if (coppia == 1)
        {
            if (i < 4)
                int ricerca = deckMano[riga][i + 1];
            else
                return false;

            for (int j = i + 1; j < 5; j++)
            {
                if (ricerca == deckMano[riga][j])
                    return true;
            }
        }
    }
    return false;
}

bool Poker::tris()
{
    const int riga = 1;
    int i;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        i = 0;
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                i++;
                if (i == 2)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::pok()
{
    const int riga = 1;
    int i;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        i = 0;
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                i++;
                if (i == 3)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::colore()
{
    const int riga = 0;
    int i;

    for (int i = 0; i < 5; i++)
    {

        int ricerca = deckMano[riga][i];
        i = 0;

        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                i++;
                if (i == 4)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::scala()
{
    int ordinato[5];
    const int riga = 1;

    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (deckMano[riga][j] < deckMano[riga][i])
                min = j;
        }
        ordinato[i] = numero[riga][min];
    }

    for (int i = 0; i < 4; i++)
    {
        if (ordinato[i] != --ordinato[i + 1])
            return false;
    }

    return true;
}

void Poker::visualizzareMazzo(){
    for(int i = 0; i < 5; i++){
        cout << numero[deckMano[1][i]] << " " << segno[deckMano[0][i]] << endl;
    }
}