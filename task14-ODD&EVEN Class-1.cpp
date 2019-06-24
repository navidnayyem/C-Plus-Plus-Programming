#include <iostream>
using namespace std;

class ODD
{
public:
    int i;

    void Numbergeneration(int p)
    {
        cout << "ODD Numbers are:";
    for(i = 1;i <= p; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << "\t";
        }
    }
    }
};

class EVEN
{
public:
    int i;

    void Numbergeneration(int p)
    {
        cout << "\n\nEVEN Numbers are:";
        for(i = 1;i <= p; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << "\t";
        }
    }
    }
};

int main()
{
    int N;
    cout << "Input a Number: ";
    cin >> N;
    ODD obj1;
    obj1.Numbergeneration(N);
    EVEN obj2;
    obj2.Numbergeneration(N);
    return 0;
}
