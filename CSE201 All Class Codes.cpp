//main.cpp(07-02-2018)
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
--------------------------------------------------
//printname.cpp(07-02-2018)
#include <iostream>
using namespace std;

int main()
{
    cout << "My Name is Mohammad Navid Nayyem" << endl;
    return 0;
}
--------------------------------------------------
//task1-Print Name & Age.cpp(11-02-2018)
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
--------------------------------------------------
//task2-Print Name & Age-1.cpp(11-02-2018)
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
--------------------------------------------------
//task3-Print Name & Age-2.cpp(11-02-2018)
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
--------------------------------------------------
//task6-StudentName,StudentID,CourseName & Marks-3.cpp(13-02-2018)
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
--------------------------------------------------
//task8-Display Vowels.cpp(18-02-2018)
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
        cout << "\nThe VOWELS are: ";
        for(i=1;i<=n;i++)
        {
            if(alpha[i]=='A' || alpha[i]=='E' || alpha[i]=='I' || alpha[i]=='O' || alpha[i]=='U' || alpha[i]=='a' || alpha[i]=='e' || alpha[i]=='i' || alpha[i]=='o' || alpha[i]=='u')
                {
                    cout << alpha[i] <<"\t";
                }
        }
    }
};

int main(){
    alphabets obj;
    obj.input();
    obj.search_vowel();
    return 0;
}
--------------------------------------------------
//task9-FunctionOverloading.cpp(20-02-2018)
#include <iostream>
using namespace std;

class A
{
public:
    void sum()
    {
        int a,b;
        a = 10;
        b = 10;
        cout << a + b;
    }
    void sum(int a, int b)
    {
        cout << a + b;
    }
    void sum(double c, int d)
    {
        cout << c + d;
    }
    void sum(double a, double b)
    {
        cout << a + b;
    }
    void sum(char c)
    {
        cout << c;
    }
};

int main()
{
    A obj;
    obj.sum();
    cout << endl;
    obj.sum(5,5);
    cout << endl;
    obj.sum('A');
    cout << endl;
    obj.sum(5.5,6);
    cout << endl;
    obj.sum(6.5,7.5);
    cout << endl;

    return 0;
}
--------------------------------------------------
//task9-FunctionOverloading1.cpp(20-02-2018)
#include <iostream>
using namespace std;

class A
{
public:
    void sum()
    {
        int a,b;
        a = 10;
        b = 10;
        cout << a + b;
    }
    void sum(int a, int b)
    {
        cout << a + b;
        sum('H');
    }
    void sum(double c, int d)
    {
        cout << c + d;
    }
    void sum(double a, double b)
    {
        cout << a + b;
    }
    void sum(char c)
    {
        cout << c;
    }
};

int main()
{
    A obj;
    obj.sum();
    cout << endl;
    obj.sum(5,5);
    cout << endl;
    obj.sum('A');
    cout << endl;
    obj.sum(5.5,6);
    cout << endl;
    obj.sum(6.5,7.5);
    cout << endl;

    return 0;
}
--------------------------------------------------
//task13-Area of the Triangle,Rectangle & Width.cpp(27-02-2018)
#include <iostream>
using namespace std;

class Areacal
{
public:
    int height, width, radius;

    Areacal()
    {
        height = 10;
        width = 9;
    }

    Areacal(Areacal &obj)
    {
        radius = obj.height;
    }

    void area(double x)
    {
        cout << "Area of Triangle: " << (x * (height*width)) << endl;
    }

    void area()
    {
       cout << "Area of Rectangle: " << (height*width) << endl;
    }

    void area(char x)
    {
       cout<<"Area of Circle: " << (3.14 * radius * radius) << endl;
    }
};

int main()
{
    Areacal triangle, rectangle;
    Areacal circle(triangle);
        cout << "Height of Triangle: " << triangle.height << endl;
        cout << "Width of Triangle: "  << triangle.width << endl;
        cout << "Height of Rectangle: " << rectangle.height << endl;
        cout << "Width of Rectangle: " << rectangle.width << endl;
        cout << "Radius of Circle: " << circle.radius << endl;
        triangle.area(0.5);
        rectangle.area();
        circle.area('C');
    return 0;
}
--------------------------------------------------
//task13-Area of the Triangle,Rectangle & Width-1.cpp(27-02-2018)
#include <iostream>
using namespace std;

