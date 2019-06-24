//task4-Not Working.cpp(11-02-2018)
#include <iostream>//header file
using namespace std;

class student{
public:
    string name;//declaring a variable of name of string data type
    int age; //declaring a variable of integer age

    cin >> name;//input your name
};

int main(){
    student obj1;
    obj1.input();
    return 0;// this means success
}
//this program will not work because class student has no member named 'input'.
--------------------------------------------------
//task5-StudentName,StudentID,CourseName & Marks.cpp(11-02-2018)
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
--------------------------------------------------
//task6-StudentName,StudentID,CourseName & Marks-1.cpp(11-02-2018)
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
--------------------------------------------------
//task6-StudentName,StudentID,CourseName & Marks-2.cpp(11-02-2018)
#include<iostream>
using namespace std;
void input();
void output();
string nm[10000],cr[10000];
int idc[10000],i,a,j,k,crs,mrks[10000],sd;
void input()
{
    cout<<"How many student : ";
    cin>>sd;
    cout<<"How many course : ";
    cin>>crs;

    for(i=0;i<sd;i++)
    {
        cout<<"Enter "<<i+1<<"st student's name : ";
        cin>>nm[i];
        for(a=i;a<=i;a++)
        {
        cout<<"Enter "<<a+1<<"st student's ID : ";
        cin>>idc[a];
        }
        for(j=0;j<crs;j++)
        {
            cout<<"Course name : ";
            cin>>cr[j];
            for(k=j;k<=j;k++)
            {
            cout<<"Course Mark : ";
            cin>>mrks[k];
            }
        }
    }
}

void output()
{
    for(i=0;i<sd;i++)
    {
        cout<<"\n"<<"NAME : "<<nm[i]<<endl;
        for(a=i;a<=i;a++)
        {
        cout<<"ID : "<<idc[i]<<endl;
        }
        for(j=0;j<crs;j++)
        {
            cout<<"COURSE NAME : "<<cr[j]<<"\t\t";
            for(k=j;k<=j;k++)
            {
                cout<<"MARKS : "<<mrks[k]<<endl<<endl;
            }
        }
    }

}

int main()
{
    input();
    output();
    return 0;
}
--------------------------------------------------
//task7-StudentName,StudentID,CourseName,Marks & Grade.cpp(13-02-2018)
#include<iostream>
using namespace std;

class student
{
public:
    string name, course1_name, course2_name, course3_name;
    int id, course1_marks, course2_marks, course3_marks;
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
    }
    void output()
    {
    cout<<"***********************************************";
    cout<<"\nStudent's Name is:" << name << endl;
    cout<<"Student's ID is:" << id << endl;
    cout<<"Course1 Name and Marks is:" << course1_name << "\t" << course1_marks;
     if(course1_marks>=95 && course1_marks<=100)
            cout<<"\tYour Grade is A+.";
            else if(course1_marks>=85 && course1_marks<95)
            cout<<"\tYour Grade is A.";
            else if(course1_marks>=80 && course1_marks<85)
            cout<<"\tYour Grade is A-.";
            else if(course1_marks>=75 && course1_marks<80)
            cout<<"\tYour Grade is B+.";
            else if(course1_marks>=70 && course1_marks<75)
            cout<<"\tYour Grade is B.";
            else if(course1_marks>=60 && course1_marks<70)
            cout<<"\tYour Grade is C.";
            else if(course1_marks>=50 && course1_marks<60)
            cout<<"\tYour Grade is D.";
            else
            cout<<"\tYour Grade is F.";

    cout<<"\nCourse2 Name and Marks is:" << course2_name << "\t" << course2_marks;
     if(course2_marks>=95 && course2_marks<=100)
            cout<<"\tYour Grade is A+.";
            else if(course2_marks>=85 && course2_marks<95)
            cout<<"\tYour Grade is A.";
            else if(course2_marks>=80 && course2_marks<85)
            cout<<"\tYour Grade is A-.";
            else if(course2_marks>=75 && course2_marks<80)
            cout<<"\tYour Grade is B+.";
            else if(course2_marks>=70 && course2_marks<75)
            cout<<"\tYour Grade is B.";
            else if(course2_marks>=60 && course2_marks<70)
            cout<<"\tYour Grade is C.";
            else if(course2_marks>=50 && course2_marks<60)
            cout<<"\tYour Grade is D.";
            else
            cout<<"\tYour Grade is F.";

    cout<<"\nCourse3 Name and Marks is:" << course3_name << "\t" << course3_marks;
     if(course3_marks>=95 && course3_marks<=100)
            cout<<"\tYour Grade is A+.\n";
            else if(course3_marks>=85 && course3_marks<95)
            cout<<"\tYour Grade is A.\n";
            else if(course3_marks>=80 && course3_marks<85)
            cout<<"\tYour Grade is A-.\n";
            else if(course3_marks>=75 && course3_marks<80)
            cout<<"\tYour Grade is B+.\n";
            else if(course3_marks>=70 && course3_marks<75)
            cout<<"\tYour Grade is B.\n";
            else if(course3_marks>=60 && course3_marks<70)
            cout<<"\tYour Grade is C.\n";
            else if(course3_marks>=50 && course3_marks<60)
            cout<<"\tYour Grade is D.\n";
            else
            cout<<"\tYour Grade is F.\n";
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
}
--------------------------------------------------
//task7-StudentName,StudentID,CourseName,Marks & Grade-1.cpp(13-02-2018)
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
--------------------------------------------------
//task8-Number of Vowels.cpp(18-02-2018)
#include <iostream>
using namespace std;

