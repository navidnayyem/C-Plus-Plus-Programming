#include <iostream>
using namespace std;

class A
{
private:
    void Personal()
    {
        cout << "I am not accessible from any of my children" << endl;
    }
protected:
    void shareable1()
    {
        cout << "I am shareable from class A" << endl;
    }
public:
    A()
    {
        cout << "I am constructor of class A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Hello B" << endl;
    }
    void print()
    {
        shareable1();
//        Personal(); //  Personal() cannot be accessed/executed because it is private.
    }
};

int main()
{
    B obj;
    obj.print();
}
