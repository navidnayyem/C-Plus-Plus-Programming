/*Q.10.	Write a program which calculates the sum of all odd numbers upto a particular limit. The limit will be an input to the
        program.*/

#include <iostream>
using namespace std;

int main()
{
    int i, num, odd_sum = 0;

    cout << "Enter a Limit of Number: ";
    cin >> num;
    for (i=1;i<=num;i++)
    {
        if (i % 2 != 0)
            odd_sum = odd_sum + i;
    }
    cout << "\nSum of All Odd Numbers = " << odd_sum << endl;

}
