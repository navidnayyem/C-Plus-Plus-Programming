#include<iostream>
using namespace std;

class A
{
    double a,b;
public:
    void display()
    {
        cout << "This is a Program to Find out Mean Value of Two Numbers" << endl;
    }
    void input()
    {
        cout << "\nEnter Two Numbers: ";
        cin >> a >> b;
    }
    friend void mean_value(A ob);
};

void mean_value(A ob)
{
    double ans;
    ans = (ob.a + ob.b) / 2;
    cout << "\nThe Mean Value of Two Numbers is: " << ans << endl;
}

int main()
{
    A obj;
    obj.display();
    obj.input();
    mean_value(obj);
}
