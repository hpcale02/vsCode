//funzioni friend
//hpc 24.05.2021

#include <iostream>
using namespace std;

class Count
{
    friend void setX(Count &, int);

public:
    Count()
        : x(0)
    {
    }
    void print() const
    {
        cout << x << endl;
    }

private:
    int x;
};

void setX(Count &c, int val)
{
    c.x = val;
}

int main()
{
    Count counter;

    cout << "counter.x: ";
    counter.print();

    setX(counter, 8);
    cout << "counter.x dopo setX: ";
    counter.print();
    return 0;
}