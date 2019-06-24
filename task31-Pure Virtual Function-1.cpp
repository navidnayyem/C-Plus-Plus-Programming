#include <iostream>
using namespace std;

class Base
{
public:
    virtual void speech()
    {
        cout << "From Base Class" << endl;
    }
};

class derived : public Base
{
public:
    void speech()
    {
        cout << "From Derived Class" << endl;
    }
};


int main()
{
    Base *b;
    derived d;
    Base obj;
    obj.speech();
    b = &d;
    b->speech();
    return 0;
}
