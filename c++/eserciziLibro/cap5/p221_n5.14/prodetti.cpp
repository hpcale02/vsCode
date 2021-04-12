//preodotti e calcolare il totale vanduto nella settimana
//hpc 11.04.2021

#include <iostream>
using namespace std;

int main()
{
    //pro1 = $2.98 pro2 = $4.50 pro3 = $9.98 pro4 = $4.49 pro5 = $6.87
    int quantVenGiorno;
    const double prodotto1 = 2.98;
    const double prodotto2 = 4.50;
    const double prodotto3 = 9.98;
    const double prodotto4 = 4.49;
    const double prodotto5 = 6.87;
    int codiceProdotto;
    double VenSettimana;

    do
    {
        cout << "Codice numerico del prodotto(9999 to exit): ";
        cin >> codiceProdotto;
        cout << "Quantità venduta in una giornata: ";
        cin >> quantVenGiorno;

        switch (codiceProdotto)
        {
        case 1:
            VenSettimana = prodotto1 * quantVenGiorno * 7;
            break;

        case 2:
            VenSettimana = prodotto2 * quantVenGiorno * 7;
            break;

        case 3:
            VenSettimana = prodotto3 * quantVenGiorno * 7;
            break;

        case 4:
            VenSettimana = prodotto4 * quantVenGiorno * 7;
            break;

        case 5:
            VenSettimana = prodotto5 * quantVenGiorno * 7;
            break;

        default:
            cout << "prodotto inesistente!" << endl;
        }

        cout << "Settimana: $" << VenSettimana << endl;
    } while (codiceProdotto != 9999);

    return 0;
}