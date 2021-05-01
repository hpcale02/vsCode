//Programma di mescolamento e distribuzione delle carte+

#include "DeckOfCards.hpp"

int main(){
    DeckOfCards deckOfCards;

    deckOfCards.shuffle();
    deckOfCards.deal();
    return 0;
}