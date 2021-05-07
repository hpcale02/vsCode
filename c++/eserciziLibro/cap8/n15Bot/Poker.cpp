//5 carte rivolto verso il basso
//hpc 07.05.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void mescola(int[][6]);
void distribuire(const int[][6], const char *[], const char *[], int[][2]);
void visualizzareDeck(const int[][2], const char *[], const char *[]);
void coppia(const int[][2], const int);
void tris(const int[][2], const int);
void scala(const int[][2], const int);
void colore(const int[][2], const int);
void poker(const int[][2], const int);
void cambioCartePlayer(const int[][6], const char *[], const char *[], int[][2], const int);
void valuta(const int[][2], const int);
void vitt();

int card = 1;
double pointPlay1 = 0, pointPlay2 = 0;

int main()
{
    const char *seme[] = {"♥️",
                          "♦️",
                          "♣️",
                          "♠️"};

    const char *faccia[] = {
        "9",
        "10",
        "J",
        "Q",
        "K",
        "A",
    };

    int deck[4][6] = {0};
    int manoPlayer[5][2] = {0};
    int manoBot[5][2] = {0};

    srand(time(0));

    mescola(deck);

    distribuire(deck, faccia, seme, manoPlayer);
    visualizzareDeck(manoPlayer, faccia, seme);
    cout << "\nBOT:" << endl;
    for (int i = 0; i < 5; i++)
        cout << "#\t";
    cout << endl;
    valuta(manoPlayer, 1);
    cambioCarte(deck, faccia, seme, manoPlayer, 1);

    distribuire(deck, faccia, seme, manoBot);
    cout << "BOT:" << endl;
    visualizzareDeck(manoBot, faccia, seme);
    valuta(manoBot, 2);

    cout << endl;
    vitt();

    return 0;
}

void valuta(const int nMano[][2], int player)
{
    coppia(nMano, player);
    tris(nMano, player);
    scala(nMano, player);
    colore(nMano, player);
    poker(nMano, player);
}

void cambioCartePlayer(const int nDeck[][6], const char *nFaccia[], const char *nSeme[], int nMano[][2], const int player)
{
    string cambio;
    int count = 0;

    while (cambio != "exit")
    {
        cout << "inserisci la carta che vuoi cambiare(exit - to exit): ";
        cin >> cambio;

        cout << endl;

        for (int k = 0; k < 5; k++)
        {
            if (cambio == nFaccia[nMano[k][1]])
            {
                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        if (nDeck[i][j] == card)
                        {
                            nMano[k][0] = i;
                            nMano[k][1] = j;
                        }
                    }
                }
                break;
            }
        }
        card++;
        count++;

        if (count == 4)
            break;

        if (cambio != "exit")
        {
            visualizzareDeck(nMano, nFaccia, nSeme);
            cout << "\nBOT:" << endl;
            for (int i = 0; i < 5; i++)
                cout << "#\t";
            cout << endl;
            valuta(nMano, player);
        }
    }
}

void vitt()
{
    if (pointPlay1 > pointPlay2)
        cout << "Vittoria Player1!" << endl;
    else if (pointPlay1 < pointPlay2)
        cout << "Vittoria Player2!" << endl;
    else
        cout << "Pareggio!" << endl;
}

void mescola(int nDeck[][6])
{
    int row, column;

    for (int i = 1; i <= 24; i++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 6;
        } while (nDeck[row][column] != 0);

        nDeck[row][column] = i;
    }
}

void distribuire(const int nDeck[][6], const char *nFaccia[], const char *nSeme[], int nMano[][2])
{
    int r = 0;
    do
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (nDeck[i][j] == card)
                {
                    nMano[r][0] = i;
                    nMano[r][1] = j;
                    r++;
                }
            }
        }
        card++;
    } while (r < 5);
    cout << endl;
}

void visualizzareDeck(const int nMano[][2], const char *nFaccia[], const char *nSeme[])
{
    for (int i = 0; i < 5; i++)
        cout << nFaccia[nMano[i][1]] << " " << nSeme[nMano[i][0]] << "\t";

    cout << endl;
}

void coppia(const int nMano[][2], const int player)
{
    int count[6] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 6; i++)
        if (count[i] == 2)
        {
            if (player == 1)
                pointPlay1++;
            else
                pointPlay2++;
        }
}

void tris(const int nMano[][2], const int player)
{
    int count[6] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 6; i++)
        if (count[i] == 3)
        {
            if (player == 1)
                pointPlay1 += 3;
            else
                pointPlay2 += 3;
        }
}

void scala(const int nMano[][2], const int player)
{
    int s[5] = {0};
    int temp;

    for (int i = 0; i < 5; i++)
        s[i] = nMano[i][1];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }

    if (s[4] - 1 == s[3] && s[3] - 1 == s[2] && s[2] - 1 == s[1] && s[1] - 1 == s[0])
    {
        if (player == 1)
            pointPlay1 += 3.5;
        else
            pointPlay2 += 3.5;
    }
}

void colore(const int nMano[][2], const int player)
{
    int count[4] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][0]]++;

    for (int i = 0; i < 4; i++)
        if (count[i] == 5)
        {
            if (player == 1)
                pointPlay1 += 3.7;
            else
                pointPlay2 += 3.7;
        }
}

void poker(const int nMano[][2], const int player)
{
    int count[6] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count[i] == 4)
        {
            if (player == 1)
                pointPlay1 += 5;
            else
                pointPlay2 += 5;
        }
}