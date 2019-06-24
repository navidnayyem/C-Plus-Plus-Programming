#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
//    friend class B;
    void input()
    {
        cout << "Enter 1st Number: ";
        cin >> p;
        cout << "Enter 2nd Number: ";
        cin >> q;
    }
    friend class B;
};

class B
{
public:
    int m;
    void input()
    {
        cout << "Enter 3rd Number: ";
        cin >> m;
    }
    void sum(A ob)
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
    obj1.input();
    obj2.input();
    obj2.sum(obj1);
}
