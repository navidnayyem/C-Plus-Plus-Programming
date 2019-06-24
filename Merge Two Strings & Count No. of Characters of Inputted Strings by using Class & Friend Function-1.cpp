#include <iostream>
#include <string.h>
using namespace std;

class B;

class A
{
public:
    string name1 = "Tamim";
    void output()
    {
        cout << "Name1 = " << name1 << endl;
    }
    friend void count_alphabets(A ob1, B ob2);
};

class B
{
public:
    string name2 = "Iqbal";
    void output()
    {
        cout << "Name2 = " << name2 << endl;
    }
    friend void merge_name_count_alphabets(A ob1, B ob2);
};
void merge_name_count_alphabets(A ob1, B ob2)
{
    string merge_name = ob1.name1 + ob2.name2;
    cout << "Merge Two Strings: " << merge_name << endl;
    int len = ob1.name1.length() + ob2.name2.length();
    cout << "Total Number of Characters is: " << len << endl;
}
int main()
{
    A obj1;
    B obj2;
    obj1.output();
    obj2.output();
    merge_name_count_alphabets(obj1,obj2);
    return 0;
}


