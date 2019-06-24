#include <iostream>

using namespace std;

class student{
public:
    string std1_name,std2_name,std3_name,std4_name,std5_name;
    string c1_name,c2_name,c3_name,c4_name,c5_name,c6_name,c7_name,c8_name,c9_name,c10_name,c11_name,c12_name,c13_name,c14_name,c15_name;
    int std1_id,std2_id,std3_id,std4_id,std5_id;
    int c1_marks,c2_marks,c3_marks,c4_marks,c5_marks,c6_marks,c7_marks,c8_marks,c9_marks,c10_marks,c11_marks,c12_marks,c13_marks,c14_marks,c15_marks;

    void input()
    {
        cout << "\t\t\t\t***ENTER THE INFORMATION OF 1st STUDENT***\n" << endl;
        cout << "Input Student Name:";
        cin >> std1_name;
        cout << "Input Student ID:";
        cin >> std1_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> c1_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> c2_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> c3_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> c1_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> c2_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> c3_marks;

        cout << "\n\n\t\t\t\t***ENTER THE INFORMATION OF 2nd STUDENT***\n" << endl;
        cout << "Input Student Name:";
        cin >> std2_name;
        cout << "Input Student ID:";
        cin >> std2_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> c4_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> c5_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> c6_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> c4_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> c5_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> c6_marks;

        cout << "\n\n\t\t\t\t***ENTER THE INFORMATION OF 3rd STUDENT***\n" << endl;
        cout << "Input Student Name:";
        cin >> std3_name;
        cout << "Input Student ID:";
        cin >> std3_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> c7_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> c8_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> c9_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> c7_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> c8_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> c9_marks;

        cout << "\n\n\t\t\t\t***ENTER THE INFORMATION OF 4th STUDENT***\n" << endl;
        cout << "Input Student Name:";
        cin >> std4_name;
        cout << "Input Student ID:";
        cin >> std4_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> c10_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> c11_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> c12_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> c10_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> c11_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> c12_marks;

        cout << "\n\n\t\t\t\t***ENTER THE INFORMATION OF 5th STUDENT***\n" << endl;
        cout << "Input Student Name:";
        cin >> std5_name;
        cout << "Input Student ID:";
        cin >> std5_id;
        cout << "Enter the Name of your 1st Course: ";
        cin >> c13_name;
        cout << "Enter the Name of your 2nd Course: ";
        cin >> c14_name;
        cout << "Enter the Name of your 3rd Course: ";
        cin >> c15_name;
        cout << "Enter the Marks of your 1st Course: ";
        cin >> c13_marks;
        cout << "Enter the Marks of your 2nd Course: ";
        cin >> c14_marks;
        cout << "Enter the Marks of your 3rd Course: ";
        cin >> c15_marks;
    }
    void output()
    {
    cout << "Student01 Name:" << std1_name << endl;
    cout << "Student01 ID:" << std1_id << endl;
    cout << "1st Course Name:" << c1_name << endl;
    cout << "2nd Course Name:" << c2_name << endl;
    cout << "3rd Course Name:" << c3_name << endl;
    cout << "1st Course Marks:" << c1_marks << endl;
    cout << "2nd Course Marks:" << c2_marks << endl;
    cout << "3rd Course Marks:" << c3_marks << endl;

    cout << "Student02 Name:" << std2_name << endl;
    cout << "Student02 ID:" << std2_id << endl;
    cout << "1st Course Name:" << c4_name << endl;
    cout << "2nd Course Name:" << c5_name << endl;
    cout << "3rd Course Name:" << c6_name << endl;
    cout << "1st Course Marks:" << c4_marks << endl;
    cout << "2nd Course Marks:" << c5_marks << endl;
    cout << "3rd Course Marks:" << c6_marks << endl;

    cout << "Student03 Name:" << std3_name << endl;
    cout << "Student03 ID:" << std3_id << endl;
    cout << "1st Course Name:" << c7_name << endl;
    cout << "2nd Course Name:" << c8_name << endl;
    cout << "3rd Course Name:" << c9_name << endl;
    cout << "1st Course Marks:" << c7_marks << endl;
    cout << "2nd Course Marks:" << c8_marks << endl;
    cout << "3rd Course Marks:" << c9_marks << endl;

    cout << "Student04 Name:" << std4_name << endl;
    cout << "Student04 ID:" << std4_id << endl;
    cout << "1st Course Name:" << c10_name << endl;
    cout << "2nd Course Name:" << c11_name << endl;
    cout << "3rd Course Name:" << c12_name << endl;
    cout << "1st Course Marks:" << c10_marks << endl;
    cout << "2nd Course Marks:" << c11_marks << endl;
    cout << "3rd Course Marks:" << c12_marks << endl;

    cout << "Student05 Name:" << std5_name << endl;
    cout << "Student05 ID:" << std5_id << endl;
    cout << "1st Course Name:" << c13_name << endl;
    cout << "2nd Course Name:" << c14_name << endl;
    cout << "3rd Course Name:" << c15_name << endl;
    cout << "1st Course Marks:" << c13_marks << endl;
    cout << "2nd Course Marks:" << c14_marks << endl;
    cout << "3rd Course Marks:" << c15_marks << endl;
    }
};
int main(){
    student obj1;
    obj1.input();
    obj1.output();
    return 0;
}
