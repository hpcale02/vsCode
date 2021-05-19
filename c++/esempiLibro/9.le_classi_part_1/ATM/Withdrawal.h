#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

class Screen; // dichiarazione anticipata della classe Screen
class Keypad; // dichiarazione anticipata della classe Keypad
class CashDispenser; // dichiarazione anticipata della classe CashDispenser
class BankDatabase; //dichiarazione anticipata della classe BankDatabase

class Withdrawal
{
public:
    //operazione
    void execute();
private:
    //attributi
    int accountNumber;
    double amount;
    
    //riferimenti agli oggetti associati
    Screen &screen;
    Keypad &keypad;
    CashDispenser &cashDispenser;
    BankDatabase &bankDatabase;
};

#endif