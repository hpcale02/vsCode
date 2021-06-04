#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include <string>
using std::string;

class BasePlusCommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

    void setFirstName(const string &);            //imposta il nome
    void setLastName(const string &);             //imposta il cognome
    void setSocialSecurityNumber(const string &); //imposta la pos. INPS
    void setGrossSales(double);                   //imposta il totale vendita
    void setCommissionRate(double);               //imposta la percentuale
    void setBaseSalary(double);                   //imposta il fisso mensile

    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    double getGrossSales() const;
    double getCommissionRate() const;
    double getBaseSalary() const;

    double earnings() const; //calcola la retribuzione
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;     //totale vendite
    double commissionRate; //percentuale sulle vendite
    double baseSalary;     //fisso mensile
};

#endif