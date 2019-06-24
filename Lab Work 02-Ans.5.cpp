/*Q.5. Write a program that ask for two numbers, compare them and show the maximum. Declare a function called max_two that
       compares the numbers and returns the maximum.*/

#include <iostream>
using namespace std;

int max_two(int x, int y)
{
    int max_num;
	if (x > y)
	max_num = x;
	else
	max_num = y;
	return max_num;
}

int main()
{
	int p,q,maximum;
	cout << "Enter 1st Number: ";
	cin >> p;
	cout << "Enter 2nd Number: ";
	cin >> q;
	maximum = max_two(p,q);
	cout << "\nThe Maximum of "<< p << " and " << q << " is: " << maximum << endl;
	return 0;
}
