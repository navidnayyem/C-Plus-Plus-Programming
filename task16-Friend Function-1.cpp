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
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    void truth()
    {
        cout << "P + Q = " << p+q << endl;
    }
    friend void outsider(A ob, int t);
};

void outsider(A ob, int t)
{
    int s,m,n;
    cout << "\nInput Value of M & N: " << endl;
    cin >> m >> n;
    s = m + n + ob.p + ob.q + t;
    cout << s << endl;
}

int main()
{
    A obj;
    obj.myth();
    obj.truth();
    cout << "From Independent Function";
    outsider(obj,50);
}
