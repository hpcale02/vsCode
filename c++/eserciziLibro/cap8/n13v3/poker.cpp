#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void mescola(int[][13]);
void distribuire(const int[][13], const char *[], const char *[], int[][2]);
void coppia(const int[][13], const int[][2], const char *[], const int);
void tris(const int[][13], const int[][2], const char *[], const int);
void poker(const int[][13], const int[][2], const char *[], const int);
void colore(const int[][13], const int[][2], const char *[], const int);
void scala(const int[][13], const int[][2], const char *[], const char *[], const int);

int card = 1;
int pointPlay1 = 0, pointPlay2 = 0;

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
    int mano[5][2] = {0};
    int mano2[5][2] = {0};
    const int player1 = 1;
    const int player2 = 2;

    srand(time(0));

    mescola(deck);

    /*-----------------Player1----------------------*/
    distribuire(deck, faccia, seme, mano);
    coppia(deck, mano, faccia, player1);
    tris(deck, mano, faccia, player1);
    poker(deck, mano, faccia, player1);
    colore(deck, mano, seme, player1);
    scala(deck, mano, seme, faccia, player1);

    /*-----------------Player2----------------------*/
    distribuire(deck, faccia, seme, mano2);
    coppia(deck, mano2, faccia, player2);
    tris(deck, mano2, faccia, player2);
    poker(deck, mano2, faccia, player2);
    colore(deck, mano2, seme, player2);
    scala(deck, mano2, seme, faccia, player2);

    /*-----------------Vittoria----------------------*/
    cout << endl;
    if (pointPlay1 > pointPlay2)
        cout << "Vittoria Player1!" << endl;
    else if (pointPlay1 < pointPlay2)
        cout << "Vittoria Player2!" << endl;
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

void distribuire(const int nDeck[][13], const char *nFaccia[], const char *nSeme[], int nMano[][2])
{
    int r = 0;
    int count = 0;

    cout << " Carte in mano" << endl;

    do
    {

        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= 12; j++)
            {
                if (nDeck[i][j] == card)
                {
                    nMano[r][0] = i;
                    nMano[r][1] = j;
                    cout << setw(5) << right << nFaccia[j]
                         << " of " << setw(8) << left
                         << nSeme[i] << endl;

                    r++;
                }
            }
        }
        card++;
        count++;
    } while (count < 5);

    cout << endl;
}

void coppia(const int nDeck[][13], const int nMano[][2], const char *nFaccia[], const int player)
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count[i] == 2)
        {
            cout << "Coppia di " << nFaccia[i] << endl;

            if (player == 1)
                pointPlay1++;
            else
                pointPlay2++;
        }
}

void tris(const int nDeck[][13], const int nMano[][2], const char *nFaccia[], const int player)
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count[i] == 3)
        {
            cout << "Tris di " << nFaccia[i] << endl;
            if (player == 1)
                pointPlay1 = 3;
            else
                pointPlay2 = 3;
        }
}

void poker(const int nDeck[][13], const int nMano[][2], const char *nFaccia[], const int player)
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count[i] == 4)
        {
            cout << "Poker di " << nFaccia[i] << endl;
            if (player == 1)
                pointPlay1 = 4;
            else
                pointPlay2 = 4;
        }
}

void colore(const int nDeck[][13], const int nMano[][2], const char *nSeme[], const int player)
{
    int count[4] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][0]]++;

    for (int i = 0; i < 4; i++)
        if (count[i] == 5)
        {
            cout << "Seme di " << nSeme[i] << endl;
            if (player == 1)
                pointPlay1 = 5;
            else
                pointPlay2 = 5;
        }
}

void scala(const int nDeck[][13], const int nMano[][2], const char *nSeme[], const char *nFaccia[], const int player)
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
        cout << "Scala" << endl;
        if (player == 1)
            pointPlay1 = 6;
        else
            pointPlay2 = 6;
    }
}
