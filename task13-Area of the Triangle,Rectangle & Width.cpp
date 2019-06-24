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
       cout<<"Area of Circle: " << (3.14 * radius * radius) << endl;;

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
