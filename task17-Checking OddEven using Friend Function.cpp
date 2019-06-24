#include <iostream>
using namespace std;

class calc
{
private:
    int n;
    void input()
    {
    cout << "Enter the Number to Check: ";
    cin >> n;
    }
public:
    friend void checker(calc ob);
};

void checker(calc ob)
{
    ob.input();
    if (ob.n % 2 == 0)
    {
        cout << ob.n << " is EVEN Number" << endl;
    }
    else
    {
        cout << ob.n << " is ODD Number" << endl;
    }
}

int main()
{
    calc obj;
    checker(obj);
    return 0;
}
