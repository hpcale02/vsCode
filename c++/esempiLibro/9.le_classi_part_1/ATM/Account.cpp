#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    bool validatePIN(int); //PIN fornito dall'utente corretto?
    double getAvailableBalance(); //restituisce il salde effettivo
    double getTotalBalance(); //restituisce il saldo totale
    void credit(double); //aggiungere l'importo sul conto
    void debit(double); //storna l'ammontare dal conto

private:
    int accountNumber; //numero di conto
    int pin; //codice PIN per l'autenticazione
    double availableBalance; //disponibilità per i prelievi
    double totalBalance; //disponibilità totale
};

#endif