//Creare una class Account che la banca utilizza per rapressentare i cont correnti dei suoi clienti
//hpc 08.04.2021

#include <iostream>
using namespace std;

class Account
{
private:
    int saldo;
    string nameAccount;

public:
    Account( int, string );
    void setNameAccount( string );
    void setContoCorrente( int );
    string getNameAccount();
    int getContoCorrente();
    void credit( int );
    void debit( int );
    void displayMessage();
};