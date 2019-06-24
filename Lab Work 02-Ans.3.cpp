/*Q.3. Write a program and input two integers in main and pass them to default constructor of the class.
       Show the result of the addition of two numbers.*/

#include <iostream>
using namespace std;

class Addition
{
public:
    int n1,n2;
    Addition(int num1,int num2)
    {
        n1 = num1;
        n2 = num2;
    }
    int sum()
    {
        return n1 + n2;
    }
};

int main()
{
    int x,y;
	cout<<"Enter Two Numbers: ";
	cin >> x >> y;
	Addition obj(x,y);
	cout << "The Addition of Two Numbers are: "<< obj.sum() << endl;
	return 0;
}
