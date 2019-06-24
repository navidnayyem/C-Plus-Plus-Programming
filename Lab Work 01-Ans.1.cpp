/*Q.1. Write a C++ program for function to calculate the factorial value of any integer as an argument.
       Call this function from main( ) and print the results in main( ).*/

#include<iostream>
using namespace std;

int main()
{
	int n,i,r=1;
	cout << "Enter a Number: ";
	cin >> n;

	for(i=1;i<=n;i++)
       r = r * i;

	cout << "\nThe Factorial of " << n << " is: " << r << endl;
	return 0;
}

