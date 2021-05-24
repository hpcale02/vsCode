#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int = 1, int = 1, int = 1900); //costruttore di default
    void print() const; //visualizza la data
    ~Date(); //distruttore (mostrare ordine)
private:
    int month; // 1-12
    int day; // 1-31
    int year;

    //funzine d'utilità per convalidare mese e anno
    int checkDay(int) const;
};

#endif