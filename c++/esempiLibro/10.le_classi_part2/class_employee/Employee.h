#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
    Employee(const char * const, const char * const); //costruttore
    ~Employee(); //distruttore
    const char *getFirstName() const; //restituisce il nome
    const char *getLastName() const; //restituisce il cognome
    
    static int getCounter(); // calcola numeri di ogetti

private:
    char *firstName;
    char *lastName;

    static int count; // numeri ogetti
};

#endif