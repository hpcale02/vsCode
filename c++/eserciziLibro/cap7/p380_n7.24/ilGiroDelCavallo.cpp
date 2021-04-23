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

#include <iostream>
#include <iomanip>
using namespace std;

int displayMessage();
void stampaScacchiera();

int board[8][8] = {0};
ont accessibility[8][8] = {{2, 3, 4, 4, 4, 4, 3, 2},
                           {3, 4, 6, 6, 6, 6, 4, 3},
                           {4, 6, 8, 8, 8, 8, 6, 4},
                           {4, 6, 8, 8, 8, 8, 6, 4},
                           {4, 6, 8, 8, 8, 8, 6, 4},
                           {4, 6, 8, 8, 8, 8, 6, 4},
                           {3, 4, 6, 6, 6, 6, 4, 3},
                           {2, 3, 4, 4, 4, 4, 3, 2}};

int main()
{

    int orizontale[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int verticale[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

    int rigaAttuale = 0;
    int colonnaAttuale = 0;

    int moveNumber;
    int count = 2;

    board[rigaAttuale][colonnaAttuale] = 1;

    while (count != 64)
    {
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