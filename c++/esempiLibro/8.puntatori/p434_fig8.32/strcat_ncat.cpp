//Utilizzo di strcat e strncat
//hpc 03.05.2021

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[40] = "";

    cout << "s1 = " << s1
         << "\ns2 = " << s2 << endl;

    strcat(s1, s2);

    cout << "\nAfter strcat(s1, s2):"
         << "\ns1 = " << s1
         << "\ns2 = " << s2 << endl;

    //aggiungi i primi 6 caratteri di s1 a s3
    strncat(s3, s1, 6);

    cout << "\nAfter strncat(s3, s1, 6):"
         << "\ns1 = " << s1
         << "\ns3 = " << s3 << endl;

    strcat(s3, s1);

    cout << "\nAfter strcat(s3, s1):"
         << "\ns1 = " << s1
         << "\ns3 = " << s3 << endl;

    return 0;
}