//Creare una class Account che la banca utilizza per rapressentare i cont correnti dei suoi clienti
//hpc 08.04.2021

#include <iostream>
#include <string>
using namespace std;

#include "ClassAccount.h"

Account::Account( int conto, string name )
{
    setContoCorrente( conto );
    setNameAccount( name );
}

void Account::setNameAccount( string name )
{
    nameAccount = name;
}

void Account::setContoCorrente( int conto )
{
    if(conto >= 0)    
        saldo = conto;
    else
    {
        saldo = 0;
        cout << "saldo inserito non valido" << endl;
    }
}

string Account::getNameAccount()
{
    return nameAccount;
}

int Account::getContoCorrente()
{
    return saldo;
}

void Account::credit( int conto )
{
    if(conto > 0)
        saldo += conto;
    else
        cout << "saldo inserito non valido " << endl;
}

void Account::debit (int conto )
{
    if(conto < saldo )
        saldo -= conto;
    else
    {
        cout << "il saldo di prelievo inserito è superiore al tuo conto signore/a " << getNameAccount()<< endl;
    }
}

void Account::displayMessage()
{
    cout << "conto residuo del signore/a " << getNameAccount() << ": " << getContoCorrente() << endl;
}