class alphabets
{
public:
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n,i;
    int vowels=0;

    void input()
    {
        cout << "How many alphabets do you want to insert into the array?";
        cin >> n;
        cout <<"\nNow Enter " << n << " Alphabets:" << endl;
        for(i=1;i<=n;i++)
            {
                cin >> alpha[i];
            }
    }

    void search_vowel()
    {
        cout << "\nThe VOWELS are: " << endl;
        for(i=1;i<=n;i++)
        {
            if(alpha[i]=='A' || alpha[i]=='E' || alpha[i]=='I' || alpha[i]=='O' || alpha[i]=='U' || alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
                {
                    vowels++;
                    cout << alpha[i] << "\t" << endl;
                }

        }
        cout << "\nTotal Number of Vowels: "<< vowels;
    }
};

int main(){
    alphabets obj;
    obj.input();
    obj.search_vowel();
    return 0;
}
--------------------------------------------------
//task8-Vowels Print with Array Position.cpp(18-02-2018)
#include <iostream>
using namespace std;

class alphabets
{
public:
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int n,i;

    void input()
    {
        cout << "How many alphabets do you want to insert into the array?";
        cin >> n;
        cout <<"\nNow Enter " << n << " Alphabets:" << endl;
        for(i=1;i<=n;i++)
            {
                cin >> alpha[i];
            }
    }
      void search_vowel()
    {
        cout << "\nThe VOWELS are: " << endl;
        int vowels=0;
        for(i=1;i<=n;i++)
        {
            if(alpha[i]=='A' || alpha[i]=='E' || alpha[i]=='I' || alpha[i]=='O' || alpha[i]=='U' || alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
                {
                    vowels++;
                    cout << alpha[i] << "\t" << "Position " << i << endl;
                }

        }
        cout << "\nTotal Number of Vowels: " << vowels << endl;
        }
};

int main(){
    alphabets obj;
    obj.input();
    obj.search_vowel();
    return 0;
}
--------------------------------------------------
//task9-FunctionOverloading2.cpp(20-02-2018)
#include <iostream>
using namespace std;

class A
{
public:
    void print(string c)
    {
    cout << "My name is " << c << endl;
    }
    void print(string p, string q)
    {
    cout << "I am a "<<p<<" of CSE" << endl;
    print("MALIHA");
    cout << "I am a "<<q<<" of CSE";
    }
    void print()
    {
    print("FARHANA");
    print("FACULTY","STUDENT");
    }
};

int main()
{
    A ob;
    ob.print();
    return 0;
}
--------------------------------------------------
//task9-Odd.Even.upto.n.numbers.cpp(20-02-2018)
#include <iostream>
using namespace std;

class find_even_odd
{
public:
    void odd(){
    int n,num;

    cout << "Enter How many Numbers you want to Input: ";
    cin >> n;

    for (num = 1;num <= n;num++)
    {
        cout << "\nEnter Number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << num << " is EVEN Number." << endl;
        else
            cout << num << " is ODD Number." << endl;
    }
    }
};

int main()
{
    find_even_odd obj;
    obj.odd();

    return 0;
}
--------------------------------------------------
//task10-InputFullName&Print_it.cpp(25-02-2018)
#include <iostream>
using namespace std;

class information
{
public:
    string name;
    void input()
    {
        cout << "Input your Full Name: ";
        getline(cin,name);
        cout << "Your Full Name is: " << name;
    }
};

int main()
{
    information obj;
    obj.input();
    return 0;
}
--------------------------------------------------
//task10-InputFullName&Print_it-1.cpp(25-02-2018)
#include <iostream>
using namespace std;

class information
{
public:
    string name;
    char a[50];
    void input()
    {
        cout << "Using getline function" << endl;
        getline(cin,name);
        cout << "Using get function" << endl;
        cin.get(a,50);
        cout << "Using getline function:";
        cout << name << endl;
        cout << "Using get function: ";
        cout << a;
    }
};

int main()
{
    information obj;
    obj.input();
    return 0;
}
--------------------------------------------------
//task10-InputFullName&Print_it-2.cpp(25-02-2018)
#include <iostream>
using namespace std;

class information
{
public:
    string name;
    char a[50];
    information()
    {
        cout << "Using getline function" << endl;
        getline(cin,name);
        cout << "Using get function" << endl;
        cin.get(a,50);
        cout << "Using getline function:";
        cout << name << endl;
        cout << "Using get function: ";
        cout << a;
    }
};

int main()
{
    information obj;
    //obj.input();
    return 0;
}
--------------------------------------------------
//task10-InputFullName&Print_it-3.cpp(25-02-2018)
#include <iostream>
using namespace std;

class information
{
public:
    string name;
    char a[50];
    information()
    {
        cout << "Using getline function" << endl;
        getline(cin,name);
        cout << "Using get function" << endl;
        cin.get(a,50);
        cout << "Using getline function:";
        cout << name << endl;
        cout << "Using get function: ";
        cout << a;
    }
};

int main()
{
    information obj1, obj2;
    //obj.input();
    return 0;
}
--------------------------------------------------
//task10-InputFullName&Print_it-4.cpp(25-02-2018)
#include <iostream>
using namespace std;

class information
{
public:
    string name;
    char a[50];
    information()
    {
        cout << "Using getline function" << endl;
        cin.ignore();
        getline(cin,name);
        cout << "Using get function" << endl;
        //cin.ignore();
        cin.get(a,50);
        cout << "Using getline function:";
        cout << name << endl;
        cout << "Using get function: ";
        cout << a;
    }
};

int main()
{
    information obj1, obj2;
    //obj.input();
    return 0;
}
--------------------------------------------------
//task11-Parameterized Constructor.cpp(25-02-2018)
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
};

int main()
{
    information obj1, obj2(101);
    //obj.input();
    return 0;
}
--------------------------------------------------
//task12-Copy Constructor.cpp(25-02-2018)
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
--------------------------------------------------
//task12-Copy Constructor-1.cpp(25-02-2018)
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
--------------------------------------------------
//task14-ODD&EVEN Class.cpp(27-02-2018)
#include <iostream>
using namespace std;

int N;
class ODD
{
public:
    int i;

