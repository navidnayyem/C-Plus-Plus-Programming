#include <iostream>
using namespace std;

class A
{
protected:
      double p,q;
public:
    A()
    {
        cout << "Simple Calculator done by C++ Programming" << endl;
    }
};

class B
{
protected:
    int choice;
    public:
        B()
        {
            cout << "Select Operators (+,-,*,/)" << endl;
        }
};

class C: public A, public B
{
public:
    void calculator()
    {
        cout << endl <<"Select 1 to Add" << endl;
        cout << "Select 2 to Subtract" << endl;
        cout << "Select 3 to Multiply" << endl;
        cout << "Select 4 to Divide" << endl;
        cout << endl << "Select your Choice: ";
        cin >> choice;
        cout << endl << "Enter Two Values: ";
        cin >> p >> q;
        if (choice == 1)
        {
            cout << endl << "Addition = " << p + q << endl;
        }
        else if (choice == 2)
        {
            cout << endl << "Subtraction = " << p - q << endl;
        }
        else if (choice == 3)
        {
            cout << endl << "Multiplication = " << p * q << endl;
        }
        else if (choice == 4)
        {
            cout << endl << "Division = " << p / q << endl;
        }
        else
        {
            cout << endl << "Invalid Input" << endl;
        }
    }
};

int main()
{
    C obj;
    obj.calculator();
}
