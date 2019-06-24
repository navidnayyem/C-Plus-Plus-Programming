#include <iostream>

using namespace std;

class information
{
public:
    string name;
    char a[50];
    void input()
    {
        cout << "Using getline function" << endl;
        getline(cin,name);
        cout << "Using get function" << endl;
        cin.get(a,50);
        cout << "Using getline function:";
        cout << name << endl;
        cout << "Using get function: ";
        cout << a;
    }
};

int main()
{
    information obj;
    obj.input();
    return 0;
}
