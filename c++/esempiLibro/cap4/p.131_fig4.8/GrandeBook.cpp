//fig 4.9 pag 131
//Definizione della classe GrandeBook che calcola la media
//hpc 09.04.2021

#include <iostream>
#include "GrandeBook.h"
using namespace std;

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
    int totale;
    int numeroVoto;
    int voto;
    int mediaVoto;

    //inizializzazione
    totale = 0;
    numeroVoto = 1;
    
    //fase operativa 
    while ( numeroVoto <= 10 )
    {
        cout << " inserisci voto: ";
        cin >> voto;
        totale += voto;
        numeroVoto++;
    }

    //fase conclusiva
    mediaVoto = totale / 10;

    cout << "\nTotale dei 10 voti: " << totale << endl;
    cout << "Media dei 10 voti: " << mediaVoto << endl;
}