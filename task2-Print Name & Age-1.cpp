#include <iostream>

using namespace std;

class student{
public:
    string name;
    int age;

    void input()
    {
        cout << "What is your Name ? " << endl;
        cout << endl << "My Name is \"Navid\"" << endl;
        cout << endl << "My Name is \'Navid\'" << endl;

    }
};
int main(){
    student obj1;
    obj1.input();
    return 0;
}
