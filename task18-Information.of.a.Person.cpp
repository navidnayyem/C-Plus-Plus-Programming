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
