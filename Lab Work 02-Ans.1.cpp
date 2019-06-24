/*Q.1. Write a program to swap two values using function.*/

#include<iostream>
using namespace std;

void swap(int,int);
//Call by Value
int main()
{
    int a,b;
    cout << "Enter Two Numbers To Swap" << endl;
    cin >> a >> b;
    cout << "\nAfter Swapping Numbers are Given Below" << endl;
    swap(a,b);
    return 0;
}

void swap(int x,int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    cout << x << " " << y << endl;
}
