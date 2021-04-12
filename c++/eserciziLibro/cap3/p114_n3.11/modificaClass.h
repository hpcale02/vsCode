//es pag 114 v 3.11
//modificare la classe GrandeBook
//hpc 08.04.2021

#include <string>
using std::string;

class GrandeBook
{
private:
    string courseName;
    string profName;
public:
    GrandeBook( string, string );
    void setCourseName( string );
    string getCourseName();
    void setProfName( string );
    string getProfName();
    void displayMessage();
};