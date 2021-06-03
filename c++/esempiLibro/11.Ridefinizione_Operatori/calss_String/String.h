#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class String
{
    friend ostream &operator<<(ostream &, const String &);
    friend istream &operator>>(istream &, String &);

public:
    String(const char * = ""); //costruttore di default
    String(const String &);    //costruttore di copia
    ~String();

    const String &operator=(const String &);
    const String &operator+=(const String &);

    bool operator!() const; //string vuota?
    bool operator==(const String &) const;
    bool operator<(const String &) const;

    bool operator!=(const String &right) const
    {
        return !(*this == right);
    }
    bool operator>(const String &right) const
    {
        return right < *this;
    }
    bool operator<=(const String &right) const
    {
        return !(right < *this);
    }
    bool operator>=(const String &right) const
    {
        return !(*this < right);
    }

    char &operator[](int);
    char operator[](int) const;
    String operator()(int, int = 0) const; //restituisce una sottostringa
    int getLength() const;

private:
    int length; //lunghezza della stringa
    char *sPtr; //puntatore al primo carattere della stringa

    void setString(const char *); //funzione di utilità
};

#endif