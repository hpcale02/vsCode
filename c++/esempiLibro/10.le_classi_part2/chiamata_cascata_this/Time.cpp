#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.hpp"

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

Time &Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);

    return *this;
}

Time &Time::setHour(int hr)
{
    hour = (hr >= 0 && hr < 24) ? hr : 0;
    return *this;
}

Time &Time::setMinute(int min)
{
    minute = (min >= 0 && min < 60) ? min : 0;
    return *this;
}

Time &Time::setSecond(int sec)
{
    second = (sec >= 0 && sec < 60) ? sec : 0;
    return *this;
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::printStandard() const
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
}