//modificare il problema della ricorsione con la ricorsione
//hpc 29.04.2021

// const int n = 8;
// int T[n]; //vettore rappresentativo delle 8 righe

// // Controlla se la posizione è sicura
// bool siåcura(int regina, int riga)
// {
//     // Controlla se ogni regina precedente alla attuale
//     // non si trovi sulla stessa riga o su una delle diagonali
//     for (int i = 0; i < regina; i++)
//     {
//         // ricava la posizione della regina nella riga iesima
//         int xriga = T[i];
//         // stessa riga o stessa diagonale
//         if (xriga == riga ||
//             xriga == riga - (regina - i) ||
//             xriga == riga + (regina - i))
//             return false;
//     }
//     return true;
// } //fine sicura()

// void tenta(int k)
// {
//     if (k < n)
//     {
//         for (int i = 0; i < n; i++)
//             // prima di inserire la k-esima regina in una riga
//             // controlla se la posizione scelta è sicura
//             if (sicura(k, i))
//             {
//                 T[k] = i;
//                 tenta(k + 1); // posiziona un'altra regina
//             }                 //fine if
//     }
//     else
//     {
//         // le n=8 regine sono posizionate (stampa)
//         for (int i = 0; i < n; i++)
//             cout << T[i] << " ";
//         cout << endl;
//     } //fine else
// } //fine tenta

// int main()
// {
//     tenta(0); //regina iniziale in colonna 0
//     return 0;
// }

#include<iostream>
using namespace std;

const int lato = 10;
long int c;
int colonne[50];
int diagonaleD[50];
int diagonaleS[100];
int riga[100];

void regina(int);
void display();

int main()
{
  regina(2);
  return 0;
}

void regina(int r)
{
  int colonna;
  int DiaDes; //collonna - riga + lato
  int DiaSin; //collonna + riga

  for (colonna = lato, DiaSin = colonna + r, DiaDes = colonna - r + lato; colonna; colonna--, DiaSin--, DiaDes--)
  {
    if (!colonne[colonna] && !diagonaleS[DiaSin] && !diagonaleD[DiaDes])
    {
      colonne[colonna] = diagonaleS[DiaSin] = diagonaleD[DiaDes] = 1;
      riga[r] = colonna;

      if (r < lato)
        regina(r + 1);
      else
      {
        c++;
        display();
        colonne[colonna] = diagonaleS[DiaSin] = diagonaleD[DiaDes] = 0;
      }
    }
  }
}

void display()
{
  for (int i = 1; i < lato; i++)
  {
    for (int j = 1; j < riga[i]; j++)
    {
      cout << "a ";
    }
    cout << "W ";
    for (int j = riga[i] + 1; j <= lato; j++)
    {
      cout << "a ";
    }
  }
  cout << "lato: " << lato << "\nsoluzioni: " << c << endl;
}