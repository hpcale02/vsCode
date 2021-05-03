//Utilizzo distrcmp e strncmp
//hpc 03.05.2021

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    char *s1 = "Happy New year";
    char *s2 = "Happy New Year";
    char *s3 = "Happy Holidays";

    cout << "s1 = " << s1
         << "\ns2 = " << s2
         << "\ns3 = " << s3 << endl;

    cout << "\nstrcmmp(s1, s2) = " << setw(2) << strcmp(s1, s2)
         << "\nstrcmmp(s1, s3) = " << setw(2) << strcmp(s1, s3)
         << "\nstrcmmp(s3, s1) = " << setw(2) << strcmp(s3, s1) << endl;

    cout << "\nstrncmp(s1, s3, 6) = " << setw(2) << strncmp(s1, s3, 6)
         << "\nstrncmp(s1, s3, 7) = " << setw(2) << strncmp(s1, s3, 7)
         << "\nstrncmp(s3, s1, 7) = " << setw(2) << strncmp(s3, s1, 7) << endl;

    return 0;
}