#include <iostream>//header file

using namespace std;

class student{
public:
    string name;//declaring a variable of name of string data type
    int age; //declaring a variable of integer age

    cin >> name;//input your name

};
int main(){
    student obj1;
    obj1.input();
    return 0;// this means success
}

//this program will not work because class student has no member named 'input'.
