#include <iostream>
using namespace std;

class A
{
public:
    int p,q;
    A()
    {
        p = 100, q = 500;
    }
    void myth()
    {
        cout << "\nP + Q = " << p + q << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl << "Q = " << q;
    }
};

class B
{
public:
    int r;
    B()
    {
        r = 200;
    }
    void myth()
    {
        cout << "Square of R is: " << r*r << endl;
    }
    void truth()
    {
        cout << "R = " << r << endl;
    }
};


int main()
{
    A obj1;
    B obj2;
    obj1.truth();
    obj1.myth();
    cout << "From Class B " << endl;
    obj2.truth();
    obj2.myth();
    return 0;
}
