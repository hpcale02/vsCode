//# ==> muri del labirinto
//. ==> percorso possibile
//hpc 16.05.2021

#include <iostream>
using namespace std;

void mazeTraverse(char[][12], int, int, int);
void displayLabirinto(const char[][12]);

enum Direction
{
    DOWN,
    RIGHT,
    UP,
    LEFT
};
const int X_START = 2, Y_START = 0;

int main()
{
    char labirinto[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                              {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
                              {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
                              {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
                              {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
                              {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                              {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                              {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                              {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
                              {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
                              {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                              {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

    mazeTraverse(labirinto, X_START, Y_START, RIGHT);
}

void mazeTraverse(char lab[][12], int x, int y, int direction)
{
    bool vittoria = false;
    int count = 0;

    while (true)
    {
        count++;
        cout << count << "° PASSO" << endl;
        lab[x][y] = 'x';
        displayLabirinto(lab);

        switch (direction)
        {
        case DOWN:
            if (lab[x][y + 1] == '.')
            {
                direction++;
                break;
            }
            (lab[x + 1][y] != '#') ? x++ : direction++;
            break;
        case RIGHT:
            if (lab[x - 1][y] == '.')
            {
                direction++;
                break;
            }
            (lab[x][y + 1] != '#') ? y++ : direction++;
            break;
        case UP:
            if (lab[x][y - 1] == '.')
            {
                direction++;
                break;
            }
            (lab[x - 1][y] != '#') ? x-- : direction++;
            break;
        case LEFT:
            if (lab[x + 1][y] == '.')
            {
                direction = DOWN;
                break;
            }
            (lab[x][y - 1] != '#') ? y-- : direction = DOWN;
            break;
        default:
            break;
        }

        //vittoria
        if ((x == 0 || x == 11) && (y >= 0 && y <= 11) && x != X_START && y != Y_START)
            vittoria = true;
        if ((y == 0 || y == 11) && (x >= 0 && x <= 11) && x != X_START && y != Y_START)
            vittoria = true;
        else
            vittoria = false;

        if (vittoria)
        {
            lab[x][y] = 'x';
            displayLabirinto(lab);
            cout << "Sei riuscito a uscire, complimenti!" << endl;
            return;
        }
    }
}

void displayLabirinto(const char labirinto[][12])
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
            cout << labirinto[i][j] << " ";
        cout << endl;
    }
    cout << endl
         << endl;
}