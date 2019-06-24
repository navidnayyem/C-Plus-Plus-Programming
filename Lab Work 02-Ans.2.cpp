/*Q.2. Write a program to calculate the area of a rectangle using constructor.*/

#include<iostream>
using namespace std;

class Area
{
private:
    int length,breadth;
public:
    Area(int x,int y)
    {
        cout << "By Using Constructor" << endl;
        length = x;
        breadth = y;
        cout << "Area of Rectangle is " << length * breadth << endl;
    }
};

int main()
{
    Area obj(5,6);
}
