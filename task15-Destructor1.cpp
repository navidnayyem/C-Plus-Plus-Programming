#include <iostream>

using namespace std;

class A
{
public:
    int p,q;
    void Myth()
    {
        cout << "Myth" << endl;
    }
    void Truth()
    {
        cout << "Truth" << endl;
    }
};

class B
{
public:
    int r,s;
    void Myth()
    {
        cout << "MYTH" << endl;
    }
    void Truth()
    {
        cout << "TRUTH" << endl;
    }
};


int main()
{
    A obj1;
    obj1.Myth();

    B obj2;
    obj2.Truth();
}
