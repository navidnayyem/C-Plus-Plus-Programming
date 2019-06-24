#include <iostream>

using namespace std;

class student{
public:
    string name;
    int age;

    void input()
    {
        cout << "Please enter your Name: ";
        cin >> name;
        cout << "Please enter your Age : ";
        cin >> age;
        cout << endl << "* * * * * * * * * * * * * * *" << endl;
        cout << endl << "Your Name is: " << name << endl << "Your Age  is: " << age << " Years" << endl ;
        //    cin >> name >> age;
        //    cout << "Student Name: " << name << " " << "Age: " << age ;
    }
};
int main(){
    student obj1;
    obj1.input();
    return 0;
}
