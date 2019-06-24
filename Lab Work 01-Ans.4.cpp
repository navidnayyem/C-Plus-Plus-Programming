/*Q.4. Write a C++ program that define for a class called Distance that has data member feet as integer and inches as float.
       The class has the following member functions:
       void set(int, float) to give value to object
       void disp() to display distance in feet and inches
       Distance add(Distance) to sum two distances & return distance
       - Write the definitions for each of the above member functions.
       - Write main function to create three Distance objects. Set the value in two objects and call add() to calculate sum
       and assign it in third object. Display all distances.
*/

#include<iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
	void disp();
	Distance add(Distance);
};

void Distance::disp()
{
	cout << feet << "\' " << inches << "\" " << endl;
}

Distance Distance::add(Distance ob)
{
	Distance t;
	t.inches = inches + ob.inches;
	t.feet = 0;
	if(t.inches>=12.0)
	{
		t.inches = t.inches - 12.0;
		t.feet++;
	}
	t.feet = t.feet + feet + ob.feet;
	return t;
}

int main()
{
	Distance obj1,obj2,obj3;
	obj1.setdist(5,7.1);
	obj2.setdist(6,2.3);
	obj3 = obj1.add(obj2);

	cout << "Distance 1 = ";
	obj1.disp();
	cout << "Distance 2 = ";
	obj2.disp();
	cout << "Distance 3 = ";
	obj3.disp();

	return 0;
}
