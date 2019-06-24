#include <iostream>

using namespace std;

class A
{
public:
    void sum()
    {
        int a,b;
        a = 10;
        b = 10;
        cout << a + b;
    }
    void sum(int a, int b)
    {
        cout << a + b;
    }
    void sum(double c, int d)
    {
        cout << c + d;
    }
    void sum(double a, double b)
    {
        cout << a + b;
    }
    void sum(char c)
    {
        cout << c;
    }
};

int main()
{
    A obj;
    obj.sum();
    cout << endl;
    obj.sum(5,5);
    cout << endl;
    obj.sum('A');
    cout << endl;
    obj.sum(5.5,6);
    cout << endl;
    obj.sum(6.5,7.5);
    cout << endl;

    return 0;
}
