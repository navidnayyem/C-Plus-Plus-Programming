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
    void show()
    {
        cout << "Hello" << endl;
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
        void show()
        {
            cout << "World" << endl;
        }
};

class C: public A, public B
{
public:
    void show()
    {
        cout << "I am from C" << endl;
        B :: show();
    }
};

int main()
{
    C obj;
    obj.show();
    obj.A :: show();
    obj.B :: show();
}