    void Numbergeneration()
    {
        cout << "ODD Numbers are:";
    for(i = 1;i < N; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << "\t";
        }
    }
    }
};

class EVEN
{
public:
    int i;

    void Numbergeneration()
    {
        cout << "\n\nEVEN Numbers are:";
        for(i = 1;i <= N; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << "\t";
        }
    }
    }
};

int main()
{
    cout << "Input a Number: ";
    cin >> N;
    ODD obj1;
    obj1.Numbergeneration();
    EVEN obj2;
    obj2.Numbergeneration();
    return 0;
}
--------------------------------------------------
//task14-ODD&EVEN Class-1.cpp(27-02-2018)
#include <iostream>
using namespace std;

class ODD
{
public:
    int i;

    void Numbergeneration(int p)
    {
        cout << "ODD Numbers are:";
    for(i = 1;i <= p; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << "\t";
        }
    }
    }
};

class EVEN
{
public:
    int i;

    void Numbergeneration(int p)
    {
        cout << "\n\nEVEN Numbers are:";
        for(i = 1;i <= p; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << "\t";
        }
    }
    }
};

int main()
{
    int N;
    cout << "Input a Number: ";
    cin >> N;
    ODD obj1;
    obj1.Numbergeneration(N);
    EVEN obj2;
    obj2.Numbergeneration(N);
    return 0;
}
--------------------------------------------------
//task16-Friend Function-1.cpp(04-03-2018)
#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
    A()
    {
        p = 100, q = 100;
    }
    void myth()
    {
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    void truth()
    {
        cout << "P + Q = " << p+q << endl;
    }
    friend void outsider(A ob, int t);
};

