#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void mescola(int[][13]);
void distribuire(const int[][13], const char *[], const char *[], int[][2]);
void coppia(const int[][13], const int[][2], const char *[]);
void tris(const int[][13], const int[][2], const char *[]);
void poker(const int[][13], const int[][2], const char *[]);
void colore(const int[][13], const int[][2], const char *[]);
void scala(const int[][13], const int[][2], const char *[], const char *[]);

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

    srand(time(0));

    mescola(deck);
    distribuire(deck, faccia, seme, mano);
    coppia(deck, mano, faccia);
    tris(deck, mano, faccia);
    poker(deck, mano, faccia);
    colore(deck, mano, seme);
    scala(deck, mano, seme, faccia);

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

    cout << "The hand is:" << endl;

    for (int card = 1; card <= 5; card++)
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
    }
    cout << endl;
}

void coppia(const int nDeck[][13], const int nMano[][2], const char *nFaccia[])
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    cout << endl;

    for (int i = 0; i < 13; i++)
        if (count[i] == 2)
            cout << "Coppia di " << nFaccia[i] << endl;
}

void tris(const int nDeck[][13], const int nMano[][2], const char *nFaccia[])
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]];

    for (int i = 0; i < 13; i++)
        if (count[i] == 3)
            cout << "Tris di " << nFaccia[i] << endl;
}

void poker(const int nDeck[][13], const int nMano[][2], const char *nFaccia[])
{
    int count[13] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 13; i++)
        if (count[i] == 4)
            cout << "Poker di " << nFaccia[i] << endl;
}

void colore(const int nDeck[][13], const int nMano[][2], const char *nSeme[])
{
    int count[4] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][0]]++;

    for (int i = 0; i < 4; i++)
        if (count[i] == 5)
            cout << "Seme di " << nSeme[i] << endl;
}

void scala(const int nDeck[][13], const int nMano[][2], const char *nSeme[], const char *nFaccia[])
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
        cout << "Scala:" << endl;

        for (int i = 0; i < 5; i++)
            cout << nFaccia[nMano[i][1]] << " " << nSeme[nMano[i][0]] << endl;
    }
}
