//Fig.6.8 pag 240
//simolatore di lancio di un dato quindi numeri casuali da 1 a 6
//hpc 12.04.2021

#include <iostream> //prototipo delle funzioni standard per input/output
#include <iomanip>  //per manipolare i valori di input e output
#include <cstdlib>  //cotiene funzione rand()
using namespace std;

int main()
{
    //simulare 20 volte il lancio di un dato
    for (int i = 1; i <= 20; i++)
    {
        //genere un numeor casuale tra 1 e 6
        cout << setw(10) << (1 + rand() % 6); // da 1 a 6

        if (i % 5 == 0)
            cout << endl;
    }

    return 0;
}