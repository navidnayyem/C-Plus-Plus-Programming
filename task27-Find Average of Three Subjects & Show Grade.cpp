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
