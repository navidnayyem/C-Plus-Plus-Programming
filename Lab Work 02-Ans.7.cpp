/*Q.7. Write a program that reverses a string and prints it on the screen.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100],temp;
    int i,j=0;

    cout << "Enter a String: ";
    gets(str);  //  gets function for input string

    i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout << "Reverse String is: " << str << endl;
    return 0;
}
