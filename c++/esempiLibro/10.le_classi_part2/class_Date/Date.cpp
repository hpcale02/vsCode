#include <iostream>
using namespace std;

#include "Date.h"

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= 12)
        month = mn;
    else
    {
        month = 1;
        cout << "mese (" << mn << ") invalido! Impostato a 1." << endl;
    }

    year = yr;
    day = checkDay(dy);

    cout << "costruttore di Date: ";
    print();
    cout << endl;
}

void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

Date::~Date()
{
    cout << "distruttore di Date: ";
    print();
    cout << endl;
}

int Date::checkDay(int testDay) const
{
    static const int daysPerMonth[13] =
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    cout << "Data (" << testDay << ") invalido!" << endl;
    return 1; //lascia l'oggetto in uno stato consistente
}