//fig 3.15 p 99
//Definezione della classe GrandeBook. Questo file presenta l'interfaccia
//hpc 08.04.2021

#include <string>
using std::string;

//definizione della classe GrandeBook
class GrandeBook
{
public:
    GrandeBook( string ); //costruttore che inizializza courseName
    void setCourseName( string ); //funzione per impostare il nome del corso
    string getCourseName(); //funzione per leggere il nome del corso
    void displayMessage(); //funzione che viasualizza un messagio di benvenuto

private:
    string courseName; //nome del corso per questo GrandeBook
};