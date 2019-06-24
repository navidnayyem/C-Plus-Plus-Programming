#include <iostream>
using namespace std;

class Base
{
public:
    int s;
    virtual void printout(int m) = 0;
};

class Derived : public Base
{
public:
    void printout(int m)
    {
        cout << m;
    }
};

int main()
{
    Base *q;
    Derived t;
    q = &t;
    q->printout(15);
    return 0;
}
