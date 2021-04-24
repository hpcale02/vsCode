//piazzzzare 8 reggine sulla scacchiera 8 x 8
//hpc 24.04.2021

//caselle occuapate = riga + colonna + due diagonali - 1
#include <iostream>
#include <iomanip>
using namespace std;

void calcolaEuristica();
bool calcolaDigonale1(int, int, bool);
bool calcolaDigonale2(int, int, bool);
bool calcolaRiga(int, int, bool);
bool calcolaColonna(int, int, bool);
void stampaEuristica();
void stampaScacchiera();
void azzerrrareEuristica();

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

        do
        {
            cout << "inserisci riga e cvolonna della regina che vuoi posizionare: ";
            cin >> rigaRegina >> colonnaRegina;
        } while (euristica[rigaRegina][colonnaRegina] == 0);

        scacchiera[rigaRegina][colonnaRegina] = i;

        stampaScacchiera();
    }

    return 0;
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
            bool casellaAccessibile = true;
            casellaAccessibile = calcolaDigonale1(i, j, casellaAccessibile);
            casellaAccessibile = calcolaDigonale2(i, j, casellaAccessibile);
            casellaAccessibile = calcolaRiga(i, j, casellaAccessibile);
            casellaAccessibile = calcolaColonna(i, j, casellaAccessibile);
            euristica[i][j] -= 1;
            if (!casellaAccessibile)
                euristica[i][j] = 0;
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

bool calcolaDigonale1(int riga, int colonna, bool accessibile)
{
    int i = riga + 1;
    int j = colonna + 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
            i++;
            j++;
        }
        else
        {
            accessibile = false;
            break;
        }
    }

    i = riga - 1;
    j = colonna - 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
            i--;
            j--;
        }
        else
        {
            accessibile = false;
            break;
        }
    }
    return accessibile;
}

bool calcolaDigonale2(int riga, int colonna, bool accessibile)
{
    int i = riga - 1;
    int j = colonna + 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
            i--;
            j++;
        }
        else
        {
            accessibile = false;
            break;
        }
    }

    i = riga + 1;
    j = colonna - 1;
    while (i < 8 && j < 8 && i >= 0 && j >= 0)
    {
        if (scacchiera[i][j] == 0)
        {
            euristica[riga][colonna]++;
            j--;
            i++;
        }
        else
        {
            accessibile = false;
            break;
        }
    }
    return accessibile;
}

bool calcolaRiga(int riga, int colonna, bool accessibile)
{
    for (int i = 0; i < 8; i++)
    {
        if (scacchiera[riga][i] == 0)
            euristica[riga][colonna]++;
        else
        {
            accessibile = false;
            break;
        }
    }
    return accessibile;
}

bool calcolaColonna(int riga, int colonna, bool accessibile)
{
    for (int i = 0; i < 8; i++)
    {
        if (scacchiera[i][colonna] == 0)
            euristica[riga][colonna]++;
        else
        {
            accessibile = false;
            break;
        }
    }
    return accessibile;
}