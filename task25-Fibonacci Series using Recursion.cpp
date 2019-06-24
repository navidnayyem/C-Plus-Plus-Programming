//Q. Write a program in C++ to Print Fibonacci Series using recursion.
//Test Data: Input number of terms for the Series (<20) : 10
//Expected Output :
//    Input number of terms for the Series(<20) : 10
//    The Series are:
//        1   1   2   3   5   8   13  21  34  55

#include <iostream>
using namespace std;

class A
{
public:
    int i,temp,n1=1,n2=1,input;
    void display()
    {
        cout << "Enter the Number of Terms for the Series( <20 ): ";
        cin >> input;
    }
    void output()
    {
    for (i=1;i<=input;i++)
    {
        cout << n1 << "\t";
        temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }
    }
};
int main()
{
    A obj;
    obj.display();
    obj.output();
}
