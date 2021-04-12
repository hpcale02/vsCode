#include <iostream>
using namespace std;

#include "ClassAccount.h"

int main()
{
    int saldo;

    Account account1( 100, "Pippo" );
    Account account2( 20, "Pietro" );

    account1.displayMessage();
    account2.displayMessage();

    //test credit
    cout << "Deposito signore/a " << account1.getNameAccount() << ": ";
    cin >> saldo;
    account1.credit( saldo );
    cout << "Deposito signore/a " << account2.getNameAccount() << ": ";
    cin >> saldo;
    account2.credit( saldo );
    account1.displayMessage();
    account2.displayMessage();

    //test debit 
    cout << "Prelievo signore/a " << account1.getNameAccount() << ": ";
    cin >> saldo;
    account1.debit( saldo );
    cout << "Deposito signore/a " << account2.getNameAccount() << ": ";
    cin >> saldo;
    account2.debit( saldo );
    account1.displayMessage();
    account2.displayMessage();

    return 0;
}