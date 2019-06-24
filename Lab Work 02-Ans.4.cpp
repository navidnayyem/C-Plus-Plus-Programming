/*Q.4. Write a program that asks the user for an integer number and find the sum of all natural numbers up to that number.*/

#include <iostream>
using namespace std;

int main()
{
    int a,i,sum = 0;
    cout << "Enter a Positive Integer: ";
    cin >> a;

    for (i=1;i<=a;i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
