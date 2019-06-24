#include <iostream>
using namespace std;

class B;
//Body of Class A
class A
{
private:
    int p,q;
public:
    A()
    {
        p = 100, q = 500;
    }
    void myth()
    {
        cout << "P + Q = " << p+q << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    friend void outsider(A ob1, B ob2, int t);
};

//Body of Class B
class B
{
public:
    int r;
    B()
    {
       r = 50 ;
    }
    void myth()
    {
        cout << "R = " << r << endl;
    }
    void truth()
    {
        cout << "Square of R = " << r*r << endl;
    }
};

//Friend Function
void outsider(A ob1, B ob2, int t)
{
    int s,m,n;
    cout << "\nInput Value of M & N: " << endl;
    cin >> m >> n;
    s = m + n + ob1.p + ob1.q + ob2.r + t;
    cout << "OB1.P = " << ob1.p << endl << "OB1.Q = " << ob1.q << endl << "OB2.R = " << ob2.r << endl << "M = " << m << endl << "N = " << n << endl <<"T = " << t << endl;
    cout << s << endl;
}

int main()
{
    A ob1;
    B ob2;
    cout << "From Independent Function";
    outsider(ob1,ob2,80);
    ob2.myth();
    ob2.truth();
    return 0;
}
