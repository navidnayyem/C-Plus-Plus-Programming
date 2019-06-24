/*Q.8. Write a program that checks if the angles given can make a triangle or not (their sum must be 180 degrees).*/

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter the three angles of triangle: ";
	cin >> a >> b >> c;

	if (a + b + c == 180)
		cout << "\nIt is a Triangle" << endl;
	else
		cout << "\nIt is not a Triangle" << endl;

	return 0;
}
