#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

#include "String.h"

String::String(const char *s)
    : length((s != 0) ? strlen(s) : 0)
{
    setString(s);
}

String::String(const String &copy)
    : length(copy.length)
{
    setString(copy.sPtr);
}

String::~String()
{
    delete[] sPtr;
}

const String &String::operator=(const String &right)
{
    if (&right != this) //evita autoassegnamento
    {
        delete[] sPtr;
        length = right.length;
        setString(right.sPtr);
    }
    else
        cout << "ERROR: stai facendo un autoassegnamento" << endl;

    return *this;
}

const String &String::operator+=(const String &right)
{
    size_t newLength = length + right.length;
    char *tempPtr = new char[newLength + 1];

    strcpy(tempPtr, sPtr);
    strcpy(tempPtr + length, right.sPtr);

    delete[] sPtr;
    sPtr = tempPtr;
    length = newLength;
    return *this;
}

bool String::operator!() const
{
    return length == 0;
}

bool String::operator==(const String &right) const
{
    return strcmp(sPtr, right.sPtr) == 0;
}

bool String::operator<(const String &right) const
{
    return strcmp(sPtr, right.sPtr) < 0;
}

char &String::operator[](int subscript)
{
    if (subscript < 0 || subscript >= length)
    {
        cerr << "Error: Subscript " << subscript
             << " out of range" << endl;
        exit(1);
    }

    return sPtr[subscript];
}

char String::operator[](int subscript) const
{
    if (subscript < 0 || subscript >= length)
    {
        cerr << "Error: Subscript " << subscript
             << " out of range" << endl;
        exit(1);
    }

    return sPtr[subscript];
}

String String::operator()(int index, int subLength) const
{
    if (index < 0 || index >= length || subLength < 0)
        return "";

    int len; //lunghezza della sottostringa

    if ((subLength == 0) || (index + subLength > length))
        len = length - index;
    else
        len = subLength;

    char *tempPtr = new char[len + 1];

    strncpy(tempPtr, &sPtr[index], len);
    tempPtr[len] = '\0';

    String tempString(tempPtr);
    delete[] tempPtr;
    return tempString;
}

int String::getLength() const
{
    return length;
}

void String::setString(const char *string2)
{
    sPtr = new char[length + 1];

    if (string2 != 0)
        strcpy(sPtr, string2);
    else
        sPtr[0] = '\0';
}

ostream &operator<<(ostream &output, const String &s)
{
    output << s.sPtr;

    return output;
}

istream &operator>>(istream &input, String &s)
{
    char temp[100];
    input >> setw(100) >> temp;
    s = temp;

    return input;
}