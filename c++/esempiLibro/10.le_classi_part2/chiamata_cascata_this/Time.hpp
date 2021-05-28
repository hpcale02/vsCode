#ifndef TIME_HPP
#define TIME_HPP

class Time
{
public:
    Time(int = 0, int = 0, int = 0); //costruttore di default

    //funzioini set
    Time &setTime(int, int, int);
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);

    //funzioni get
    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void printUniversal() const;
    void printStandard() const;

private:
    int hour;
    int minute;
    int second;
};

#endif