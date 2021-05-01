//Definizoine della classe DeckOfCards(mazzo di carte da giochi)
//hpc 01.05.2021

class DeckOfCards
{
private:
    int deck[4][13];
public:
    DeckOfCards(); //costruttore che inizializza il mazzo
    void shuffle(); // mescolare il deck
    void deal(); // distribuire le carte 
};