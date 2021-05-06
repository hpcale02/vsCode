//hpc 06.05.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void mescola(int[][13]);
void distribuire(const int[][13], const char *[], const char *[], int[][2], int[][2]);
void coppia(const int[][13], const int[][2], const int[][2], const char *[]);
void tris(const int[][13], const int[][2], const int[][2], const char *[]);
void poker(const int[][13], const int[][2], const int[][2], const char *[]);
void colore(const int[][13], const int[][2], const int[][2], const char *[]);
void scala(const int[][13], const int[][2], const int[][2], const char *[], const char *[]);

int player1 = 0, player2 = 0;

int main()
{
    const char *seme[] = {"♥️",
                          "♦️",
                          "♣️",
                          "♠️"};

    const char *faccia[] = {
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

    int deck[4][13] = {0};
    int mano1[5][2] = {0};
    int mano2[5][2] = {0};

    srand(time(0));

    mescola(deck);
    distribuire(deck, faccia, seme, mano1, mano2);
    coppia(deck, mano1, mano2, faccia);
    tris(deck, mano1, mano2, faccia);
    poker(deck, mano1, mano2, faccia);
    colore(deck, mano1, mano2, seme);
    scala(deck, mano1, mano2, seme, faccia);

    if (player1 > player2)
        cout << "Ha vinto Player1!" << endl;
    else if (player1 < player2)
        cout << "Ha vinto Player2!" << endl;
    else
        cout << "Pareggio!" << endl;

    return 0;
}

void mescola(int nDeck[][13])
{
    int row, column;

    for (int card = 1; card <= 52; card++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while (nDeck[row][column] != 0);

        nDeck[row][column] = card;
    }
}

void distribuire(const int nDeck[][13], const char *nFaccia[], const char *nSeme[], int nMano1[][2], int nMano2[][2])
{
    int r = 0;

    cout << "Player1:" << endl;

    for (int card = 1; card <= 5; card++)
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= 12; j++)
            {
                if (nDeck[i][j] == card)
                {
                    nMano1[r][0] = i;
                    nMano1[r][1] = j;
                    cout << setw(5) << right << nFaccia[j]
                         << " of " << setw(8) << left
                         << nSeme[i] << endl;

                    r++;
                }
            }
        }
    }

    cout << endl;
    cout << "Player2:" << endl;
    r = 0;

    for (int card = 6; card <= 10; card++)
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= 12; j++)
            {
                if (nDeck[i][j] == card)
                {
                    nMano2[r][0] = i;
                    nMano2[r][1] = j;
                    cout << setw(5) << right << nFaccia[j]
                         << " of " << setw(8) << left
                         << nSeme[i] << endl;

                    r++;
                }
            }
        }
    }
}

void coppia(const int nDeck[][13], const int nMano1[][2], const int nMano2[][2], const char *nFaccia[])
{
    int count1[13] = {0};

    for (int i = 0; i < 5; i++)
        count1[nMano1[i][1]]++;

    cout << endl;

    for (int i = 0; i < 13; i++)
        if (count1[i] == 2)
        {
            cout << "Player1: Coppia di " << nFaccia[i] << endl;
            player1++;
        }

    int count2[13] = {0};

    for (int i = 0; i < 5; i++)
        count2[nMano2[i][1]]++;

    cout << endl;

    for (int i = 0; i < 13; i++)
        if (count2[i] == 2)
        {
            cout << "player2: Coppia di " << nFaccia[i] << endl;
            player2++;
        }
}

void tris(const int nDeck[][13], const int nMano1[][2], const int nMano2[][2], const char *nFaccia[])
{
    int count1[13] = {0};

    for (int i = 0; i < 5; i++)
        count1[nMano1[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count1[i] == 3)
        {
            cout << "Player1: Tris di " << nFaccia[i] << endl;
            player1 = 3;
        }

    int count2[13] = {0};

    for (int i = 0; i < 5; i++)
        count2[nMano2[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count2[i] == 3)
        {
            cout << "Player2: Tris di " << nFaccia[i] << endl;
            player2 = 3;
        }
}

void poker(const int nDeck[][13], const int nMano1[][2], const int nMano2[][2], const char *nFaccia[])
{
    int count1[13] = {0};

    for (int i = 0; i < 5; i++)
        count1[nMano1[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count1[i] == 4)
        {
            cout << "Player1: Poker di " << nFaccia[i] << endl;
            player1 = 4;
        }

    int count2[13] = {0};

    for (int i = 0; i < 5; i++)
        count2[nMano2[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count2[i] == 4)
        {
            cout << "Player2: Poker di " << nFaccia[i] << endl;
            player2 = 4;
        }
}

void colore(const int nDeck[][13], const int nMano1[][2], const int nMano2[][2], const char *nSeme[])
{
    int count1[4] = {0};

    for (int i = 0; i < 5; i++)
        count1[nMano1[i][0]]++;

    for (int i = 0; i < 4; i++)
        if (count1[i] == 5)
        {
            cout << "Player1: Seme di " << nSeme[i] << endl;
            player1 = 5;
        }

    int count2[4] = {0};

    for (int i = 0; i < 5; i++)
        count2[nMano2[i][0]]++;

    for (int i = 0; i < 4; i++)
        if (count2[i] == 5)
        {
            cout << "Player2: Seme di " << nSeme[i] << endl;
            player2 = 5;
        }
}

void scala(const int nDeck[][13], const int nMano1[][2], const int nMano2[][2], const char *nSeme[], const char *nFaccia[])
{
    int s[5] = {0};
    int temp;

    for (int i = 0; i < 5; i++)
        s[i] = nMano1[i][1];

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
        cout << "Player1: Scala" << endl;
        player1 = 6;
    }

    int s2[5] = {0};
    int temp2;

    for (int i = 0; i < 5; i++)
        s2[i] = nMano2[i][1];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            if (s2[j] > s2[j + 1])
            {
                temp2 = s2[j];
                s2[j] = s2[j + 1];
                s2[j + 1] = temp2;
            }

    if (s2[4] - 1 == s2[3] && s2[3] - 1 == s2[2] && s2[2] - 1 == s2[1] && s2[1] - 1 == s2[0])
    {
        cout << "Player2: Scala" << endl;
        player2 = 6;
    }
}
