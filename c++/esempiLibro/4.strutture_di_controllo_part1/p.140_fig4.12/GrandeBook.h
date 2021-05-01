//fig 4.9 pag 131
//Definizione della classe GrandeBook che calcola la media con l'aggiunta del cvalore sentinella
//hpc 09.04.2021

#include <string>
using namespace std;

class GrandeBook
{
private:
    string courseName;
    
public:
    GrandeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();

    void determinaMediaVoti();
};
