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

    peso = 0;
}

int Poker::getPeso(){
    return peso;
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
    for (int cerca = 1; cerca <= 10; cerca++)
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
    {
        cout << "Coppia" << endl;
        peso = 1;
    }

    if (doppiaCoppia())
    {
        cout << "2 Coppie" << endl;
        peso = 2;
    }

    if (tris())
    {
        cout << "Tris" << endl;
        peso = 3;
    }

    if (pok())
    {
        cout << "Poker" << endl;
        peso = 4;
    }

    if (colore())
    {
        cout << "colore" << endl;
        peso = 5;
    }

    if (scala())
    {
        cout << "Scala" << endl;
        peso = 6;
    }
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
    int ricerca;
    int k;

    for (int i = 0; i < 5; i++)
    {
        if (coppia == 0)
        {
            ricerca = deckMano[riga][i];
            for (int j = i + 1; j < 5; j++)
            {
                if (ricerca == deckMano[riga][j])
                {
                    coppia = 1;
                    k = ricerca;
                    break;
                }
            }
        }

        if (coppia == 1)
        {
            if (i < 4)
            {
                ricerca = deckMano[riga][i + 1];
            }

            else
                return false;

            for (int j = i + 1; j < 5; j++)
            {
                if (ricerca == deckMano[riga][j + 1] && ricerca != k)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::tris()
{
    const int riga = 1;
    int count;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        count = 0;
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                count++;
                if (count == 2)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::pok()
{
    const int riga = 1;
    int count;

    for (int i = 0; i < 5; i++)
    {
        int ricerca = deckMano[riga][i];
        count = 0;
        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                count++;
                if (count == 3)
                    return true;
            }
        }
    }
    return false;
}

bool Poker::colore()
{
    const int riga = 0;
    int count;

    for (int i = 0; i < 5; i++)
    {

        int ricerca = deckMano[riga][i];
        count = 0;

        for (int j = i + 1; j < 5; j++)
        {
            if (ricerca == deckMano[riga][j])
            {
                count++;
                if (count == 4)
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

void Poker::visualizzareMazzo()
{
    int min;
    int minIndex = 0;
    int memoria[2];

    for (int i = 0; i < 4; i++)
    {
        min = deckMano[1][i];
        for (int j = i + 1; j < 5; j++)
        {
            if (deckMano[1][j] < min)
            {
                min = deckMano[1][j];
                minIndex = j;
            }
        }

        for (int k = 0; k < 2; k++)
        {
            memoria[k] = deckMano[k][i];
            deckMano[k][i] = deckMano[k][minIndex];
            deckMano[k][minIndex] = memoria[k];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << numero[deckMano[1][i]] << " " << segno[deckMano[0][i]] << endl;
    }
}