class A
{
public:
    int a,b;
    //Default constructor
    A()
    {
        a = 10;
        b = 9;
    }
    //Parameterized constructor
    A(int p, int q)
    {
        a/*variable*/ = p/*value*/;
        b/*variable*/ = q/*value*/;
    }
    //Copy constructor
    A(A &obj)
    {
        a = obj.a;
        b = obj.b;
    }
};

int main()
{
    A obj1;
    cout << "Default constructor and value of obj1" << endl;
    cout << obj1.a << endl;
    cout << obj1.b << endl;

    A obj2(70,80);
    cout << "Parameterized constructor and value of obj2" << endl;
    cout << obj2.a << endl;
    cout << obj2.b << endl;

    A obj3(obj2);//one way to declare copy constructor
    cout << "Copy constructor and value of obj3" << endl;
    cout << obj3.a << endl;
    cout << obj3.b << endl;

    //another way to declare copy constructor
    cout << "Copy constructor and value of obj4" << endl;
    A obj4 = obj1;
    cout << obj4.a << endl;
    cout << obj4.b << endl;

    return 0;
}
--------------------------------------------------
//task15-Destructor.cpp(04-03-2018)
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "I am Constructor" << endl;
    }
    ~A()
    {
        cout << "I am Destructor" << endl;
    }
};

int main()
{
    A obj;
}
--------------------------------------------------
//task15-Destructor1.cpp(04-03-2018)
#include <iostream>
using namespace std;

class A
{
public:
    int p,q;
    void Myth()
    {
        cout << "Myth" << endl;
    }
    void Truth()
    {
        cout << "Truth" << endl;
    }
};

class B
{
public:
    int r,s;
    void Myth()
    {
        cout << "MYTH" << endl;
    }
    void Truth()
    {
        cout << "TRUTH" << endl;
    }
};

int main()
{
    A obj1;
    obj1.Myth();

    B obj2;
    obj2.Truth();
}
--------------------------------------------------
//task15-Destructor2.cpp(04-03-2018)
#include <iostream>
using namespace std;

class A
{
public:
    int p,q;
    A()
    {
        p = 100, q = 500;
    }
    void myth()
    {
        cout << "\nP + Q = " << p + q << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl << "Q = " << q;
    }
};

class B
{
public:
    int r;
    B()
    {
        r = 200;
    }
    void myth()
    {
        cout << "Square of R is: " << r*r << endl;
    }
    void truth()
    {
        cout << "R = " << r << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj1.truth();
    obj1.myth();
    cout << "From Class B " << endl;
    obj2.truth();
    obj2.myth();
    return 0;
}
--------------------------------------------------
//task15-Friend Function.cpp(04-03-2018)
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
        cout << "This is a Friend Function" << endl;
    }
    void truth()
    {
        cout << "P = " << p << endl <<"Q = " << q << endl;
    }
    friend void outsider(A ob);
};

void outsider(A ob)
{
    int s,m,n;
    cout << "\nEnter M: " << endl;
    cin >> m;
    cout << "Enter N: " << endl;
    cin >> n;
    s = ob.p + ob.q + m + n;
    cout << "\nTotal after accessing Friend Class : "<< s << endl;
}

int main()
{
    A obj;
    obj.myth();
    obj.truth();
    outsider(obj);
}
--------------------------------------------------
//task17-Checking OddEven using Friend Function(11-03-2018)
#include <iostream>
using namespace std;

class calc
{
private:
    int n;
    void input()
    {
    cout << "Enter the Number to Check: ";
    cin >> n;
    }
public:
    friend void checker(calc ob);
};

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



//task20-Friend Class(25-03-2018)
#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
//    friend class B;
    void input()
    {
        cout << "Enter 1st Number: ";
        cin >> p;
        cout << "Enter 2nd Number: ";
        cin >> q;
    }
    friend class B;
};

