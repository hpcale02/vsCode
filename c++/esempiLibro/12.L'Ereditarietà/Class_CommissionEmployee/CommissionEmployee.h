#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <string>
using std::string;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setFirstName(const string &);            //imposta il nome
    void setLastName(const string &);             //imposta il cognome
    void setSocialSecurityNumber(const string &); //imposta la pos. INPS
    void setGrossSales(double);                   //imposta il totale vendita
    void setCommissionRate(double);               //imposta la percentuale

    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    double getGrossSales() const;
    double getCommissionRate() const;

    double earnings() const; //calcola la retribuzione
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;      //totale vendite
    double commissionRate; //percentuale sulle vendite
};

#endif