#include<iostream>
using namespace std;

class calc
{
private:
    double a,b;
public:
    void display()
    {
        cout << "This is a Program to show ADD(+),SUB(-),MUL(*),DIV(/) of Two Numbers" << endl;
    }
    void input()
    {
    cout << "\nEnter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    }
    friend void output(calc ob);
};

void output(calc ob)
{
    cout << "\nAddition of 1st & 2nd Number       : " << ob.a + ob.b << endl;
    cout << "Subtraction of 1st & 2nd Number    : " << ob.a - ob.b << endl;
    cout << "Multiplication of 1st & 2nd Number : " << ob.a * ob.b << endl;
    cout << "Division of 1st & 2nd Number       : " << ob.a / ob.b << endl;
}

int main()
{
    calc obj;
    obj.display();
    obj.input();
    output(obj);
}
