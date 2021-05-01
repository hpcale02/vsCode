//fig 3.7 pag 85
//Creazione di diversi oggetti della classe GrandeBook utillizando
//il costruttore delle classe per specificare il nome del corso
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GrandeBook
{
public:
    //il costruttore inizializza courseName con la stringa passata come argomento
    GrandeBook( string name )
    {
        setCourseName( name ); //riuchiama la funzione set per inizializzare courseName
    }
    
    //funzione per impostare il nome del corso 
    void setCourseName( string name )
    {
        courseName = name; 
    }

    //funzione per leggere il nome del corso
    string getCourseName()
    {
        return courseName;
    }

    //visualizza il messagio di benvenuto all'utente
    void displayMessage()
    {
        cout << "Welcome to the grande book for\n" << getCourseName() << "!" << endl;
    }

private:
    string courseName;
};

int main()
{
    //creare due oggetti GrandeBook 
    GrandeBook grandeBook1( "CS101 Introduction to C++ Programming");
    GrandeBook grandeBook2( "Cs102 Data Structures in C++");

    //visualizza il nome/valore iniziale del corso per ogni ogetto GrandeBook
    cout << "grandeBook1 created for course: " << grandeBook1.getCourseName() 
    << "\ngrandeBook2 created for course: " << grandeBook2.getCourseName() << endl;

    return 0;
} 