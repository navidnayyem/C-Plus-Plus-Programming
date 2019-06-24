/*Q.9. Write a program that can Add, subtract, multiply, divide different classes members using friend Function*/

#include <iostream>
using namespace std;

class C2;

class C1
{
private:
    double num;
public:
    void value()
    {
    cout << "Enter a Number: ";
    cin >> num;
    }
    friend void sum(C1 ob1, C2 ob2);
};

class C2
{
private:
    double num;
public:
    void value(){
    cout << "Enter Another Number: ";
    cin >> num;
    }
    friend void sum(C1 ob1, C2 ob2);
};

void sum(C1 ob1, C2 ob2)
{
    int addition, subtraction, multiplication;
    double division;
    addition = ob1.num + ob2.num;
    subtraction = ob1.num - ob2.num;
    multiplication = ob1.num * ob2.num;
    division = ob1.num / ob2.num;

    cout << "\nAddition of " << ob1.num << " and " << ob2.num << "       is: " << addition << endl;
    cout << "Subtraction of " << ob1.num << " and " << ob2.num << "    is: " << subtraction << endl;
    cout << "Multiplication of " << ob1.num << " and " << ob2.num << " is: " << multiplication << endl;
    cout << "Division of " << ob1.num << " and " << ob2.num << "       is: " << division << endl;
}

int main()
{
    C1 ob1;
    C2 ob2;
    ob1.value();
    ob2.value();
    sum(ob1,ob2);

    return 0;
}