class B
{
public:
    int m;
    void input()
    {
        cout << "Enter 3rd Number: ";
        cin >> m;
    }
    void sum(A ob)
    {
        int s;
        s = m + ob.p + ob.q;
        cout << endl << "Sum = " << s << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    obj2.sum(obj1);
}
--------------------------------------------------
//task20-Friend Class-1(25-03-2018)
#include <iostream>
using namespace std;

class A
{
private:
    int p,q;
public:
    friend class B;
};

class B
{
public:
    int m;
    void input(A &ob)
    {
        cout << "Enter 1st Number: ";
        cin >> m;
        cout << "Enter 2nd Number: ";
        cin >> ob.p;
        cout << "Enter 3rd Number: ";
        cin >> ob.q;
    }
    void sum(A &ob)
    {
        int s;
        s = m + ob.p + ob.q;
        cout << endl << "Sum = " << s << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.input(obj1);
    obj2.sum(obj1);
}
--------------------------------------------------
//task22-Polygon(27-03-2018)
#include <iostream>
using namespace std;

class Rectangle;
class Triangle;

class Polygon
{
private:
    int Ph,Pw;
public:
    Polygon(int height,int width)
    {
        Ph = height;
        Pw = width;
    }
    friend class Rectangle;
    friend class Triangle;
};

class Rectangle
{
public:
    int height,width;
    void area(Polygon &ob)
    {
        height = ob.Ph;
        width = ob.Pw;
        cout << "Area of Rectangle: " << height * width << endl;
    }
};

class Triangle
{
public:
    int height,width;
    void area(Polygon &ob)
    {
        height = ob.Ph;
        width = ob.Pw;
        cout << "Area of Triangle : " << 0.5 * height * width << endl;
    }
};

int main()
{
    Polygon obj1(5,5);
    Rectangle obj2;
    obj2.area(obj1);
    Triangle obj3;
    obj3.area(obj1);
}
--------------------------------------------------
//task24-Inheritance(03-04-2018)
#include <iostream>
using namespace std;

class A
{
private:
    void Personal()
    {
        cout << "I am not accessible from any of my children" << endl;
    }
protected:
    void shareable1()
    {
        cout << "I am shareable from class A" << endl;
    }
public:
    A()
    {
        cout << "I am constructor of class A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Hello B" << endl;
    }
    void print()
    {
        shareable1();
//        Personal(); //  Personal() cannot be accessed/executed because it is private.
    }
};

int main()
{
    B obj;
    obj.print();
}
--------------------------------------------------
//task24-Inheritance-1(03-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
    int i,j;
    void input(int p,int q)
    {
        i = p;
        j = q;
    }
};

class B : public A
{
public:
    void sum()
    {
        input(5,10);
        cout << "Sum = " << i + j;
    }
};

int main()
{
    B obj;
    obj.sum();
}
--------------------------------------------------
//task24-Inheritance-2(03-04-2018)
#include <iostream>
using namespace std;

class A
{
public:
    int i,j;
    void input(int p,int q)
    {
        i = p;
        j = q;
    }
};

class B : public A
{
public:
    void sum()
    {
        cout << "Sum = " << i + j;
    }
};

int main()
{
    B obj;
    obj.input(5,10);
    obj.sum();
}
--------------------------------------------------
//task24-Single Inheritance(08-04-2018)
#include <iostream>
#include <cstring>
using namespace std;

class A
{
protected:
    void sum(int x,int y)
    {
        cout << endl << x + y << endl;
    }
};
class B : public A
{
public:
    int i,j;
    void input(){
        cin >> i >> j;
        sum(i,j);
    }
};

int main()
{
    B obj;
    obj.input();
}
--------------------------------------------------
//task24-Multiple Inheritance(10-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
      int p;
public:
    A()
    {
        cout << "I am from A" << endl;
    }
};

class B
{
protected:
    int q;
    public:
        B()
        {
            cout << "I am from B" << endl;
        }
};

