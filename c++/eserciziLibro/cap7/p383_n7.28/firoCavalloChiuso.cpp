//modificare l'es 7.24 per vedere se il giro del cavallo è anche chiuso (che dista una mossa dalla casella iniziale)
//hpc 24.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

void displayMessage();
void stampaScacchiera();
void calcolaEuristica();
void stampaEuristica();
void azerrareEuristica();
int calcolaMove(int, int);
void azzerrareTabella();

int board[8][8] = {0};
int accessibility[8][8] = {0};

const int orizontale[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int verticale[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main()
{
    int rigaAttuale;
    int colonnaAttuale;
    // cout << "inserisci riga e colonna di partenza (8 x 8): ";
    // cin >> rigaAttuale >> colonnaAttuale;

    int a = 1;
    int b[64] = {0};
    int h = 0;
    displayMessage();

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int moveNumber;
            int count = 2;

            board[i][j] = 1;

            rigaAttuale = i;
            colonnaAttuale = j;

            while (count <= 64)
            {
                calcolaEuristica();
                moveNumber = calcolaMove(rigaAttuale, colonnaAttuale);
                azerrareEuristica();

                rigaAttuale += verticale[moveNumber];
                colonnaAttuale += orizontale[moveNumber];

                if (board[rigaAttuale][colonnaAttuale] != 0)
                {
                    rigaAttuale -= verticale[moveNumber];
                    colonnaAttuale -= orizontale[moveNumber];
                    cout << "Casella già usata. Riprova.\n"
                         << endl;
                }

                board[rigaAttuale][colonnaAttuale] = count;
                count++;

                if (count == 64)
                {
                    for (int k = 0; k < 8; k++)
                    {
                        int y = rigaAttuale;
                        int x = colonnaAttuale;
                        y += verticale[k];
                        x += orizontale[k];
                        if (x >= 0 && y >= 0 && x < 8 && y < 8 && board[y][x] == 1)
                        {
                            b[h] = a;
                            h++;
                        }
                    }
                }
            }

            cout << a << endl;
            a++;
            stampaScacchiera();
            azzerrareTabella();
        }
    }
    for (int i = 0; i < 64; i++)
    {
        cout << b[i] << " ";
    }

    cout << "FINE!" << endl;
    return 0;
}

int calcolaMove(int y, int x)
{
    int min = 8;
    int n = 0;
    int Y, X;
    for (int k = 0; k < 8; k++)
    {
        Y = y;
        X = x;
        Y += verticale[k];
        X += orizontale[k];
        if (Y >= 0 && X >= 0 && Y < 8 && X < 8 && accessibility[Y][X] < min && board[Y][X] == 0)
        {
            min = accessibility[Y][X];
            n = k;
        }
    }
    return n;
}

void displayMessage()
{
    cout << "* 2 * 1 *\n3 * * * 0\n* * k * *\n4 * * * 7\n* 5 * 6 *" << endl;
}

void stampaScacchiera()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << setw(3) << board[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void calcolaEuristica()
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                int x = j;
                int y = i;
                y += verticale[k];
                x += orizontale[k];

                if (x >= 0 && x < 8 && y < 8 && y >= 0 && board[y][x] == 0)
                    accessibility[i][j]++;
                else if (x >= 0 && x < 8 && y < 8 && y >= 0 && board[y][x] == 1)
                    accessibility[i][j]--;
            }
        }
    }
}

void stampaEuristica()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] != 0)
                accessibility[i][j] = 0;

            cout << setw(3) << accessibility[i][j];
        }
        cout << endl;
    }
}

void azerrareEuristica()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            accessibility[i][j] = 0;
        }
    }
}

void azzerrareTabella()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = 0;
        }
    }
}