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

#include <iostream>
#include <iomanip>
using namespace std;

int displayMessage();
void stampaScacchiera();
void calcolaEuristica();
void stampaEuristica();
void azerrareEuristica();

int board[8][8] = {1};
int accessibility[8][8] = {0};

const int orizontale[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int verticale[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main()
{
    int rigaAttuale = 0;
    int colonnaAttuale = 0;

    int moveNumber;
    int count = 2;

    board[rigaAttuale][colonnaAttuale] = 1;

    while (count <= 64)
    {
        calcolaEuristica();
        stampaEuristica();
        azerrareEuristica();

        do
        {

            moveNumber = displayMessage();
            rigaAttuale += verticale[moveNumber];
            colonnaAttuale += orizontale[moveNumber];

            if (board[rigaAttuale][colonnaAttuale] != 0)
            {
                rigaAttuale -= verticale[moveNumber];
                colonnaAttuale -= orizontale[moveNumber];
                cout << "Casella già usata. Riprova.\n"
                     << endl;
            }
        } while (board[rigaAttuale][colonnaAttuale] != 0);

        board[rigaAttuale][colonnaAttuale] = count;
        count++;

        stampaScacchiera();
    }

    cout << "FINE!" << endl;
    return 0;
}

int displayMessage()
{
    int passo;

    cout << "* 2 * 1 *\n3 * * * 0\n* * k * *\n4 * * * 7\n* 5 * 6 *" << endl;
    cout << "inserisci passo: ";
    cin >> passo;

    return passo;
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