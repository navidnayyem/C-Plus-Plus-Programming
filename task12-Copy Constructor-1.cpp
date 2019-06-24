#include <iostream>

using namespace std;

class information
{
public:
    string name,course;
    int id;
    //char a[50];
    information()
    {
        getline(cin,name);
        cout << "Your name is:";
        cout << name << endl;

    }
    information(int p, string c)
    {
        id = p;
        course = c;
        cout << "Your ID is " << id << endl;
        cout << "Your Course ID is " << course << endl;
    }

    /*information(information q)
    {
        id = obj2.q;
        cout << "Your ID is " << id << endl;
    }*/

};

int main()
{
    information obj1, obj2(101, "cse202");
    information obj3 = obj2;
    cout << obj3.id << obj3.course;
    //obj.input();
    return 0;
}

