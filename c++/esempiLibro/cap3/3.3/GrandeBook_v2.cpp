//fig 3.3 pag 74
//Definizione della classe GrandeBook con la funzione membro con un parametro
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> //il programma utilizza la classe standard string
using std::string;
using std::getline;

//definizione della classe GrandeBook
class GrandeBook
{
public:
    //funziuone che visualizza un messaggio di benvenuto all'utente della classe
    void displayMessage( string courseName)
    {
        cout << "Wlcome to the Grande Book for\n" << courseName << "!" << endl;
    }
};

int main()
{
    string nameOfCourse; //per memorizzare il nome del corso

    GrandeBook myGrandeBook;

    //chiede l'inserimento del nome del corso
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); //leggere il nome del corso compresi gli spazi
    cout << endl;

    //chiamata alla funzione displayMessage di myGrandeBook
    //e passaggio di nameOfCourse come argomento
    myGrandeBook.displayMessage(nameOfCourse);

    return 0;
}