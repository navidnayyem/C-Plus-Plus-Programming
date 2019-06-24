#include<iostream>
using namespace std;

class student
{
public:
    string name, course1_name, course2_name, course3_name;
    int id, course1_marks, course2_marks, course3_marks;
    string grade1,grade2,grade3;
    // Grading System: A+ --> 95-100, A --> 85-94, A- --> 80-84, B+ --> 75-79, B --> 70-74, C --> 60-69, D --> 50-59, F --> <(less than)50

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

   if(course1_marks>=95 && course1_marks<=100)
     {
         grade1 = "A+\n";
     }
    else if(course1_marks>=85 && course1_marks<95)
    {
        grade1 = "A\n";
    }
    else if(course1_marks>=80 && course1_marks<85)
    {
        grade1 = "A-\n";
    }
    else if(course1_marks>=75 && course1_marks<80)
    {
        grade1 = "B+\n";
    }
    else if(course1_marks>=70 && course1_marks<75)
    {
        grade1 = "B\n";
    }
    else if(course1_marks>=60 && course1_marks<70)
    {
        grade1 = "C\n";
    }
    else if(course1_marks>=50 && course1_marks<60)
    {
        grade1 = "D\n";
    }
    else
    {
        grade1 = "F\n";
    }

    if(course2_marks>=95 && course2_marks<=100)
     {
         grade2 = "A+\n";
     }
    else if(course2_marks>=85 && course2_marks<95)
    {
        grade2 = "A\n";
    }
    else if(course2_marks>=80 && course2_marks<85)
    {
        grade2 = "A-\n";
    }
    else if(course2_marks>=75 && course2_marks<80)
    {
        grade2 = "B+\n";
    }
    else if(course2_marks>=70 && course2_marks<75)
    {
        grade2 = "B\n";
    }
    else if(course2_marks>=60 && course2_marks<70)
    {
        grade2 = "C\n";
    }
    else if(course2_marks>=50 && course2_marks<60)
    {
        grade2 = "D\n";
    }
    else
    {
        grade2 = "F\n";
    }

   if(course3_marks>=95 && course3_marks<=100)
     {
         grade3 = "A+\n";
     }
    else if(course3_marks>=85 && course3_marks<95)
    {
        grade3 = "A\n";
    }
    else if(course3_marks>=80 && course3_marks<85)
    {
        grade3 = "A-\n";
    }
    else if(course3_marks>=75 && course3_marks<80)
    {
        grade3 = "B+\n";
    }
    else if(course3_marks>=70 && course3_marks<75)
    {
        grade3 = "B\n";
    }
    else if(course3_marks>=60 && course3_marks<70)
    {
        grade3 = "C\n";
    }
    else if(course3_marks>=50 && course3_marks<60)
    {
        grade3 = "D\n";
    }
    else
    {
        grade3 = "F\n";
    }

}
    void output()
    {
    cout<<"***********************************************";
    cout<<"\nStudent's Name is:" << name << endl;
    cout<<"Student's ID is:" << id << endl;

    cout<<"Course1 Name and Marks is:" << course1_name << "\t" << course1_marks << "\t" << grade1;
    cout<<"Course2 Name and Marks is:" << course2_name << "\t" << course2_marks << "\t" << grade2;
    cout<<"Course3 Name and Marks is:" << course3_name << "\t" << course3_marks << "\t" << grade3 << endl;

}
    };
int main()
{
    student obj[5];
    int i,marks;
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



