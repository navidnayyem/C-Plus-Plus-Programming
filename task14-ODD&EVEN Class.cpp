#include <iostream>
using namespace std;
int N;
class ODD
{
public:
    int i;

    void Numbergeneration()
    {
        cout << "ODD Numbers are:";
    for(i = 1;i < N; i++)
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

    void Numbergeneration()
    {
        cout << "\n\nEVEN Numbers are:";
        for(i = 1;i <= N; i++)
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
    cout << "Input a Number: ";
    cin >> N;
    ODD obj1;
    obj1.Numbergeneration();
    EVEN obj2;
    obj2.Numbergeneration();
    return 0;
}

