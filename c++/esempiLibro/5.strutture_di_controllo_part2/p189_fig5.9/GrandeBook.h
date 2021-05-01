//fig 5.9 pag 189
//hpc 10.04.2021

#include <string>
using namespace std;

class GrandeBook
{
private:
    string courseName;
    int aCount;
    int bCount;
    int cCount;
    int dCount;
    int fCount;

public:
    GrandeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void inputVoti();
    void displayVoti();
};