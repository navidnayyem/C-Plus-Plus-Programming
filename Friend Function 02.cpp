#include<iostream>
using namespace std;

class area
{
    double height,width;
public:
    void display()
    {
        cout << "This is a Program to Find out Area of a Triangle" << endl;
    }
    void input()
    {
        cout << "\nEnter the Height of Triangle: ";
        cin >> height;
        cout << "Enter the Width  of Triangle: ";
        cin >> width;
    }
    friend void area_of_triangle(area ob);
};

void area_of_triangle(area ob)
{
    double ar;
    ar = 0.5 * (ob.height*ob.width);
    cout << "\nThe Area of a Triangle is: " << ar << endl;
}

int main()
{
    area obj;
    obj.display();
    obj.input();
    area_of_triangle(obj);
}