void outsider(A ob, int t)
{
    int s,m,n;
    cout << "\nInput Value of M & N: " << endl;
    cin >> m >> n;
    s = m + n + ob.p + ob.q + t;
    cout << s << endl;
}

int main()
{
    A obj;
    obj.myth();
    obj.truth();
    cout << "From Independent Function";
    outsider(obj,50);
}
--------------------------------------------------
//task16-Friend Function-2.cpp(04-03-2018)
#include <iostream>
using namespace std;

class B;
//Body of Class A
class A
{
private:
    int p,q;
public:
    A()
    {
        p = 100, q = 500;
    }
    void myth()
    {
        cout << "P + Q = " << p+q << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    friend void outsider(A ob1, B ob2, int t);
};

//Body of Class B
class B
{
public:
    int r;
    B()
    {
       r = 50 ;
    }
    void myth()
    {
        cout << "R = " << r << endl;
    }
    void truth()
    {
        cout << "Square of R = " << r*r << endl;
    }
};

//Friend Function
void outsider(A ob1, B ob2, int t)
{
    int s,m,n;
    cout << "\nInput Value of M & N: " << endl;
    cin >> m >> n;
    s = m + n + ob1.p + ob1.q + ob2.r + t;
    cout << "OB1.P = " << ob1.p << endl << "OB1.Q = " << ob1.q << endl << "OB2.R = " << ob2.r << endl << "M = " << m << endl << "N = " << n << endl <<"T = " << t << endl;
    cout << s << endl;
}

int main()
{
    A ob1;
    B ob2;
    cout << "From Independent Function";
    outsider(ob1,ob2,80);
    ob2.myth();
    ob2.truth();
    return 0;
}
--------------------------------------------------
//task18-Information.of.a.Person(11-03-2018)
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    double height,weight;
public:
    Person()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter the Height in Centimeter: ";
        cin >> height;
        cout << "Enter the Weight in Pounds: ";
        cin >> weight;
    }
    friend void converter(Person ob);
};

void converter(Person ob)
{
    cout << "Height Value in Feet & Inch: " << (int)(ob.height * 0.39)/12<< "'" << (int)(ob.height * 0.39)%12 << "\"" << endl;
    cout << "Weight Value in Kilogram: " << ob.weight / 2.20 << endl;
}

int main()
{
    Person obj;
    converter(obj);
    return 0;
}
--------------------------------------------------
//task19-Scope Operator(11-03-2018)
#include <iostream>
using namespace std;

class calc
{
private:
    int n;
    void input();

public:
    friend void checker(calc ob);
};

