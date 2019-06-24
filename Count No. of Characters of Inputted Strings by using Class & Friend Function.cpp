#include <iostream>
using namespace std;

class A
{
public:
    string name;
    void input()
    {
        cout << "Enter a String: ";
        getline(cin,name);
    }
    friend void count_alphabets(A ob);
};

void count_alphabets(A ob)
{
    int len = ob.name.length();
        cout << "Total Number of Characters is: " << len << endl;
}
int main()
{
    A obj;
    obj.input();
    count_alphabets(obj);
    return 0;
}

