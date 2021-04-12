//es n 4.14 pag 167
//hpc 09.04.2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; //assicura che venga visuallizato il punto decimale

#include <iomanip> //manipolatore di stream parametrico
using std::setprecision; //imposta la precisione dei valori numerici


int main()
{
    int numeroCliente = 0;
    double bilancioIniziale;
    double totaleAcquisti;
    double totaleCredito;
    double creditoMassimo;
    double nuovoBilancio;


    while ( numeroCliente != -1 )
    {
        cout << "Numero Cliente: ";
        cin >> numeroCliente;
        cout << "Bilancio Iniziale: ";
        cin >> bilancioIniziale;
        cout << "Acquisti Totali: ";
        cin >> totaleAcquisti;
        cout << "Crediti Totale: ";
        cin >> totaleCredito;
        cout << "Credito Massimo: ";
        cin >> creditoMassimo;

        nuovoBilancio = bilancioIniziale + totaleAcquisti - totaleCredito;
        cout << "Bilancio nuovo: " << setprecision( 2 ) << fixed << nuovoBilancio << endl; 

        if ( nuovoBilancio > creditoMassimo )
        {
            cout << "\nNumero Cliente. " << setprecision( 2 ) << fixed << numeroCliente << endl;
            cout << "Limite Credito: " << setprecision( 2 ) << fixed << totaleCredito << endl;
            cout << "Bilancio Nuovo: " << setprecision( 2 ) << fixed << nuovoBilancio << endl;
            cout << "Credito superato limiti!" << endl << endl;
        }
        else
            cout << endl;

    }
    return 0;
}