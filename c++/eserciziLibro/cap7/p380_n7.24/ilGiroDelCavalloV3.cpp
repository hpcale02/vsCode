//numero mosse 0-7 del vcavallo
//b) board 8 x 8
//8(moveNumber) mosse con array orizontale[8] verticale[8]
// * 2 * 1 *
// 3 * * * 0
// * * k * *
// 4 * * * 7
// * 5 * 6 *
//rigaAttuale
//colonnaAttuale
//rigaAttuale += verticale[moveNumber];
//colonnaAttuale += orizontale[moveNumber];
//ocntatore tra 1 a 64
//lultimo casella toccata dal cavallo = numero del contatore attuale
//verificare se il cavallo ha gia toccato quella casella
//evitare di fare andare il cavallo fuori dalla scaccchiera
//v2. fare una tabella di accessibilità e andaer semre in quella casella con accessibilità minore
//v3 automatica

#include <iostream>
#include <iomanip>
using namespace std;

void displayMessage();
void stampaScacchiera();
void calcolaEuristica();
void stampaEuristica();
void azerrareEuristica();
int calcolaMove(int, int);

int board[8][8] = {1};
int accessibility[8][8] = {0};

const int orizontale[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int verticale[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main()
{
    int rigaAttuale;
    int colonnaAttuale;
    cout << "inserisci la posizione iniziale (8 x 8): ";
    cin >> rigaAttuale >> colonnaAttuale;

    int moveNumber;
    int count = 2;

    board[rigaAttuale][colonnaAttuale] = 1;

    while (count <= 64)
    {
        displayMessage();
        calcolaEuristica();
        stampaEuristica();
        moveNumber = calcolaMove(rigaAttuale, colonnaAttuale);
        cout << "move: " << moveNumber << endl;
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

        stampaScacchiera();
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