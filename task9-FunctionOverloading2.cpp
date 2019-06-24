#include <iostream>

using namespace std;

class A
{
public:
void print(string c)
{
    cout << "My name is " << c << endl;
}
void print(string p, string q)
{
    cout << "I am a "<<p<<" of CSE" << endl;
    print("MALIHA");
    cout << "I am a "<<q<<" of CSE";
}
void print()
{
    print("FARHANA");
    print("FACULTY","STUDENT");
}
};

int main()
{
    A ob;
    ob.print();
    return 0;
}
