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
