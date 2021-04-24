//piazzzzare 8 reggine sulla scacchiera 8 x 8
//hpc 24.04.2021

//caselle occuapate = riga + colonna + due diagonali - 1
#include <iostream>
#include <iomanip>
using namespace std;

void calcolaEuristica();
void calcolaDigonale1(int, int);
void calcolaDigonale2(int, int);
void calcolaRiga(int, int);
void calcolaColonna(int, int);
void stampaEuristica();
void stampaScacchiera();
void azzerrrareEuristica();
void calcolaScacchiera(int, int, int);
void minimo(int &, int &);

int scacchiera[8][8] = {0};
int euristica[8][8] = {0};

int main()
{
    int rigaRegina;
    int colonnaRegina;

    for (int i = 1; i <= 8; i++)
    {
        azzerrrareEuristica();
        calcolaEuristica();
        stampaEuristica();

        // do
        // {
        //     cout << "inserisci riga e cvolonna della regina che vuoi posizionare: ";
        //     cin >> rigaRegina >> colonnaRegina;
        // } while (euristica[rigaRegina][colonnaRegina] == 0);
        minimo(rigaRegina, colonnaRegina);
        cout << "Riga: " << rigaRegina << "\ncolonna: " << colonnaRegina << endl;

        calcolaScacchiera(rigaRegina, colonnaRegina, i);
        stampaScacchiera();
    }

    return 0;
}

void minimo(int &miny, int &minx)
{
    int min = 24;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (euristica[i][j] < min && scacchiera[i][j] == 0)
            {
                min = euristica[i][j];
                miny = i;
                minx = j;
            }
        }
    }
}

void calcolaScacchiera(int rigaRegina, int colonnaRegina, int i)
{
    int x, y;

    //riga
    for (int j = 0; j < 8; j++)
    {
        scacchiera[rigaRegina][j] = i;
    }

    //colonna
    for (int j = 0; j < 8; j++)
    {
        scacchiera[j][colonnaRegina] = i;
    }

    //diagonale1.basso
    y = rigaRegina + 1;
    x = colonnaRegina + 1;
    do
    {
        scacchiera[y][x] = i;
        y++;
        x++;
    } while (y < 8 && x < 8);

    //diagonale1.alto
    y = rigaRegina - 1;
    x = colonnaRegina - 1;
    do
    {
        scacchiera[y][x] = i;
        y--;
        x--;
    } while (y >= 0 && x >= 0);

    //diagonale2.basso
    y = rigaRegina + 1;
    x = colonnaRegina - 1;
    do
    {
        scacchiera[y][x] = i;
        y++;
        x--;
    } while (y < 8 && x >= 0);

    //diagonale2.alto
    y = rigaRegina - 1;
    x = colonnaRegina + 1;
    do
    {
        scacchiera[y][x] = i;
        y--;
        x++;
    } while (y >= 0 && x < 8);
}

void azzerrrareEuristica()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            euristica[i][j] = 0;
        }
    }
}

void calcolaEuristica()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            calcolaDigonale1(i, j);
            calcolaDigonale2(i, j);
            calcolaRiga(i, j);
            calcolaColonna(i, j);
        }
    }
}

void stampaScacchiera()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << setw(3) << scacchiera[i][j];
        }
        cout << endl;
    }
}

void stampaEuristica()
{
    cout << " EURISTICA:" << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << setw(3) << euristica[i][j];
        }
        cout << endl;
    }
}

void calcolaDigonale1(int riga, int colonna)
{
    int i = riga + 1;
    int j = colonna + 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
        }

        i++;
        j++;
    }

    i = riga - 1;
    j = colonna - 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
        }

        i--;
        j--;
    }
}

void calcolaDigonale2(int riga, int colonna)
{
    int i = riga - 1;
    int j = colonna + 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
        }

        i--;
        j++;
    }

    i = riga + 1;
    j = colonna - 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
        }

        j--;
        i++;
    }
}

void calcolaRiga(int riga, int colonna)
{
    for (int i = 0; i < 8; i++)
    {
        if (scacchiera[riga][i] == 0)
            euristica[riga][colonna]++;
    }
}

void calcolaColonna(int riga, int colonna)
{
    for (int i = 0; i < 8; i++)
    {
        if (scacchiera[i][colonna] == 0)
            euristica[riga][colonna]++;
    }
}