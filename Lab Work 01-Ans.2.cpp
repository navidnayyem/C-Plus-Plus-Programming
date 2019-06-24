/*Q.2. Write a C++ program for function that receives two numbers as an argument and display all prime numbers between these
       two numbers. Call this function from main( ).*/

#include<iostream>
using namespace std;

int main()
{
	int a,b,i,j,flag;
	cout << "Enter 1st & 2nd Number: ";
	cin >> a >> b;
	cout << "\nThe Prime Numbers between " << a << " & " << b << " are: " << endl;
	for(i=a+1;i<=b;i++)
	{
		flag = 0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0 && i>1)
			cout << i << "\t";
	}
	return 0;
}

