//Class Invoice ==> Rapressentare la fattura la fattura di vendita di un componente
//hpc 08.04.2021

#include <string>
using namespace std;

class Invoice
{
private:
    string codiceComponente;
    string descrizione;
    int unitaAquistata;
    int prezzoUnitario;

public:
    Invoice( string, string, int, int );
    void setCodiceComponente( string );
    string getCodiceComponente();
    void setDescrizione( string );
    string getDescrizione();
    void setPezziAquistati( int );
    int getPezziAquistati();
    void setPrezzoUnitario( int );
    int getPrezzoUnitario();
    int getInvoiceAmount();
    void displayMessage();
};