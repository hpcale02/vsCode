//Class Employee
//Stipendio mensile/annuale di operatore/i
//hpc 08.04.2021

#include <iostream>
#include <string>
#include "ClassEmployee.h"
using namespace std;

Employee::Employee( string name, string firstName, int pay)
{
    setNome( name );
    setCognome( firstName );
    setStipendio( pay );
}

void Employee::setNome( string name )
{
    nome = name;
}

string Employee::getNome()
{
    return nome;
}

void Employee::setCognome( string firstName )
{
    cognome = firstName;
}

string Employee::getCognome()
{
    return cognome;
}

void Employee::setStipendio( int stipendio )
{
    if(stipendio > 0)
        stipendioMensile = stipendio;
    else
        stipendioMensile = 0;
}

int Employee::getStipendio()
{
    return stipendioMensile;
}

void Employee::displayMessage()
{
    cout << getCognome() << " " << getNome() << ": " << endl;
    cout << "STIPENDIO MENSILE: " << getStipendio() << endl;
    cout << "STIPENDIO ANNUALE: " << getStipendio() * 12 << endl;
    cout << "AUMENTO DEL 10%: " << getStipendio() + getStipendio() * 10 / 100 << endl;
    cout << "STIPENDIO ANNUALE CON AUMENTO: " << (getStipendio() + getStipendio() * 10 / 100) * 12 << endl << endl;
} 