#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
    friend ostream &operator<<(ostream &, const Date &);

public:
    Date(int m = 1, int d = 1, int y = 1900); //costruttore di default
    void setDate(int, int, int);
    Date &operator++(); //preincremento
    Date operator++(int); //posinclremento
    const Date &operator+=(int);
    bool leapYear(int) const; //anno bisestile?
    bool endOfMonth(int) const; //ultimo giorno del m ese?

private:
    int month;
    int day;
    int year;

    static const int days[]; //array dei giorni per ogni mese
    void helpIncrement();
};

#endif