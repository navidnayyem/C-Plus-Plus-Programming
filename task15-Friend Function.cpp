#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
    A()
    {
        p = 100, q = 100;
    }
    void myth()
    {
        cout << "This is a Friend Function" << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    friend void outsider(A ob);
};

void outsider(A ob)
{
    int s,m,n;
    cout << "\nEnter M: " << endl;
    cin >> m;
    cout << "Enter N: " << endl;
    cin >> n;
    s = ob.p + ob.q + m + n;
    cout << "\nTotal after accessing Friend Class : "<< s << endl;
}

int main()
{
    A obj;
    obj.myth();
    obj.truth();
    outsider(obj);
}
