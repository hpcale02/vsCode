//fig 3.9 p 89
//Definizione della classe GrandeBook in un file separato dal main
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GrandeBook
{
public:
    //costruttore che inizialiozza courseName
    GrandeBook( string name )
    {
        setCourseName( name );
    }

    //impostare il nome del corso
    void setCourseName ( string name )
    {
        courseName = name;
    }

    //legge il npome del corso 
    string getCourseName()
    {
        return courseName;
    }

    //visualizzare un messagio di benvenuto all'utente
    void displayMessage()
    {
        cout << "Welcome to the grande book for\n" << getCourseName() << "!" << endl;
    }
    
private:
    string courseName;
};