void calc::input()
{
    cout << "Enter the Number to Check: ";
    cin >> n;
}

void checker(calc ob)
{
    ob.input();
    if (ob.n % 2 == 0)
    {
        cout << ob.n << " is EVEN Number" << endl;
    }
    else
    {
        cout << ob.n << " is ODD Number" << endl;
    }
}

int main()
{
    calc obj;
    checker(obj);
    return 0;
}
--------------------------------------------------
//task21-Total Salary of an Employee(25-03-2018)
#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    string empname;
    int id;
    double salary,totalsalary;
    double HouseAllowance, MedicalAllowance, TransportationAllowance;
public:
    friend class SalaryCalculation;
};

class SalaryCalculation
{
public:
    void input(Employee &ob)
    {
        cout << "Enter your Name: ";
        cin >> ob.empname;
        cout << "Enter your ID: ";
        cin >> ob.id;
        cout << "Enter your Basic Salary: ";
        cin >> ob.salary;
    }

    void output(Employee &ob)
    {
        ob.HouseAllowance = ob.salary * 0.15;
        cout << "\n15% House Allowance of Basic Salary = " << ob.HouseAllowance << endl;
        ob.MedicalAllowance = ob.salary * 0.1;
        cout << "10% Medical Allowance of Basic Salary = " << ob.MedicalAllowance << endl;
        ob.TransportationAllowance = ob.salary * 0.05;
        cout << "5% Transportation Allowance of Basic Salary = " << ob.TransportationAllowance << endl << endl;
        ob.totalsalary = ob.salary + ob.HouseAllowance + ob.MedicalAllowance + ob.TransportationAllowance;
        cout << "Total Income = " << ob.totalsalary << endl;

    }

    void Tax(Employee &ob)
    {
        if (ob.totalsalary <= 25000)
        {
            cout << "0% Tax of Basic Salary = " << ob.totalsalary * 0 << endl << endl;
            cout << "Actual Salary = " << ob.totalsalary;
        }
        else if (ob.totalsalary > 25000 && ob.totalsalary <= 50000)
        {
            cout << "5% Tax of Basic Salary = " << ob.totalsalary * 0.05 << endl << endl;
            cout << "Actual Salary after Tax Deduction = " << ob.totalsalary - (ob.totalsalary * 0.05) << endl;
        }
        else if (ob.totalsalary > 50000 && ob.totalsalary <= 75000)
        {
            cout << "10% Tax of Basic Salary = " << ob.totalsalary * 0.1 << endl << endl;
            cout << "Actual Salary after Tax Deduction = " << ob.totalsalary - (ob.totalsalary * 0.1) << endl;
        }
        else if (ob.totalsalary > 75000 && ob.totalsalary <= 85000)
        {
            cout << "15% Tax of Basic Salary = " << ob.totalsalary * 0.15 << endl << endl;
            cout << "Actual Salary after Tax Deduction = " << ob.totalsalary - (ob.totalsalary * 0.15) << endl;
        }
        else if (ob.totalsalary > 85000 && ob.totalsalary <= 100000)
        {
            cout << "20% Tax of Basic Salary = " << ob.totalsalary * 0.2 << endl << endl;
            cout << "Actual Salary after Tax Deduction = " << ob.totalsalary - (ob.totalsalary * 0.2) << endl;
        }
        else if (ob.totalsalary > 100000)
        {
            cout << "25% Tax of Basic Salary = " << ob.totalsalary * 0.25 << endl << endl;
            cout << "Actual Salary after Tax Deduction = " << ob.totalsalary - (ob.totalsalary * 0.25) << endl;
        }
    }
};

int main()
{
    Employee obj1;
    SalaryCalculation obj2;
    obj2.input(obj1);
    obj2.output(obj1);
    obj2.Tax(obj1);
}
--------------------------------------------------
//task23-Friend Function Pyramid(27-03-2018)
#include <iostream>
using namespace std;

class Pyramid
{
public:
    int row,column;
    friend void Fpyramid(Pyramid ob);
};

