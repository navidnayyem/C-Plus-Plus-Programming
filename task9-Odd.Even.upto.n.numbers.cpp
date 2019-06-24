#include <iostream>
using namespace std;

class find_even_odd
{
    public:
    void odd(){
    int n,num;

    cout << "Enter How many Numbers you want to Input: ";
    cin >> n;

    for (num = 1;num <= n;num++)
    {
        cout << "\nEnter Number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << num << " is EVEN Number." << endl;
        else
            cout << num << " is ODD Number." << endl;
    }
    }
};

int main()
{
    find_even_odd obj;
    obj.odd();

    return 0;
}
