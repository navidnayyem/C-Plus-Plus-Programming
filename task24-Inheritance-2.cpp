#include <iostream>
using namespace std;

class A
{
public:
    int i,j;
    void input(int p,int q)
    {
        i = p;
        j = q;
    }
};

class B : public A
{
public:
    void sum()
    {
        cout << "Sum = " << i + j;
    }
};

int main()
{
    B obj;
    obj.input(5,10);
    obj.sum();
}
