/*Q.5. Write a C++ program that define for a class called time that has hours and minutes as integer. The class has the following
       member functions:
       void settime(int, int) to set the specified value in object
       void showtime() to display time object
       time sum(time) to sum two time object & return time
       - Write the definitions for each of the above member functions.
       - Write main function to create three time objects. Set the value in two objects and call sum() to calculate sum and
       assign it in third object. Display all time objects.
*/

#include<iostream>
using namespace std;

class time
{
private:
	int hours;
	int minutes;
public:
	void settime(int h, int m)
	{
		hours = h;
		minutes = m;
	}
	void showtime();
	time sum(time);
};

void time::showtime()
{
	cout << hours << " Hours & " << minutes << " Minutes" << endl;
}

time time::sum(time ob)
{
	time t;
	t.minutes = minutes + ob.minutes;
	t.hours = t.minutes / 60;
	t.minutes = t.minutes % 60;
	t.hours = t.hours + hours + ob.hours;
	return t;
}

int main()
{
	time obj1,obj2,obj3;
	obj1.settime(2,45);
	obj2.settime(3,30);
	obj3 = obj1.sum(obj2);

	cout << "Time 1: ";
	obj1.showtime();
	cout << "Time 2: ";
	obj2.showtime();
	cout << "Time 3: ";
	obj3.showtime();

	return 0;
}
