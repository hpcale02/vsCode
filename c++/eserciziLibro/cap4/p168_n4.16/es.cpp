//es n 4.16 pag 168
//hpc 09.04.2021

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int ore;
    double salario;
    double salarioTot;

    while ( ore != -1 )
    {
        cout << "inserisci numeor di ore: ";
        cin >> ore;
        cout << "inserisci lo stipenio orario; ";
        cin >> salario;

        if ( ore > 40 )
        {
            ore -= 40;
            salario = salario * 40 + salario * ore + salario * ore * 0.5;
        }
        else
            salario *= ore;
        
        cout << "Stipendio ricevuto: " << salario << endl << endl;
    }

    return 0;
}

