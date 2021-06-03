#include <iostream>
using namespace std;

#include "String.h"

int main()
{
     String s1("happy");
     String s2(" birthday");
     String s3;

     cout << "s1: " << s1
          << "\ns2: " << s2 << endl;

     cout << boolalpha << "\nRisultato di comparazione s1 e s2:"
          << "\ns2 == s1 ==> " << (s2 == s1)
          << "\ns2 != s1 ==> " << (s2 != s1)
          << "\ns2 > s1 ==> " << (s2 > s1)
          << "\ns2 < s1 ==> " << (s2 < s1)
          << "\ns2 >= s1 ==> " << (s2 >= s1)
          << "\ns2 <= s1 ==> " << (s2 <= s1);

     cout << "\n\ntsting !s3" << endl;
     if (!s3)
     {
          cout << "s3 è vuoto "
               << "\nAssegnare s1 a s3" << endl;

          s3 = s1;

          cout << "s3 dopo assegnamento:" << endl;
          cout << s3;
     }

     cout << "\n\ns1 += s2: " << endl;
     s1 += s2;
     cout << s1;

     cout << "\n\ns1 += to you: " << endl;
     s1 += " to you";
     cout << s1;

     cout << "\n\nsotto-strigna s1(0, 14): " << s1(0, 14);

     cout << "\n\nsotto-stringa s1(15): " << s1(15);

     String *s4Ptr = new String(s1);
     cout << "\n*s4Ptr: " << *s4Ptr;

     cout << "\nautoassegnamento di *s4Ptr a *s4Ptr" << endl;
     *s4Ptr = *s4Ptr;
     cout << "\n*s4Ptr: " << *s4Ptr;

     delete s4Ptr;

     s1[0] = 'H';
     s1[6] = 'B';
     cout << "\nDopo s1[0] = 'H' e s1[6] = 'B': " << endl;
     cout << "s1: " << s1;

     cout << "\n\nattentato a assegnare 'd' a s1[30]:" << endl;
     s1[30] = 'd';
     return 0;
}