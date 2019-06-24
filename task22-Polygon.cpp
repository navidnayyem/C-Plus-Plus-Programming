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
