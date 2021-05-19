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
    lab[x][y] = 'x';
    displayLabirinto(lab);

    //vittoria
    if ((x == 0 || x == 11) && (y >= 0 && y <= 11) && x != X_START && y != Y_START)
        vittoria = true;
    if ((y == 0 || y == 11) && (x >= 0 && x <= 11) && x != X_START && y != Y_START)
        vittoria = true;
    else
        vittoria = false;

    if (vittoria)
    {
        cout << "Sei riuscito a uscire, complimenti!" << endl;
        return;
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