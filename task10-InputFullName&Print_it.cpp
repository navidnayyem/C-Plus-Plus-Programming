#include <iostream>

using namespace std;

class information
{
public:
    string name;
    void input()
    {
        cout << "Input your Full Name: ";
        getline(cin,name);
        cout << "Your Full Name is: " << name;
    }
};

int main()
{
    information obj;
    obj.input();
    return 0;
}
