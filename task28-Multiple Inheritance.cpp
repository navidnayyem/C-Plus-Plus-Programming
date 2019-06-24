#include <iostream>
using namespace std;

class A
{
protected:
      int p;
public:
    A()
    {
        cout << "I am from A" << endl;
    }
};

class B
{
protected:
    int q;
    public:
        B()
        {
            cout << "I am from B" << endl;
        }
};

class C: public A, public B
{
public:
    void show()
    {
        cin  >> p >> q;
        cout << p + q;
    }
};

int main()
{
    C obj;
    obj.show();
}
