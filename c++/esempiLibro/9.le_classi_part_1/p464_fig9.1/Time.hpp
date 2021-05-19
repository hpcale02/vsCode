//Dichiarazione della classe Time
//hpc 19.05.2021

#ifndef TIME_HPP
#define TIME_HPP

class Time
{
public:
    Time();
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();

private:
    int hour;
    int minute;
    int second;
};

#endif