//Class Invoice ==> Rapressentare la fattura la fattura di vendita di un componente
//hpc 08.04.2021

#include <iostream>
#include <string>
using namespace std;

#include "ClassInvoice.h"

Invoice::Invoice(string nomeCodice, string des, int pezzi, int prezzo )
{
    setCodiceComponente( nomeCodice );
    setDescrizione( des );
    setPezziAquistati( pezzi );
    setPrezzoUnitario( prezzo );
}

//Codice componente
void Invoice::setCodiceComponente( string nomeCodice )
{
    codiceComponente = nomeCodice;
}

string Invoice::getCodiceComponente()
{
    return codiceComponente;
}

//Descrizione
void Invoice::setDescrizione( string des )
{
    descrizione = des;
}

string Invoice::getDescrizione()
{
    return descrizione;
}

//pezzi aquistati
void Invoice::setPezziAquistati( int pezzi )
{
    if(pezzi > 0)
        unitaAquistata = pezzi;
    else
        unitaAquistata = 0;
}

int Invoice::getPezziAquistati()
{
    return unitaAquistata;
}

//Prezzi unitari
void Invoice::setPrezzoUnitario( int prezzo )
{
    if(prezzo > 0)
        prezzoUnitario = prezzo;
    else
        prezzoUnitario = 0;
}

int Invoice::getPrezzoUnitario()
{
    return prezzoUnitario;
}

//prezzo totale
int Invoice::getInvoiceAmount()
{
    return getPrezzoUnitario() * getPezziAquistati();
}

void Invoice::displayMessage()
{
    cout << "codice componente: " << getCodiceComponente() << endl;
        cout << "descrizione componente: " << getDescrizione() << endl;
        cout << "quantità aquistata: " << getPezziAquistati() << endl;
        cout << "prezzo unitario: " << getPrezzoUnitario() << endl;
        cout << "prezzo totale: " << getInvoiceAmount() << endl << endl;
}