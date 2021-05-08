//poker contro bot
//hpc 08.05.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void mescola(int[][6]);
void distribuire(const int[][6], const char *[], const char *[], int[][2]);
void visualizzareDeck(int[][2], const char *[], const char *[]);
void coppia(const int[][2], const int);
void tris(const int[][2], const int);
void scala(const int[][2], const int);
void colore(const int[][2], const int);
void poker(const int[][2], const int);
void cambioCartePlayer(const int[][6], const char *[], const char *[], int[][2]);
void cambioCarteBot(const int[][6], const char *[], const char *[], int[][2]);
void cambio(const int[][6], int[][2]);
void valuta(const int[][2], const int);
void vitt();

int card;
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
    int n;

    cout << "numero partite: ";
    cin >> n;

    for (int partita = 0; partita < n; partita++)
    {
        srand(time(0));

        cout << "PARTITA N° " << partita + 1 << endl;

        mescola(deck);

        /**************************PLAYER*******************************/
        distribuire(deck, faccia, seme, manoPlayer);
        cout << "Player:" << endl;
        visualizzareDeck(manoPlayer, faccia, seme);
        cout << "BOT:" << endl;
        for (int i = 0; i < 5; i++)
            cout << "#\t";
        cout << endl;
        cambioCartePlayer(deck, faccia, seme, manoPlayer);
        valuta(manoPlayer, 1);

        /**************************BOT*******************************/
        distribuire(deck, faccia, seme, manoBot);
        cout << "Player:" << endl;
        visualizzareDeck(manoPlayer, faccia, seme);
        cout << "BOT:" << endl;
        visualizzareDeck(manoBot, faccia, seme);
        valuta(manoBot, 2);
        cambioCarteBot(deck, faccia, seme, manoBot);
        valuta(manoBot, 2);

        /**************************CHI VINCE*******************************/
        vitt();
    }
    return 0;
}

void cambioCarteBot(const int nDeck[][6], const char *nFaccia[], const char *nSeme[], int nMano[][2])
{
    //4 scambi totali
    for (int cont = 0; cont < 4; cont++)
    {
        if (pointPlay2 == 0)
        {

            int index;
            int countSeme[4] = {0};
            bool scambiato = false;

            /********************colore********************/
            for (int i = 0; i < 5; i++)
                countSeme[nMano[i][0]]++;

            for (int i = 0; i < 4; i++)
                if (countSeme[i] == 4)
                    for (int j = 0; j < 4; j++)
                        if (countSeme[j] == 1)
                        {
                            index = j;

                            for (int k = 0; k < 5; k++)
                                if (nMano[k][0] == index)
                                    for (int i = 0; i < 4; i++)
                                        for (int j = 0; j < 6; j++)
                                            if (nDeck[i][j] == card)
                                            {
                                                nMano[k][0] = i;
                                                nMano[k][1] = j;
                                                scambiato = true;
                                            }
                        }

            if (!scambiato)
                for (int i = 0; i < 4; i++)
                    for (int j = 0; j < 6; j++)
                        if (nDeck[i][j] == card)
                        {
                            nMano[0][0] = i;
                            nMano[0][1] = j;
                        }
        }
        else if (pointPlay2 == 1)
        {
            if (nMano[4][1] - nMano[0][1] == 4)
            {
                int index;

                int count[6] = {0};

                for (int i = 0; i < 5; i++)
                    count[nMano[i][1]]++;

                for (int i = 0; i < 6; i++)
                    if (count[i] == 2)
                        index = i;

                for (int k = 0; k < 5; k++)
                    if (nMano[k][1] == index)
                    {
                        for (int i = 0; i < 4; i++)
                            for (int j = 0; j < 6; j++)
                                if (nDeck[i][j] == card)
                                {
                                    nMano[k][0] = i;
                                    nMano[k][1] = j;
                                }
                        break;
                    }
            }
            else
                cambio(nDeck, nMano);
        }
        else if (pointPlay2 == 2)
            cambio(nDeck, nMano);
        else if (pointPlay2 == 3)
            cambio(nDeck, nMano);
        else
            break;

        card++;
        valuta(nMano, 2);
        visualizzareDeck(nMano, nFaccia, nSeme);
    }
}

void cambio(const int nDeck[][6], int nMano[][2])
{
    int index;

    int count[6] = {0};

    for (int i = 0; i < 5; i++)
        count[nMano[i][1]]++;

    for (int i = 0; i < 6; i++)
        if (count[i] == 1)
        {
            index = i;
            break;
        }

    for (int k = 0; k < 5; k++)
        if (nMano[k][1] == index)
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 6; j++)
                    if (nDeck[i][j] == card)
                    {
                        nMano[k][0] = i;
                        nMano[k][1] = j;
                    }
    card++;
}

void valuta(const int nMano[][2], int player)
{
    if (player == 1)
        pointPlay1 = 0;
    else
        pointPlay2 = 0;

    coppia(nMano, player);
    tris(nMano, player);
    scala(nMano, player);
    colore(nMano, player);
    poker(nMano, player);
}

void cambioCartePlayer(const int nDeck[][6], const char *nFaccia[], const char *nSeme[], int nMano[][2])
{
    string cambio;
    int count = 0;

    while (cambio != "exit")
    {
        cout << "inserisci la carta che vuoi cambiare(exit - to exit): ";
        cin >> cambio;

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
        }
    }
}

void vitt()
{
    if (pointPlay1 > pointPlay2)
        cout << "Vittoria Player1!" << endl;
    else if (pointPlay1 < pointPlay2)
        cout << "Vittoria BOT!" << endl;
    else
        cout << "Pareggio!" << endl;

    cout << endl;
}

void mescola(int nDeck[][6])
{
    int row, column;
    card = 1;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 6; j++)
            nDeck[i][j] = 0;

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

void visualizzareDeck(int nMano[][2], const char *nFaccia[], const char *nSeme[])
{
    int temp;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (nMano[j][1] < nMano[i][1])
                for (int k = 0; k < 2; k++)
                {
                    temp = nMano[i][k];
                    nMano[i][k] = nMano[j][k];
                    nMano[j][k] = temp;
                }

    for (int i = 0; i < 5; i++)
        cout << nFaccia[nMano[i][1]] << " " << nSeme[nMano[i][0]] << "\t";

    cout << endl
         << endl;
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