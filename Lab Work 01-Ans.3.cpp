/* Q.3.	Write a C++ program that lets the user perform arithmetic operations on two numbers. Your program must be menu driven,
        allowing the user to select the operation (+, -, *, or /) and input the numbers. Furthermore, your program must consist
        of following functions:
        - Function showChoice: This function shows the options to the user and explains how to enter data.
        - Function add: This function accepts two number as arguments and returns sum.
        - Function subtract: This function accepts two number as arguments and returns their difference.
        - Function multiply: This function accepts two number as arguments and returns product.
        - Function divide: This function accepts two number as arguments and returns quotient.
*/

#include <iostream>
using namespace std;

void showChoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
	float x,y;
	int choice;
	do
	{
		showChoices();
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nEnter Two Numbers: ";
			cin >> x >> y;
			cout << "Sum of " << x << " & " << y << " = " << add(x,y) << endl << endl;
			break;
		case 2:
			cout << "\nEnter Two Numbers: ";
			cin >> x >> y;
			cout << "\nDifference of " << x << " & " << y << " = " << subtract(x,y) << endl << endl;
			break;
		case 3:
			cout << "\nEnter Two Numbers: ";
			cin >> x >> y;
			cout << "Product of " << x << " & " << y << " = " << multiply(x,y) << endl << endl;
			break;
		case 4:
			cout << "\nEnter Two Numbers: ";
			cin >> x >> y;
			cout << "Quotient of " << x << " & " << y << " = " << divide(x,y) << endl << endl;
			break;
		case 5:
			break;
		default:
			cout << "\nInvalid Input.See Instruction Carefully" << endl << endl;
		}
	}while (choice != 5);

	return 0;
}

void showChoices()
{
	cout << "***Arithmetic Operations (+, -, *, or /) on Two Numbers***" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "Choose 1 to Add" << endl;
	cout << "Choose 2 to Subtract" << endl;
	cout << "Choose 3 to Multiply" << endl;
	cout << "Choose 4 to Divide" << endl;
	cout << "Choose 5 to Exit" << endl << endl;
	cout << "Enter Your Choice: ";
}

float add(float a, float b)
{
	return a + b;
}

float subtract(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}
