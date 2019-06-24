#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
    friend class B;
};

class B
{
public:
    int m;
    void input(A &ob)
    {
        cout << "Enter 1st Number: ";
        cin >> m;
        cout << "Enter 2nd Number: ";
        cin >> ob.p;
        cout << "Enter 3rd Number: ";
        cin >> ob.q;
    }
    void sum(A &ob)
    {
        int s;
        s = m + ob.p + ob.q;
        cout << endl << "Sum = " << s << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.input(obj1);
    obj2.sum(obj1);
}
