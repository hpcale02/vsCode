//modificare il programma della figura 8.27 in modo che le carte vengono distribuiti a una mano di poker (5 carte)
//hpc 03.05.2021

#include "Poker.hpp"

int main(){
    Poker poker;

    poker.mischiareCarte();
    poker.distribuireCarte();
    poker.visualizzareMazzo();
    poker.determinare();

    return 0;
}
