//fig 3.1 pag 70
//Definizione della classe GrandeBook con la funzione membro displayMesage
//hpc 07.04.2021

#include <iostream>
using std::cout;
using std::endl;

//definizione della classe GrandeBook
class GrandeBook
{
public: // specificatore d'accesso
    //funzione che visualizza un messaggio di benvenuto all'utente della classe 
    void dispalyMessage() //intestazione della funzione
    {
        cout << "Welcome to the Grande Book!" << endl;
    } //fine della funzione displayMessage
}; //fine della classe GrandeBook

int main()
{
    GrandeBook myGrandeBook; //crea un oggetto GrandeBook chiamato myGrandeBook
    myGrandeBook.dispalyMessage(); //richiama la funzione displayMessage dell'oggetto

    return 0;
}