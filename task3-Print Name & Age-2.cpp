#include <iostream>

using namespace std;

class student{
public:
    string name;
    int age;

    void input()
    {
        cout << "What is your Name ? " << endl;
        cin >> name;
        cout << "My Name is " << "\"" << name << "\"" << endl;
        cout << "My Name is " << "\'" << name << "\'" << endl;

    }
};
int main(){
    student obj1;
    obj1.input();
    return 0;
}
