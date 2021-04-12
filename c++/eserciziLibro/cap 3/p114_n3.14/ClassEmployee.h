//Class Employee
//Stipendio mensile/annuale di operatore/i
//hpc 08.04.2021

#include <string>
using namespace std;

class Employee
{
private:
    string nome;
    string cognome;
    int stipendioMensile;

public:
    Employee( string, string, int );
    void setNome( string );
    string getNome();
    void setCognome( string );
    string getCognome();
    void setStipendio( int );
    int getStipendio();
    void displayMessage();
};