void Fpyramid(Pyramid ob)
{
//    int i,j;
//    i = ob.row;
//    j = ob.column;
    for(ob.row=1;ob.row<=5;ob.row++)
    {
        for(ob.column=1;ob.column<=ob.row;ob.column++)
        {
            cout << ob.column;
        }
        cout << endl;
    }
}
int main()
{
    Pyramid obj;
    Fpyramid(obj);
}
--------------------------------------------------







//task23-Friend Function Pyramid-1(27-03-2018)
#include<iostream>
using namespace std;

class Pyramid{
private:
   int p,q,r;
public:
   void pyramid(){
   cout<< "Enter row: ";
   cin>>r;
   }
   friend void Fpyramid(Pyramid ob);
};

void Fpyramid(Pyramid ob)
{
    for(ob.p=ob.r;ob.p>=1; ob.p--)
    {
        for(ob.q=1;ob.q<=ob.p;ob.q++)
        {
           cout<< ob.q<< " ";
        }
        cout<< "\t"<<endl;
   }
}

int main()
{
    Pyramid obj;
    obj.pyramid();
    Fpyramid(obj);
}
--------------------------------------------------
//task25-Fibonacci Series using Recursion(03-04-2018)
//Q. Write a program in C++ to Print Fibonacci Series using recursion.
//Test Data: Input number of terms for the Series (<20) : 10
//Expected Output :
//    Input number of terms for the Series(<20) : 10
//    The Series are:
//        1   1   2   3   5   8   13  21  34  55

#include <iostream>
using namespace std;

class A
{
public:
    int i,temp,n1=1,n2=1,input;
    void display()
    {
        cout << "Enter the Number of Terms for the Series( <20 ): ";
        cin >> input;
    }
    void output()
    {
    for (i=1;i<=input;i++)
    {
        cout << n1 << "\t";
        temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }
    }
};
int main()
{
    A obj;
    obj.display();
    obj.output();
}
--------------------------------------------------
//task27-Find Average of Three Subjects & Show Grade(08-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
    void average(double a, double b, double c)
    {
        double avg = (a + b + c)/3;
        cout << "\nAverage Marks of 3 Subjects: " << avg << endl;

        if(avg >= 90)
        {
            cout << "\nGrade A" << endl;
        }
        else if(avg >= 80)
        {
            cout << "\nGrade A-" << endl;
        }
        else if(avg >= 70)
        {
            cout << "\nGrade B" << endl;
        }
        else if(avg >= 60)
        {
            cout << "\nGrade C" << endl;
        }
        else if(avg > 50)
        {
            cout << "\nGrade D" << endl;
        }
        else
        {
            cout << "\nFail" << endl;
        }
    }
};

class B : public A
{
public:
    string name,cn1,cn2,cn3;
    double id,cm1,cm2,cm3,totalmarks;
    void display()
    {
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Course 1 Name: ";
    cin >> cn1;
    cout << "Course 2 Name: ";
    cin >> cn2;
    cout << "Course 3 Name: ";
    cin >> cn3;
    cout << "Course 1 Marks: ";
    cin >> cm1;
    cout << "Course 2 Marks: ";
    cin >> cm2;
    cout << "Course 3 Marks: ";
    cin >> cm3;
    average(cm1,cm2,cm3);
    }
};

int main()
{
    B obj;
    obj.display();
}
--------------------------------------------------
//task30-Virtual Function(17-04-2018)
#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "I am A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "I am B" << endl;
    }
};

int main()
{
    A *a;
    A obj;
    B b;
    obj.show();
//    a->show();
    a = &b;
    a->show();
}
--------------------------------------------------
//task32-Pure Virtual Function-3(22-04-2018)
#include <iostream>
using namespace std;

class Base
{
public:
    int s;
    virtual void printout(int m) = 0;
};

class Derived : public Base
{
public:
    void printout(int m)
    {
        cout << m;
    }
};

int main()
{
    Base *q;
    Derived t;
    q = &t;
    q->printout(15);
    return 0;
}
--------------------------------------------------
