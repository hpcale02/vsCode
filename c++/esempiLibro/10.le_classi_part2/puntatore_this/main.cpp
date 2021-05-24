//puntatore this
//hpc 24.05.2021

#include <iostream>
using namespace std;

class Test
{
public:
    Test(int = 0);
    void print() const;

private:
    int x;
};

Test::Test(int value)
    : x(value)
{
}

void Test::print() const
{
    cout << "        x = " << x;
    cout << "\n  this->x = " << this->x;
    cout << "\n(*this).s = " << (*this).x << endl;
}

int main()
{
    Test testObject(12);

    testObject.print();
    return 0;
}