//generare un labirinto casuale
//hpc 20.06.2021

#include <iostream>
using namespace std;

void mazeGenerator(int [][12]);
void mazeTraverse(char[][12], int, int, int);

int main()
{
    
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