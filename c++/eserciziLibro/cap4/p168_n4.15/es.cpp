//es n 4.15 pag 168
//hpc 09.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double stipendio = 200.00;
    double venditaSettimanale;

    while ( venditaSettimanale != -1 )
    {
        cout << "Vendita Settimanale(-1 exit): ";
        cin >> venditaSettimanale;
        stipendio += venditaSettimanale * 9 / 100;
        cout << "Stipendio Ricevuto: " << setprecision( 2 ) << fixed << stipendio << endl << endl;
    }

    return 0;
}