//fig 4.9 pag 131
//Definizione della classe GrandeBook che calcola la media con l'aggiunta del cvalore sentinella
//hpc 09.04.2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; //assicura che venga visuallizato il punto decimale

#include <iomanip> //manipolatore di stream parametrico
using std::setprecision; //imposta la precisione dei valori numerici

#include "GrandeBook.h"


GrandeBook::GrandeBook( string nameOfCourse )
{
    setCourseName( nameOfCourse );
}

void GrandeBook::setCourseName( string nameOfCourse )
{
    if( nameOfCourse.length() <= 25 )
        courseName = nameOfCourse;
    else
    {
        courseName = nameOfCourse.substr( 0, 25 );
        cout << "nome inserito troppo lungo (legge al massimo 25 caratteri)\n" << endl;
    }
}

string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::displayMessage()
{
    cout << "Welcome to the grande book for " << getCourseName() << "!\n" << endl;
}

void GrandeBook::determinaMediaVoti()
{
    //dichiarazione variabili
    int totale; //somma dei voti inseriti 
    int numeroVoto; //contatore
    int voto; //voto inserito
    double mediaVoto; //media dei voti

    //inizializzazione
    totale = 0;
    numeroVoto = 0;
    
    //fase operativa 
    cout << " inserisci voto(quit: -1): ";
    cin >> voto;

    while ( voto != -1 )
    {
        totale += voto;
        numeroVoto++;

        cout << " inserisci voto(quit: -1): ";
        cin >> voto;
    }

    //fase conclusiva
    if( numeroVoto != 0 )
    {
        mediaVoto = static_cast<double>( totale ) / numeroVoto; //static_cast<double>( totale ) ==> totale diventa double e calcola la media

        cout << "somma dei voti: " << totale << endl;
        cout << "media dei voti: " << setprecision( 2 ) << fixed << mediaVoto << endl << endl; //setprecision( 2 ) ==> precisione di numeri dopo virgola a due numeri
    }
    else   
    {
        cout << "Non ci sono voti inaseriti\n" << endl;
    }
}