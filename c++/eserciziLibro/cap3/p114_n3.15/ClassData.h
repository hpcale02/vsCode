//Class Data
//Stampare dati
//hpc 08.04.2021

#include <iostream>
using namespace std;

class Data
{
private:
    int data;
    int mese;
    int anno;

public:
    Data( int, int, int );
    void setGiorno( int );
    int getGiorno();
    void setMese( int );
    int getMese();
    void setAnno( int );
    int getAnno();
    void displayData();
};