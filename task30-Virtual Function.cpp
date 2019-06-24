#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "I am A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "I am B" << endl;
    }
};

int main()
{
    A *a;
    A obj;
    B b;
    obj.show();
//    a->show();
    a = &b;
    a->show();
}
