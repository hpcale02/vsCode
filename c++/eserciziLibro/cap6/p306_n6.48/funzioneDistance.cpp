//calcola la distanza tra due punti (x1, y1) e (x2, y2)
//teorema di pitagora per calcolare distanza

#include <iostream>
using namespace std;

int main()
{
    double x1, y1;
    double x2, y2;
    double distanza;
    double distanzaX, distanzaY;

    cout << "inserisci le coridnate del primo punto(x1; y1): ";
    cin >> x1 >> y1;
    cout << "inserisci le cordinate del secondo punto(x2; y2): ";
    cin >> x2 >> y2;

    distanzaX = x2 - x1;
    distanzaY = y2 - y1;

    distanza = sqrt(distanzaX * distanzaX + distanzaY * distanzaY);

    cout << "La distanza tra due punti è " << distanza << endl;

    return 0;
}