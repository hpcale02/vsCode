//es n 4.13 pag 166
//hpc 09.04.2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double migliaPieno;
    double galloniPieno;
    double migliaTotale = 0;
    double galloniTotale = 0;

    while ( migliaPieno != -1 )
    {
        cout << "inserisci le miglia percorso (-1 exit): ";
        cin >> migliaPieno;
        cout << "inserisci i galloni usati: ";
        cin >> galloniPieno;
        cout << "MPG: " << setprecision( 6 ) << fixed << migliaPieno / galloniPieno << endl;
        migliaTotale += migliaPieno;
        galloniTotale += galloniPieno;
        cout << "totale MPG: " << setprecision( 6 ) << fixed << migliaTotale / galloniTotale << endl << endl;
    }
    return 0;
}
