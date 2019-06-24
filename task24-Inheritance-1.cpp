#include <iostream>
using namespace std;

class A
{
protected:
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
        input(5,10);
        cout << "Sum = " << i + j;
    }
};

int main()
{
    B obj;
    obj.sum();
}