class C: public A, public B
{
public:
    void show()
    {
        cin  >> p >> q;
        cout << p + q;
    }
};

int main()
{
    C obj;
    obj.show();
}
--------------------------------------------------
//task24-Multiple Inheritance-1(10-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
      int p;
public:
    A()
    {
        cout << "I am from A" << endl;
    }
};

class B
{
protected:
    int q;
    public:
        B()
        {
            cout << "I am from B" << endl;
        }
};

class C: public B, public A
{
public:
    void show()
    {
        cin  >> p >> q;
        cout << p + q;
    }
};

int main()
{
    C obj;
    obj.show();
}
--------------------------------------------------
//task24-Multiple Inheritance-2(10-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
      int p;
public:
    A()
    {
        cout << "I am from A" << endl;
    }
    void show()
    {
        cout << "Hello" << endl;
    }
};

class B
{
protected:
    int q;
    public:
        B()
        {
            cout << "I am from B" << endl;
        }
        void show()
        {
            cout << "World" << endl;
        }
};

class C: public A, public B
{
public:
    void show()
    {
        cout << "I am from C" << endl;
    }
};

int main()
{
    C obj;
    obj.show();
    obj.A :: show();
    obj.B :: show();
}
--------------------------------------------------
//task24-Multiple Inheritance-3(10-04-2018)
#include <iostream>
using namespace std;

class A
{
protected:
      int p;
public:
    A()
    {
        cout << "I am from A" << endl;
    }
    void show()
    {
        cout << "Hello" << endl;
    }
};

class B
{
protected:
    int q;
    public:
        B()
        {
            cout << "I am from B" << endl;
        }
        void show()
        {
            cout << "World" << endl;
        }
};

class C: public A, public B
{
public:
    void show()
    {
        cout << "I am from C" << endl;
        B :: show();
    }
};

int main()
{
    C obj;
    obj.show();
    obj.A :: show();
    obj.B :: show();
}
--------------------------------------------------
//task24-Multiple Inheritance-4(10-04-2018)
#include <iostream>
using namespace std;

class A{
protected:
      double p,q;
public:
    A()
    {
        cout << "Simple Calculator done by C++ Programming" << endl;
    }
};

class B
{
protected:
    int choice;
    public:
        B()
        {
            cout << "Select Operators (+,-,*,/)" << endl;
        }
};

class C: public A, public B
{
public:
    void calculator(){
        cout << endl <<"Select 1 to Add" << endl;
        cout << "Select 2 to Subtract" << endl;
        cout << "Select 3 to Multiply" << endl;
        cout << "Select 4 to Divide" << endl;
        cout << endl << "Select your Choice: ";
        cin >> choice;
        cout << endl << "Enter Two Values: ";
        cin >> p >> q;
        if (choice == 1)
        {
            cout << endl << "Addition = " << p + q << endl;
        }
        else if (choice == 2)
        {
            cout << endl << "Subtraction = " << p - q << endl;
        }
        else if (choice == 3)
        {
            cout << endl << "Multiplication = " << p * q << endl;
        }
        else if (choice == 4)
        {
            cout << endl << "Division = " << p / q << endl;
        }
        else
        {
            cout << endl << "Invalid Input" << endl;
        }
    }
};

int main()
{
    C obj;
    obj.calculator();
}
--------------------------------------------------
//task29-Hierarchical Inheritance(15-04-2018)
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int id,sal;
    void input()
    {
        cout << "Input the ID: ";
        cin >> id;
        cout << "Input the Name: ";
        cin >> name;
    }

    void salary()
    {
        cout << "Input the Salary: ";
        cin >> sal;
    }
};

class Faculty : public Person
{
public:
    void teach()
    {
        input();
        salary();
        int i,n;
        string cname[10];
        cout << "How many courses the Faculty is taking: ";
        cin >> n;
        cout << "Name of the Courses are: " << endl;
        for (i=1;i<=n;i++)
        {
            cin >> cname[i];
            cout << endl;
        }

        cout << "*****Information of Faculty*****" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal << endl;
        cout << "Number of the Courses: " << n << endl;
        cout << "Name of the Courses" << cname[i] << endl;
        for (i=1;i<=n;i++)
            {
                cout << cname[i];
                cout << "\t";
            }
    }
};

