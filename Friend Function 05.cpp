#include <iostream>
using namespace std;

class leap_year
{
private:
    int yr;
public:
    void display()
    {
        cout << "This is a Program to determine whether the year is a Leap Year or Not." << endl << endl;
    }
    void input()
    {
        cout << "Enter a Year to check if it is a Leap Year: ";
        cin >> yr;
    }
    friend void output(leap_year ob);
};

void output(leap_year ob)
{
    if (ob.yr % 400 == 0) // Exactly divisible by 400 e.g. 1600, 2000
        cout << ob.yr <<" is a Leap Year." << endl;
    else if (ob.yr % 100 == 0) // Exactly divisible by 100 and not by 400 e.g. 1900, 2100
        cout << ob.yr <<" is not a Leap Year." << endl;
    else if (ob.yr % 4 == 0) // Exactly divisible by 4 and neither by 100 nor 400 e.g. 2016, 2020
        cout << ob.yr <<" is a Leap Year.\n" << endl;
    else // Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019
        cout << ob.yr <<" is not a Leap Year.\n" << endl;
}

int main(){
    leap_year obj;
    obj.display();
    obj.input();
    output(obj);
    return 0;
}
