class Poker
{
private:
    int Deck[4][13];
    int deckMano[2][5];
    const char *segno[4] = {"♥️", "♦️", "♣️", "♠️"};
    const char *numero[13] = {
        "A",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10",
        "J",
        "Q",
        "K",
    };
    
public:
    Poker();
    void mischiareCarte();
    void distribuireCarte();
    void visualizzareMazzo();
    void determinare();
    bool coppia();
    bool doppiaCoppia();
    bool tris();
    bool pok();
    bool colore();
    bool scala();
};
