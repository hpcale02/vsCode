//fig 3.5 pag 78
//Definizione della classe GrandeBook con un dato membro coursename
//e funzioni membro per impostare (set) e legge (get) il suo valore
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GrandeBook
{
public:
    //funzione che imposta il nome del corso
    void setCourseName( string name )
    {
        courseName = name; //memorizza il corse dell'oggetto
    }

    //funzione che legge il nome del corso
    string getCourseName()
    {
        return courseName; //restituisce il valore della variabile courseName dell'oggetto
    }

    //funzione che visualizza un messagio di benvenuto
    void displayMessage()
    {
        //questo istruzione chiama getCourseName per avere il nome dek corso che questo oggetto GrandeBook repressenta
        cout << "Welcome to the grande book for \n" << getCourseName() << "!" << endl;
    }
private:
    string courseName; //nome del corso per questo oggetto GrandeBook
};

int main()
{
    string nameOfCourse;

    GrandeBook myGrandeBook;

    //viasualizzare il valore iniziale di courseName
    cout << "Initial cours name is: " << myGrandeBook.getCourseName() << endl;

    //chiedere l'inserimento del nome del corso
    cout << "\n Please enter the course name: " << endl;
    getline(cin, nameOfCourse);

    myGrandeBook.setCourseName( nameOfCourse ); //imposta il nome del corso

    cout << endl;
    myGrandeBook.displayMessage();

    return 0;
}
