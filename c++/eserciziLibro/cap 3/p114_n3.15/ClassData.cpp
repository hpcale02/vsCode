//Class Data
//Stampare dati
//hpc 08.04.2021

#include <iostream>
#include "ClassData.h"
using namespace std;

Data::Data( int data, int mese, int anno)
{
    setGiorno( data );
    setMese( mese );
    setAnno( anno );
}

void Data::setGiorno( int day )
{
    if(day > 0 && day < 32)
        data = day;
    else
    {
        data = 1;
        cout << "data errata!" << endl;
    }
}

int Data::getGiorno()
{
    return data;
}

void Data::setMese( int month )
{
    if(month > 0 && month < 13)
        mese = month;
    else
    {
        mese = 1;
        cout << "mese errato!" << endl;
    }
}

int Data::getMese()
{
    return mese;
}

void Data::setAnno( int year )
{
    if(year > 0 && year <10000)
        anno = year;
    else
        cout << "anno errato!" << endl;
}

int Data::getAnno()
{
    return anno;
}

void Data::displayData()
{
    if(data > 9 && mese > 9)
        cout << getGiorno() << "/" << getMese() << "/" << getAnno() << endl << endl;
    if(data > 9 && mese < 9)
        cout << getGiorno() << "/0" << getMese() << "/" << getAnno() << endl << endl;
    if(data < 9 && mese > 9)
        cout << "0" << getGiorno() << "/" << getMese() << "/" << getAnno() << endl << endl;
    if(data < 9 && mese < 9)
        cout << "0" << getGiorno() << "/0" << getMese() << "/" << getAnno() << endl << endl;
}