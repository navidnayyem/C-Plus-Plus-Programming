#include<iostream>
using namespace std;

class student
{
public:
    string name, course1_name, course2_name, course3_name;
    int id, course1_marks, course2_marks, course3_marks;

    void input()
    {
    cout<<"Input Student Name : ";
    cin>>name;
    cout<<"Input Student ID : ";
    cin>>id;
    cout<<"Input Course1 Name : ";
    cin>>course1_name;
    cout<<"Input Course2 Name : ";
    cin>>course2_name;
    cout<<"Input Course3 Name : ";
    cin>>course3_name;
    cout<<"Input Course1 Marks : ";
    cin>>course1_marks;
    cout<<"Input Course2 Marks : ";
    cin>>course2_marks;
    cout<<"Input Course3 Marks : ";
    cin>>course3_marks;
    }
    void output()
    {
    cout<<"***********************************************";
    cout<<"\nStudent's Name is:" << name << endl;
    cout<<"Student's ID is:" << id << endl;
    cout<<"Course1 Name and Marks is:" << course1_name << "\t" << course1_marks << endl;
    cout<<"Course2 Name and Marks is:" << course2_name << "\t" << course2_marks << endl;
    cout<<"Course3 Name and Marks is:" << course3_name << "\t" << course3_marks << endl;
    }
};

int main()
{
    student obj[5];
    int i;
    for(i=0;i<=4;i=i+1)
        {
            cout << "Input Information for Student " << i+1 << ": " << endl;
            obj[i].input();
        }
    for(i=0;i<=4;i=i+1)
        {
            cout << "\nInformation of Student " << i+1 << ": " << endl;
            obj[i].output();
        }

    return 0;
}