class Student : public Person
{
public:
    void learn()
    {
        input();
        salary();
        int j,s;
        string sname;
        cout << "How many courses are completed: ";
        cin >> s;
        cout << "Name of the Courses that are completed: " << endl;
        for (j=1;j<=s;j++)
        {
            cin >> sname[j];
            cout << endl;
        }
        cout << "*****Information of Student*****" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal << endl;
        cout << "Number of the Courses that are completed: " << s << endl;
        cout << "Name of the Courses that are completed" << sname[j] << endl;
        for (j=1;j<=s;j++)
            {
                cout << sname[j];
                cout << "\t";
            }
    }
};

class Admin : public Person
{
public:
    void evaluation()
    {
        input();
        salary();
        int k,a;
        string aname;
        cout << "How many evaluation are done: ";
        cin >> a;
        cout << "Name of the Courses are: " << endl;
        for (k=1;k<=a;k++)
        {
            cin >> aname[k];
            cout << endl;
        }
        cout << "*****Information of Admin*****" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal << endl;
        cout << "Number of the Courses that are completed: " << a << endl;
        cout << "Name of the Courses that are completed" << aname[k] << endl;
        for (k=1;k<=a;k++)
            {
                cout << aname[k];
                cout << "\t";
            }
    }
};

class Cleaner : public Person
{
public:
    void clean()
    {
        input();
        salary();
        int c,l;
        string clname;
        cout << "How many floors are cleaned: ";
        cin >> c;
        cout << "Name of the Floors that are cleaned: " << endl;
        for (l=1;l<=c;l++)
        {
            cin >> clname[l];
            cout << endl;
        }
        cout << "*****Information of Cleaner*****" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal << endl;
        cout << "Number of the Courses that are completed: " << c << endl;
        cout << "Name of the Courses that are completed" << clname[l] << endl;
        for (l=1;l<=c;l++)
            {
                cout << clname[l];
                cout << "\t";
            }
    }
};

int main()
{
    cout << "Running Faculty Class" << endl;
    Faculty obj1;
    obj1.teach();
    cout << endl << endl << "Running Student Class" << endl;
    Student obj2;
    obj2.learn();
    cout << endl << endl << "Running Admin Class" << endl;
    Admin obj3;
    obj3.evaluation();
    cout << endl << endl << "Running Cleaner Class" << endl;
    Cleaner obj4;
    obj4.clean();
    cout << endl;
}
--------------------------------------------------
//task31-Pure Virtual Function(22-04-2018)
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void speech() = 0;
};

class cat : public Base
{
public:
    void speech()
    {
        cout << "Mew Mew" << endl;
    }
};

class dog : public Base
{
public:
    void speech()
    {
        cout << "Ghew Ghew" << endl;
    }
};

int main()
{
    cat obj;
    dog obj1;
    obj.speech();
    obj1.speech();
    return 0;
}
--------------------------------------------------
//task31-Pure Virtual Function-1(22-04-2018)
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void speech()
    {
        cout << "From Base Class" << endl;
    }
};

class derived : public Base
{
public:
    void speech()
    {
        cout << "From Derived Class" << endl;
    }
};


int main()
{
    Base *b;
    derived d;
    Base obj;
    obj.speech();
    b = &d;
    b->speech();
    return 0;
}
--------------------------------------------------
//task31-Pure Virtual Function-2(22-04-2018)
#include <iostream>
using namespace std;

class animal
{
public:
    virtual void speech() = 0;
};

class bird : public animal
{
public:
    void speech()
    {
        cout << "Bird Chirps" << endl;
    }
};

class tiger : public animal
{
public:
    void speech()
    {
        cout << "Tiger Roars" << endl;
    }
};

int main()
{
    animal *obj;
    bird obj1;
    tiger obj2;

    obj=&obj1;
    obj->speech();

    obj=&obj2;
    obj->speech();

    return 0;
}
--------------------------------------------------
