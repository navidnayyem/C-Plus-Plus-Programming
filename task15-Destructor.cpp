#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "I am Constructor" << endl;
    }
    ~A()
    {
        cout << "I am Destructor" << endl;
    }
};

int main()
{
    A obj;
}
