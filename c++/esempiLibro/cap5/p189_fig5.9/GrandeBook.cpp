//fig 5.10 pag 189
//hpc 10.04.2021

#include <iostream>
#include"GrandeBook.h"
using namespace std;

GrandeBook::GrandeBook( string nome )
{
    setCourseName( nome );
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GrandeBook::setCourseName( string name )
{
    if (name.length() <= 25 )
    {
        courseName = name;
    }
    else
    {
        courseName = name.substr( 0, 25 );
        cout << name << " ha superato i limiti (25 caratteri)" << endl;
    }
}

string GrandeBook::getCourseName()
{
    return courseName;
}

void GrandeBook::displayMessage()
{
    cout << "benvenuti al corso di " << courseName << endl;
}

void GrandeBook::inputVoti()
{
    int voti;

    cout << "inserisci i voti (A, B, C, D, F)" << endl;
    cout <<"inserisci caratteri EOF (ctrl-d/ctrl-z) per terminare l'inserimento" << endl;

    while ( ( voti = cin.get() ) != EOF )
    {
        switch ( voti )
        {
        case 'A':
        case 'a':
            aCount++;
            break;

        case 'B':
        case 'b':
            bCount++;
            break;
        
        case 'C':
        case 'c':
            cCount++;
            break;

        case 'D':
        case 'd':
            dCount++;
            break;

        case 'F':
        case 'f':
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout << "il voto inserito invalido!\n Inserisci un nuovo voto" << endl;
            break; //opzionale
        }
    }  
}

void GrandeBook::displayVoti()
{
    cout << "\n\nNumero dei studenti corridspodenti a ogni voto: "
    << "\nA: " << aCount
    << "\nB: " << bCount
    << "\nC: " << cCount
    << "\nD: " << dCount
    << "\nF: " << fCount
    <<endl;
}