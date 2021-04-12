//classe che cripta e decripta
//hpc 10.04.2021

class Codice
{
private:
    int codice;

public:
    Codice( int );
    void setCodice( int );
    int getCodice ();
    int crittaCodice();
    void decrittaCodice( int );
};
