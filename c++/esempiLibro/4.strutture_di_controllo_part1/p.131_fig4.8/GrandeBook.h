//fig 4.8 pag 131
//Definizione della classe GrandeBook che calcola la media
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
