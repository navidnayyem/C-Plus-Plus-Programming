#include <iostream>

using namespace std;

class information
{
public:
    string name;
    int id;
    //char a[50];
    information()
    {
        getline(cin,name);
        cout << "Your name is:";
        cout << name << endl;

    }
    information(int p)
    {
        id = p;
        cout << "Your ID is " << id << endl;
    }

    /*information(information q)
    {
        id = obj2.q;
        cout << "Your ID is " << id << endl;
    }*/

};

int main()
{
    information obj1, obj2(101);
    information obj3 = obj2;
    cout << obj3.id;
    //obj.input();
    return 0;
}
