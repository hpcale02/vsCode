//modifica del distribuire le carte fig 8.25
//hpc 08.05.2021

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int[][13]);
void deal(const int[][13], const char *[], const char *[]);

int main()
{
    int deck[4][13] = {0};
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
    int card = 1;

    srand(time(0));

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            deck[i][j] = card++;

    shuffle(deck);
    deal(deck, suit, face);

    return 0;
}

//mischiare il mazzo di 52 carte
void shuffle(int deck[][13])
{
    int row, column;
    int temp;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
        {
            row = rand() % 4;
            column = rand() % 13;
            temp = deck[i][j];
            deck[i][j] = deck[row][column];
            deck[row][column] = temp;
        }
}

//distribuire le carte
void deal(const int deck[][13], const char *suit[], const char *face[])
{
    //array dei semi

    for (int card = 1; card <= 52; card++)
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 13; j++)
                if (deck[i][j] == card)
                {
                    cout << setw(3) << right << face[j]
                         << " " << left << suit[i]
                         << (card % 13 == 0 ? '\n' : '\t');
                    break;
                }
    cout << endl;
}