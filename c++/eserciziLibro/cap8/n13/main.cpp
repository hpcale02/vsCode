//modificare il programma della figura 8.27 in modo che le carte vengono distribuiti a una mano di poker (5 carte)
//hpc 03.05.2021
#include <iostream>
#include "Poker.hpp"
using namespace std;

int main()
{
    Poker player1;
    Poker player2;

    cout << "Player1: " << endl;
    player1.mischiareCarte();
    player1.distribuireCarte();
    player1.visualizzareMazzo();
    player1.determinare();

    cout << "\nPlayer2: " << endl;
    player2.mischiareCarte();
    player2.distribuireCarte();
    player2.visualizzareMazzo();
    player2.determinare();

    cout << endl;

    if (player1.getPeso() < player2.getPeso())
        cout << "Ha vinto Palyer2!\n"
             << endl;
    else if (player1.getPeso() > player2.getPeso())
        cout << "Ha vinto Player1!\n"
             << endl;
    else
        cout << "Pareggio!\n"
             << endl;

    return 0;
}