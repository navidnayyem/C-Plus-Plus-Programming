#include <iostream>

using namespace std;

class student{
public:
    string std_name,course1_name,course2_name,course3_name;
    int std_id,course1_marks,course2_marks,course3_marks;

    void input()
    {
        cout << "Input Student Name:";
        cin >> std_name;
        cout << "Input Student ID:";
        cin >> std_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> course1_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> course2_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> course3_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> course1_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> course2_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> course3_marks;
    }
    void output()
    {
    cout << "Student Name:" << std_name << endl;
    cout << "Student ID:" << std_id << endl;
    cout << "1st Course Name:" << course1_name << endl;
    cout << "2nd Course Name:" << course2_name << endl;
    cout << "3rd Course Name:" << course3_name << endl;
    cout << "1st Course Marks:" << course1_marks << endl;
    cout << "2nd Course Marks:" << course2_marks << endl;
    cout << "3rd Course Marks:" << course3_marks << endl;
    }
};
int main(){
    student obj1;
    obj1.input();
    obj1.output();
    return 0;
}
